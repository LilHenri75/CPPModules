#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		std::cout << "Usage: ./replace <filename> <string to replace> <string to replace with>" << std::endl;
		return (1);
	}
	else
	{
		// Open the input file (filename) in read mode
		std::ifstream ifs(argv[1]);
		if (!ifs)
		{
			std::cout << "Error: could not open file" << std::endl;
			return (1);
		}
		// Create the output file (filename + ".replace") in write mode
		std::ofstream ofs((std::string(argv[1]) + ".replace").c_str());
		if (!ofs)
		{
			std::cout << "Error: could not create file" << std::endl;
			return (1);
		}
		// Read the input file line by line
		std::string line;
		while (std::getline(ifs, line))
		{
			// Replace all occurences of s1 by s2
			size_t pos = 0;
			while ((pos = line.find(argv[2], pos)) != std::string::npos)
			{
				line.replace(pos, std::string(argv[2]).length(), argv[3]);
				pos += std::string(argv[3]).length();
			}
			// Write the line to the output file
			ofs << line << std::endl;
		}
		// Close the files
		ifs.close();
		ofs.close();
		return (0);
	}
}