#include "../incl/Array.hpp" 	

template <typename T>
Array<T>::Array()
{
	_array = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array(Array const & src) : _array(new T[src._size]), _size(src._size)
{
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = src._array[i];
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs)
{
	if (_array)
		delete[] this->_array;
	if (rhs.size() != 0)	
	{
		_array = new T[rhs._size];
		_size = rhs._size;
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
T & Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw std::out_of_range("Index out of range");
	return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template class Array<int>;
template class Array<float>;
template class Array<double>;
template class Array<std::string>;



