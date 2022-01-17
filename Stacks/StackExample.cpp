#include <stack>
#include <vector>
#include <string>

//5.1.6 
//Reversing a vector using a stack

//Algorithm:
//Push all elements of vecgor in order into a stack 
//fill vector up again by popping elements off stack

//question should it be void or should the function return the vector again?
void reverseVector(std::vector<int>& v)
{
	int n = v.size();
	std::stack<int> s;
	for (auto i : v)
	{
		s.push(i);	//push all elements of stack 
	}
	for (int i = 0; i < n; ++i)
	{
		v[i] = s.top(); //pop in reverse order
		s.pop();
	}
}



//5.1.7 Matching Parenthesis and HTML tags

bool isParenMatching(const std::string s)
{

}