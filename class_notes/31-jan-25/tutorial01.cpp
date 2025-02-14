#include <iostream>
#include <fstream>
#include <string>

void writeToFile(const std::string& filename, const std::string& content) {
    std::ofstream outFile(filename, std::ios::app);
    if (outFile.is_open()) {
        outFile << content;
        outFile.close();
        // No explicit close here
    } else {
        std::cerr << "Failed to open file for writing." << std::endl;
    }
}

void simpleRead(const std::string& filename) {
    std::ifstream inFile(filename);
    std::string line;
    while (inFile >> line) {
        std::cout << line << std::endl;
    }
    if(!inFile.is_open()) {
        std::cerr << "Failed to open file for reading." << std::endl;
        return;
    }
}

void readWriteConflict(const std::string& filename){
    std::ofstream outFile(filename);
    std::ifstream inFile(filename);

    if (outFile.is_open() && inFile.is_open()) {
        outFile << "Writing to file." << std::endl;
        std::string line;
        while (getline(inFile, line)){
            std::cout << line << std::endl;
        }
    }else {
        std::cerr << "Failed to open file." << std::endl;
    }
}
 
int main() {
    writeToFile("example.txt", "First write.\n");
    writeToFile("example.txt", "Second write.\n");
    //simpleRead("input.txt");
    //readWriteConflict("example.txt");
    return 0;
}