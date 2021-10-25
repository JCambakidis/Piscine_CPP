#ifndef ARRAY_HPP
# define ARRAY_HPP

#include<iostream>

template <typename T>
class Array
{

	class OutOfBoundException : public std::exception
	{
		private:
		public:
			OutOfBoundException() throw();
			~OutOfBoundException() throw();
			const char* what() const throw();
	};
	
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &instance);
		Array &operator=(Array const &rhs);
		T &operator[](size_t index);
		T const &operator[](size_t index) const;
		~Array(void);
		size_t	size() const;

	private:
		size_t _size;
		T *_array;

};

template <typename T>
Array<T>::OutOfBoundException::OutOfBoundException() throw() {}

template <typename T>
Array<T>::OutOfBoundException::~OutOfBoundException() throw() {}

template <typename T>
const char* Array<T>::OutOfBoundException::what() const throw()
{
	return "Index out of bounds\n";
}

template <typename T>
Array<T>::Array(void): _size(0), _array(nullptr)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n), _array(nullptr)
{
	_array = new T[n]();
}

template <typename T>
Array<T>::Array(Array<T> const &instance)
{
	if (_size > 0)
		delete[] _array;
	_array = new T[instance.size()];
	for (size_t i = 0; i < instance.size(); i++)
		this->_array[i] = instance._array[i];
	_size = instance.size();
}

template <typename T>
Array<T>::~Array(void)
{
	
}

template <typename T>
Array<T> &	Array<T>::operator=(Array<T> const &rhs)
{
	if (_size > 0)
		delete[] _array;
	_array = new T[rhs.size()];
	for (size_t i = 0; i < rhs.size(); i++) {
		_array[i] = rhs._array[i];
	}
	_size = rhs.size();
	return *this;
}

template <typename T>
T &	Array<T>::operator[](size_t index)
{
	if (index >= _size)
		throw Array::OutOfBoundException();
	return _array[index];
}

template <typename T>
T const &	Array<T>::operator[](size_t index) const
{
	return _array[index];
}

template <typename T>
size_t	Array<T>::size() const
{
	return _size;
}

#endif