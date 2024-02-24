import os
from Parser import JavaParser
machineCode = {
        "add": "0x0EE",
        "subtract": "0x4",
        "multiply": "0x7",
        "divide": "0x8",
}
while True:
    AssemblyFile = input("Enter an Assembly file > ")
    if os.path.exists(AssemblyFile):
        if AssemblyFile.endswith(".java"):
                JavaParser()
        else:
             with open(AssemblyFile, "r"):
                     if AssemblyFile.read() in machineCode:
                             machineCode = machineCode[AssemblyFile.read()] 
                             machineCodeFileName = input("Enter a name for the machine code file > ")
                             if os.path.exists(machineCodeFileName):
                                     with open(machineCodeFileName, "a") as af:
                                             af.append(AssemblyFile.read())
                             else:
                                     with open(machineCodeFileName, "w") as wf:
                                             wf.write(AssemblyFile.read())
                     else:
                             print(f'{AssemblyFile.read()} is not an existing instruction')
