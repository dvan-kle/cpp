/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 16:14:51 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/12/17 13:55:34 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

enum literal_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	WORD,
	INVALID
};

class ScalarConverter 
{
	private:
		ScalarConverter();
	
	public:
		ScalarConverter(const ScalarConverter &obj) = delete;
		const ScalarConverter &operator=(const ScalarConverter &obj) = delete;
		virtual ~ScalarConverter() = 0;

		static void convert(const std::string &input);

};

void print_char(const std::string &input);
void print_int(const std::string &input);
void print_float(const std::string &input);
void print_double(const std::string &input);
void print_word(const std::string &input);