function regAbstractCircuit()
    print("regAbstractCircuit()")
    registerAbstractCircuit("Splitter", "splitter")
    print("1")
    registerAbstractCircuit("Pull Resistor", "pullresistor")
    print("2")
    registerAbstractCircuit("Constant", "constant")
    print("3")
    registerAbstractCircuit("Clock", "clock")
    print("4")
    registerAbstractCircuit("Ground", "ground")
    print("5")
    registerAbstractCircuit("Tunnel", "tunnel")
    print("6")
    registerAbstractCircuit("Transistor", "transistor")
    print("7")
    registerAbstractCircuit("Power", "power")
    print("8")
    registerAbstractCircuit("Pin", "pin")
    print("9")
    registerAbstractCircuit("Probe", "probe")
    print("10")
    registerAbstractCircuit("Bit Extender", "bitextender")
    print("11")
    registerAbstractCircuit("Transmission Gate", "transmissiongate")
    print("12")
    print("regAbstractCircuit() returning")
    return 0
end

function notgate()

end