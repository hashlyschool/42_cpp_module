#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array{
private:
	T	*_Data;
	unsigned int	_size;
public:
	Array(): _Data(new T[0]), _size(0) {}
	Array(unsigned int n) : _Data(new T[n]), _size(n) {}
	Array(const Array& copy) : _Data(new T[copy._size]), _size(copy._size){
		for (unsigned int i = 0; i < _size; i++)
			_Data[i] = copy._Data[i];
	}
	~Array() {
		delete [] _Data;
	}
	unsigned int	size() const{
		return (_size);
	}
	Array	&operator=(const Array &rhs){
		delete [] _Data;
		_size = rhs._size;
		_Data = new T[rhs._size];
		for (unsigned int i = 0; i < _size; i++)
			_Data[i] = rhs._Data[i];
		return (*this);
	}
	T	&operator[](unsigned int i){
		if (i >= _size){
			throw std::exception();
		}
		return (_Data[i]);
	}
};

#endif
