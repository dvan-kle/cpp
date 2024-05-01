/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/16 15:03:36 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/05/01 17:59:06 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Run: ./Replace <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	// assign arguments to variables
	std::string infile(argv[1]);
	std::string outfile(argv[1]);
	outfile += ".replace";
	std::string find(argv[2]);
	std::string replace(argv[3]);
	// open files
	std::ifstream ifs(infile);
	if (!ifs.is_open())
	{
		std::cout << "\033[1;31m" << "ERROR: " << "\033[0m" << "Failed to open file" << std::endl;
		return (0);
	}
	std::ofstream ofs(outfile);
	if (!ofs.is_open())
	{
		std::cout << std::endl << "\t ERROR: Failed to create outfile" << std::endl << std::endl;
		return (0);
	}
	// read file line by line
	std::string line;
	while(std::getline(ifs, line))
	{
		size_t pos = line.find(find);
		while(pos != std::string::npos)
		{
			line = line.substr(0, pos) + replace + line.substr(pos + find.length());
			pos = line.find(find, pos + replace.length());
		}
		ofs << line << std::endl;
		if (ifs.eof())
			break ;
	}
	ifs.close();
	ofs.close();
	return (0);
}