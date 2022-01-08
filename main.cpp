#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include "OO Design/Stu.h"
#include "OO Design/Person.h"
#include "OO Design/Progression.h"
#include "OO Design/Arithmetic.h"
#include "OO Design/Geometric.h"
#include "Stacks/ArrayStack.h"
#include "Stacks/LinkedListStack.h"
#include "Deque/DLLdeque.h"
#include "Vector.h"
#include "Arrays, LLists and Rec/SLList.h"



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

/*template <typename T>
T minim(T a, T b)
{
    return a < b ? a : b;
}*/



int main() {

    //SinglyLinkedList test

    //SLList<int> myList;
    /*myList.addFront(10);
    myList.addFront(20);
    int end = myList.end();
    std::cout << end << "\n";*/

    std::vector<int> v{ 1,2,3,4 };
    for (auto& i : v)
        std::cout << i << "\t";
	return 0;
}