#pragma once

#include <iostream>

template <typename T>

class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(Array const & src);
        Array & operator=(Array const & rhs);
        ~Array();

        T & operator[](unsigned int i);
        unsigned int size() const;

    private:
        T * _array;
        unsigned int _size;
};


