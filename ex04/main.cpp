#include <fstream>
#include <iostream>
#include <sstream>

int main(int argc, char** argv) {
	if (argc != 4) {
		std::cout << "ERROR\nincorrect parameters\n";
		return 1;
	}

	const std::string filename = argv[1];
	const std::string s1 = argv[2];
	const std::string s2 = argv[3];

	if (s1.empty()) {
		std::cerr << "ERROR\ns1 cannot be empty\n";
		return 1;
	}

	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open()) {
		std::cerr << "ERROR\nUnable to open file: " << filename << std::endl;
		return 1;
	}

	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile.is_open()) {
		std::cerr << "ERROR\nUnable to create output file\n";
		return 1;
	}

	std::string line;
	while (std::getline(inputFile, line)) {
		std::string newLine;
		size_t start = 0;
		size_t pos;

		while ((pos = line.find(s1, start)) != std::string::npos) {
			newLine.append(line, start, pos - start);
			newLine.append(s2);
			start = pos + s1.length();
		}
		newLine.append(line, start, std::string::npos);  // Append remaining part
		outputFile << newLine << std::endl;
	}

	inputFile.close();
	outputFile.close();
	return 0;
}
