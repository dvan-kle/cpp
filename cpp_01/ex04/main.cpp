/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/16 15:03:36 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/01/16 15:05:38 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	std::string infile(argv[1]);
	std::string outfile(argv[1]);
	outfile += ".replace";
	std::string find(argv[2]);
	std::string replace(argv[3]);
	
	std::ifstream ifs(infile);
	std::ofstream ofs(outfile);
	if (!ifs.is_open() || !ofs.is_open())
		return (0);
	std::string line;
	while (std::getline(ifs, line))
	{
		while (line.find(find) != std::string::npos)
			line.replace(line.find(find), find.length(), replace);
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}