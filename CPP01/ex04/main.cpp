/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 00:29:19 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/21 00:55:02 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	replace(char **argv, std::string str) {
	std::ofstream	outfile;
	int				pos;

	outfile.open((std::string(argv[1]) + ".replace").c_str()); // Create a new file
	if (outfile.fail()) // Check if file is open
		return 1;
	for (int i = 0; i < (int)str.size(); i++) // Replace the word
	{
		pos = str.find(argv[2], i); // Find the position of the word
		if (pos >= 0 && pos == i) // If the word is found
		{
			outfile << argv[3]; // Replace the word
			i += std::string(argv[2]).size() - 1; // Skip the word
		}
		else
			outfile << str[i]; // If word is not found, copy the character
	}
	outfile.close(); // Close file
	return (0);
}

int	main(int argc, char **argv) {
	char			c;
	std::ifstream	infile;
	std::string		str;

	if (argc != 4)
	{
		std::cout << "usage: replace <file> old_word new_word" << std::endl;
		return 1;
	}
	infile.open(argv[1]); // Open file
	if (infile.fail()) // Check if file is open
	{
		std::cout << "Error: " << argv[1] << ":" << " no such file or directory" << std::endl;
		return 1;
	}
	while(!infile.eof() && infile >> std::noskipws >> c) // Read the content of the file
		str += c; // Copy the content of the file in a string
	infile.close(); // Close file
	return (replace(argv, str)); // Replace the word and write the result in a new file
}