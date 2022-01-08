/*
6.1.3 Extendable-array-based implementation
This improves upon simple array implementation, which requires advance
specification of a fixed capacity N for total number of elements that
may be stored in the vector. If the actual number of elements is smaller than N, memory will b wasted
If n exceeds N, implementation will crash. 


*/

typedef int Element;
class Vector
{
private: 
	Element* A;				//array storing elements
	int n;					//number of elements in Vector
	int capacity;
public:
	//default ctor
	Vector();
	//ctor
	Vector(int size , int cap )
		: n{ size }, capacity{ cap }, A{ nullptr } {}
	int size() const;
	bool isEmpty() const;

	//element access operator
	//pass by referecne but why?
	Element operator[] (int i);		//element at index i
	Element at(int i);

	void erase(int i);
	//pass arg by reference
	void insert(int i, const Element e);
	void reserve(int N);

	/*rule of 3 house keeping
	ctor ;  assignment operator ; dtor*/
	//~Vector() {delete [] A}


};
