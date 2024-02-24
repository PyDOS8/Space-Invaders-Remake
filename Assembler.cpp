#include <iostream>
#include <fstream>
#include <map>

int main() {
    std::map<std::string, std::string> Assembly_instructions = {
        {"add", "0x1"}
    };

    while (true) {
        std::string file;
        std::cout << "Enter a file > ";
        std::cin >> file;

        if (std::ifstream(file)) {
            std::ifstream rf(file);
            std::string AssemblyCode;
            rf >> AssemblyCode;

            if (Assembly_instructions.find(AssemblyCode) != Assembly_instructions.end()) {
                std::string AssemblyInstruction = Assembly_instructions[AssemblyCode];
                
                std::string machineCodeFileName;
                std::cout << "Enter the binary file name you want to create (Including .bin extension) > ";
                std::cin >> machineCodeFileName;

                if (!std::ifstream(machineCodeFileName)) {
                    std::ofstream wf(machineCodeFileName);
                    wf << AssemblyInstruction;
                    wf.close();
                    rf.close();
                } else {
                    std::cout << "The file " << machineCodeFileName << " already exists!" << std::endl;
                }
            } else {
                std::cout << "The instruction " << AssemblyCode << " is not a valid Assembly instruction" << std::endl;
            }
        } else {
            std::cout << "Invalid file. Please enter a valid file name." << std::endl;
        }
    }

    return 0;
}
