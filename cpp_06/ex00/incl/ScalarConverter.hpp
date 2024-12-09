/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 16:14:51 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/12/10 19:35:10 by dvan-kle      ########   odam.nl         */
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
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &obj);
		virtual ~ScalarConverter();
		const ScalarConverter &operator=(const ScalarConverter &obj);

		static void convert(const std::string &input);

		static void print_char(const std::string &input);
		static void print_int(const std::string &input);
		static void print_float(const std::string &input);
		static void print_double(const std::string &input);
		static void print_word(const std::string &input);
};