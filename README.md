# Integer Vector Implementation in C++

This C++ project provides a simple implementation of a vector class tailored for integer elements. The Vector class includes functionalities such as pop_back, push_back, operator+, and supports copy and parameterized constructors.

# Features
 
  *  **Vector Class**: A custom implementation of a vector class specifically designed for integers.

  *  **pop_back** and **push_back**: Methods to remove and add elements to the back of the vector, respectively.

  *  **Operator+**: Overloaded + operator to concatenate two vectors.

  * **Copy Constructor**: Demonstrates the use of a copy constructor for creating a deep copy of a vector.

  *  **Parameterized Constructor**: Allows users to create a vector with a specified size and initial values.

# Project Structure

Vector.h and Vector.cpp : Define and implement the Vector class.

# Integration 

Clone the repository to your local machine, copy the **vector_int.h** and **vector_int.cpp** files to your project directory and in your **main.cpp** include the necessary header file.

# Usage

Create instances of the Vector class and test its functionalities in your main.cpp. Utilize push_back, pop_back, operator+, and demonstrate the use of the copy constructor and parameterized constructor.

    int main() {
    // Create vectors
    VectorInt v1;                           // Default constructor
    VectorInt v2(5);                     // Parameterized constructor

    // Push back elements
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(9);

    // Display vectors
    std::cout << "v1: ";
    v1.print();

    std::cout << "v2: ";
    v2.print();

    std::cout << "v3 (copy of v2): ";
    v3.print();

    // Pop back an element
    v1.pop_back();

    // Concatenate vectors using operator+
    VectorInt v4 = v2 + v1;
    std::cout << "v4 (v2 + v1): ";
    v4.print();

    return 0;
    }
