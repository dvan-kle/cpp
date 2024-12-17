#pragma once
#include "Data.hpp"
#include <iostream>



class Serializer
{
	private:
		Serializer();
	public:
		virtual ~Serializer() = 0;
		Serializer(const Serializer &obj) = delete;
		const Serializer &operator=(const Serializer &obj)= delete;

		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};