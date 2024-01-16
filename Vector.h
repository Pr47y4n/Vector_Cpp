#ifndef LSN1_H
#define LSN1_H

class Vector{
	public:
		Vector();
		Vector(const int capacity);
		Vector(const Vector&);
		~Vector();
	private:
		int m_capacity;
		int m_size;
		int* m_elems;
	public:
		int get_capacity() const;
		int get_size() const;
		void print();
		void push_back(int);
		void pop_back();
		Vector operator+(const Vector&);				
};
#endif // lsn1h
