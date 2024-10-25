/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 16:14:51 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/04/18 16:19:50 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter 
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other) = delete;
		ScalarConverter& operator=(const ScalarConverter& other) = delete;
		virtual ~ScalarConverter() = 0;

		static void convert(std::string input);
	
	private:
		static bool isChar(std::string input);
		static bool isInt(std::string input);
		static bool isFloat(std::string input);
		static bool isDouble(std::string input);

		static void printChar(char c);
		static void printInt(int i);
		static void printFloat(float f);
		static void printDouble(double d);
};