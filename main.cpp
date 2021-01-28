#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include "Stu.h"
#include "Person.h"
#include "Progression.h"
#include "Arithmetic.h"
#include "Geometric.h"
#include "ArrayStack.h"
#include "LinkedListStack.h"
#include "DLLdeque.h"
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

    

	return 0;
}