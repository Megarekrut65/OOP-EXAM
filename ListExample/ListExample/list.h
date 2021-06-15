#pragma once
#include <iostream>
template<typename T>
class List
{
public:
    void append(T value);
    void insert(T value, std::size_t index);
    void remove(std::size_t index);
    friend std::ostream& operator<<(std::ostream& out, const List& list);
};

