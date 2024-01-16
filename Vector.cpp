#include <iostream>

#include "lsn1.h"

Vector::Vector ()
	: m_size{0}
	, m_capacity{4}
	, m_elems{new int[m_capacity]}	
{}

Vector::Vector (const int capacity)
	: m_capacity { capacity }
	, m_size{0}
	, m_elems{new int[m_capacity]}
{}

Vector::~Vector()
{
delete [] m_elems;
}

int Vector::get_capacity() const {
	return m_capacity;
}
int Vector::get_size() const {
	return m_size;
}
void Vector::push_back(const int new_last){
	if(m_size == m_capacity){
		m_capacity *= 2;
		int* new_elems = new int[m_capacity];
		for(int i = 0; i < m_size; i++){
			new_elems[i] = m_elems[i];
		}
		delete[] m_elems;
		m_elems = new_elems;
	}
	if(m_size == 0){
		m_elems[m_size] = new_last;
	}
	m_elems[m_size++] = new_last;
}

void Vector::pop_back(){
	if(m_size > 0){
	--m_size;
	}else{
		std::cout << "Size is 0, can't do that" << std::endl;
	}	
}

Vector Vector::operator+(const Vector& other){
	if(m_size != other.m_size){
		std::cout << " Must have same size" << std::endl;
	}else{
		Vector res;
		res.m_size = m_size;
		res.m_capacity = m_size;
		res.m_elems = new int[m_size];

		for(int i = 0; i < m_size; ++i)
		{
			res.m_elems[i] = m_elems[i] + other.m_elems[i];
		}
		return res;
	}
	return other;
}

void Vector::print(){
	for(int i = 0; i < m_size; ++i){
		std::cout << m_elems[i] << " ";
	}
}

Vector::Vector(const Vector& oth){
	m_capacity = oth.m_capacity;
	m_size = oth.m_size;
	m_elems = new int[m_size];
	for(int i = 0; i < m_size; ++i){
		m_elems[i] = oth.m_elems[i];	
	}
}
