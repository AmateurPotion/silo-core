//
// Created by penta on 2020-05-01.
//

#ifndef SILO_CORE_FILELOADER_H
#define SILO_CORE_FILELOADER_H

#include <string>
#include "../circuit.h"

namespace FileLoader {
    Circuit* logisim(const std::string& name);
}

#endif //SILO_CORE_FILELOADER_H
