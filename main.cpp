#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include "2. OO Design/Stu.h"
#include "2. OO Design/Person.h"
#include "Progression.h"
#include "Arithmetic.h"
#include "Geometric.h"
#include "Stacks/ArrayStack.h"
#include "Stacks/LinkedListStack.h"
#include "Deque/DLLdeque.h"
#include "Vector.h"




//LIST ADT

bool checkIfExist(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
    //int i = 0;
    //int j = arr.size() - 1;
    for(size_t i = arr.size() - 1; i > 0; --i){
        if (arr[i] == 2 * arr[i - 1])
        {
            std::cout << "yes";
            return true;
        }
    }
    //std::cout >> "no";
    return false;
}

class Box
{
private:
    double length{ 1.0 };
    double width{ 1.0 };
    double height{ 1.0 };
public:
    // Constructor
    Box(double lengthValue, double widthValue, double heightValue)
    {
        std::cout << "Box constructor called." << std::endl;
        length = lengthValue;
        width = widthValue;
        height = heightValue;
    }
};

/*template <typename T>
T minim(T a, T b)
{
    return a < b ? a : b;
}*/

int main() {

    //2.2.1 Member Functions
    //an object of type Person(BASE) can accesspublic members of both classes
    //However if student(CHILD) invokes the shared 'print' function
    //it will use its own by default

    //declare person object
    Person pson("Mary ", "12-11");
    Student st("Bob", "21-22", "Mathematics", 2024);

    pson.print();
    st.print();

	return 0;
}