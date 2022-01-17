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
#include "Arrays, LLists and Rec/Scores.h"
#include "Arrays, LLists and Rec/Array.h"
#include "Stacks/ArrayStack.h"



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

int GCD(int n, int m)
{
    int i = 1;
    if (n > m)
    {
        
        while (i > 0)
        {
            i = n % m;
            n = m;
            std::cout << "n" << n << "\n";
            m = i;
            std::cout << "m" << m << "\n";

        }
    }
    return n;
}



int main() {

    //SinglyLinkedList test

    //SLList<int> myList;
    /*myList.addFront(10);
    myList.addFront(20);
    int end = myList.end();
    std::cout << end << "\n";*/

    /*std::vector<int> v{ 1,2,3,4 };
    for (auto& i : v)
        std::cout << i << "\t";
	*/
    int n = 0;
    n = GCD(80844, 25320);
    std::cout << n;

    GameEntry a ("John", 10);
    GameEntry b("June", 20);

    Scores s;
    s.add(a);
    s.add(b);

    ArrayStack<int> as(4);
    as.push(10);
    as.top();



    return 0;
}