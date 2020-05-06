//
// Created by penta on 2020-05-03.
//

#include <iostream>

#include "library.h"
#include "tcclibrary.h"
#include "fileloader.h"
#include "circuit.h"

using namespace FileLoader;

AbstractCircuit* FileLoader::localAbstract(const char* lib, const char* name) {
    LibraryManager lm;
    Library* l = nullptr;

    if(lm.hasLibrary(lib)) {
        if(typeid(lm.getLibrary(lib)) != typeid(Library*)) lm.deleteLibrary(lib);
        else l = lm.getLibrary(lib);
    } else {
        switch (lib[1]) {
            case 'W':
                if (strcmp(lib, "#Wiring")) break;
                l = new TccLibrary("wiring.zip");
                break;
            case 'G':
                if (strcmp(lib, "#Gates")) break;
                l = new TccLibrary("gates.zip");
                break;
            case 'P':
                if (strcmp(lib, "#Plexers")) break;
                l = new TccLibrary("plexers.zip");
                break;
            case 'A':
                if (strcmp(lib, "#Arithmetic")) break;
                l = new TccLibrary("arithmetic.zip");
                break;
            case 'M':
                if (strcmp(lib, "#Memory")) break;
                l = new TccLibrary("memory.zip");
                break;
            case 'I':
                if (strcmp(lib, "#I/O")) break;
                l = new TccLibrary("iando.zip");
                break;
            case 'B':
                if (strcmp(lib, "#Base")) break;
                l = new TccLibrary("base.zip");
                break;
            default:
                std::cout << "UNKNOWN LOCAL LIBRARY" << std::endl;
                return nullptr;
        }
        std::cout << "LOADING LOCAL LIBRARY " << lib << " " << name << std::endl;
        lm.registerLibrary(l, lib);
    }

    return l->getAbstractCircuit(name);
}