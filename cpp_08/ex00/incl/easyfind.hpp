#pragma once

#include <iostream>

template <typename T>
typename T::iterator easyfind(T &container, int value);

#include "../src/easyfind.tpp"