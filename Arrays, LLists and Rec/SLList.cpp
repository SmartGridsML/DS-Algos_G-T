#include "SLList.h"

/// <summary>
/// Create a new node and set its info value to desired
/// set its next pointer to point to current head 
/// set head node to point to newly created node
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="e"></param>
template <typename T>
void SLList<T>::addFront(const T& e)
{
	//SLList* newHead = new SLList; //step 1
	//newHead->info = e;  //step 1
	Listnode* newHead(e, nullptr); //step 1 improved
	newHead->next = head; // step 2
	head = newHead; // step 3
}

/// <summary>
/// 
/// </summary>
/// <typeparam name="T"></typeparam>
/// <returns></returns>
template <typename T>
const T& SLList<T>::getFront() const
{
	return head->info;
}


/*
reversal/undoing operations for addition
1. save a ptr to old head node
2. advance head pointer to next node
3. delete old head node
*/
template<typename T>
void SLList<T>::removeFront()
{
	SLList* temp = head; //step 1
	//temp->head;
	head = temp->next; //step 2
	delete temp; //step 3;
}

//template <typename T>
//const T& SLList<T>::end() const
//{
//	return tail->info;
//}

/*
"It is noteworthy that we cannot as easily delete the last node of a singly linked
list, even if we had a pointer to it. In order to delete a node, we need to update the
next link of the node immediately preceding the deleted node. Locating this node
involves traversing the entire list and could take a long time. (We remedy this in
Section 3.3 when we discuss doubly linked lists.)"
*/