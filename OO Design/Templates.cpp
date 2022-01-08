/*
"Inheritance is only one mechanism that the C++ lang provides in sopport of polymorphism.
In this section we consider another way - using templates"  <---- what does he mean ehre

*/

//2.3.1 Function Templates

/// <summary>
/// returns minimum of two integers
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
int integerMin(int a, int b)
{
	return a < b ? a : b;
}

/*
C++ provides an automatic mechanism - the function template to produce a generic function
for an arbitrary type. A function template provides a well-defined pattern from which a concrete function
may later be formally defined or instatiated
*/

//typename T is the param list, in this case, just one
template <typename T>
T genericMin(const T a, const T b)
{
	return a < b ? a : b;
}

//With this template, we can now invoke our templated function to compute minimum of objects of different types
//Compiler looks at argurments and determines which form of the function to instatiate. 

//2.3.2 Class Templates
//The STL uses class templates EXTENSIVELY

/*

*/
template <typename T>
class BasicVector
{
private:
	T* a;
	int capacity;
public:
	BasicVector(int c = 10);
	T& operator[] (int i) { return a[i] };
};

//definition of constructor outside class body
//would probably be stored in header file or in class defn
//indexing operator - polymorphsim example where operator is overloaded to be used with user defined types
template<typename T>
BasicVector<T>::BasicVector(int capac)
	: capacity{ capac }
{
	a = new T[capacity];
}

//TO instantiate a concrete instance of the class BasicVector
BasicVector<int> basicInt(5);
BasicVector<std::string> basicString(10); //vector of 10 strings
