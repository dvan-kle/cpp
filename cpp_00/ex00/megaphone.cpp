/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 11:03:54 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/03/15 16:02:11 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc > 1)
	{
        for (int i = 1; i < argc; ++i)
		{
            for (int j = 0; argv[i][j]; j++)
				argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i];
        }
    }
	else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;

    return 0;
}
