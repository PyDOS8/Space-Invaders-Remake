import os
machineCode = {
        "add": "0x0EE",
}

while True:
    AssemblyFile = input("Enter an Assembly file > ")
    if os.path.exists(AssemblyFile):
        with open(AssemblyFile, "r") as rf:
            AssemblyCode = rf.read().strip()
            if rf.read in machineCode:
                newMachineCode = machineCode[rf.read()]
                machineCodeFile = input("Enter a machine code file > ")
                if not os.path.exists(machineCodeFile):
                    with open(machineCodeFile, "w") as wf:
                        wf.write(newMachineCode)
                else:
                    print(f"The file {AssemblyFile} doesn't exist!")
                    rf.close()
            else:
                print(f"The instruction {rf.read()} is not valid!")
    else:
        print(f"The file {AssemblyFile} does not exist!")
