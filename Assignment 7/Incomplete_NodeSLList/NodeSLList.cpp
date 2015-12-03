///////////////////////////////////////////////////////////////////////////  
// NAME : PRASHANT M PATEL												 //
//																		 //
// FILENAME : NodeSLList.cpp											 //
//																		 //
// COURSE NUMBER : CIS 554												 //
//
// Class NodeSLList Implementation
//
// Description - This file implements a singly linked list.
///////////////////////////////////////////////////////////////////////
#include "NodeSLList.h"


///////////////////////////////////////////////////////////////////////
// default constructor
///////////////////////////////////////////////////////////////////////
NodeSLList::NodeSLList()
{ 
	head = tail = 0;
}

///////////////////////////////////////////////////////////////////////
// copy constructor
///////////////////////////////////////////////////////////////////////
NodeSLList::NodeSLList(NodeSLList & list)
{ 
	IntNode *tmp = list.head;

	while (tmp != NULL){
		IntNode *tempNode = new IntNode();
		tempNode->data = tmp->data;
		tempNode->next = NULL;
		if (head == NULL){
			head = tempNode;
			tail = tempNode;
		}
		else {
			tail->next = tempNode;
			tail = tempNode;
		}
		tmp = tmp->next;
	}

}

///////////////////////////////////////////////////////////////////////
// destructor
///////////////////////////////////////////////////////////////////////
NodeSLList::~NodeSLList()
{
	// call destroyList() to remove all nodes
	// and reset linked list
	DestroyList();
}

///////////////////////////////////////////////////////////////////////
// IsEmpty
///////////////////////////////////////////////////////////////////////
bool NodeSLList::IsEmpty()
{ 
	// if head is NULL, then the list is empty, and we will return true
	// otherwise, we will return false
	return (head == 0); 
}

///////////////////////////////////////////////////////////////////////
// GetSize
///////////////////////////////////////////////////////////////////////
int NodeSLList::GetSize()
{
	// check to see if the list is empty. if 
	// so, just return 0
	if ( IsEmpty() ) return 0;

	int size = 1;
	IntNode *p = head;
	// compute the number of nodes and return
	while (p != tail)
	{
		// until we reach the tail, keep counting
		size++;
		p = p->next;
	}
	return size;
}

///////////////////////////////////////////////////////////////////////
// AddToHead
///////////////////////////////////////////////////////////////////////
void NodeSLList::AddToHead(const IntNode & node)
{
	// create a new node, and make it the head. the 
	// previous head will become head->next
	IntNode * next = head;
	head = new IntNode;
	head->next = next;
	head->data = node.data;

	// if this is the first node, make the tail the 
	// same as the head
	if (tail == 0)
		tail = head;
}

///////////////////////////////////////////////////////////////////////
// DeleteFromHead
///////////////////////////////////////////////////////////////////////
IntNode NodeSLList::DeleteFromHead()
{
	IntNode temp;
	temp.data=0;
	temp.next=NULL;
	if (IsEmpty())
	{
		cout << "*****ERROR: Can't delete from head. List is Empty" << endl;
		return temp;
	}

	// get current value of node we are about to delete, 
	// so we can return it.
	temp.data = head->data;

	IntNode *tmp = head;

	// if there is only one node, set the head and pointer tails
	// to NULL (0)
	if (head == tail)
		head = tail = 0;

	// otherwise, move the head pointer to the next node 
	// in the list
	else
		head = head->next;

	// delete head node
	delete tmp;

	// return value of node that was deleted
	return temp;
}

///////////////////////////////////////////////////////////////////////
// AddToTail
///////////////////////////////////////////////////////////////////////
void NodeSLList::AddToTail(const IntNode & node)
{
	IntNode *nodeData = new IntNode();
	nodeData->data = node.data;
	nodeData->next = NULL;
	//for empty list
	if (head == NULL)
	{
		head = nodeData;
		tail = nodeData;
	}
	//for non empty list
	else
	{
		tail->next = nodeData;
		tail = nodeData;
	}

}

///////////////////////////////////////////////////////////////////////
// DeleteFromTail
///////////////////////////////////////////////////////////////////////
IntNode NodeSLList::DeleteFromTail()
{
	IntNode nodeData;

	// get the current data at the tail
	nodeData.data = tail->data;


	// if there is only one node, delete the only node, and set the 
	// head and tail pointers to NULL (0) 
	if (head == tail)
	{
		delete head;
		head = tail =0;
	}

	// otherwise, traverse to the tail node and delete it
	else
	{
		IntNode * temp;
		// traverse to tail pointer
		for (temp = head; temp->next != tail; temp = temp->next);
		delete tail;
		tail = temp;
		tail->next = 0;
	}

	return nodeData;
}


///////////////////////////////////////////////////////////////////////
// DeleteNode
///////////////////////////////////////////////////////////////////////
IntNode NodeSLList::DeleteNode(int nodeNum)
{
	if (nodeNum <= 0) nodeNum = 1;
	IntNode *prev=head , *temp=head;
	IntNode current;

	// traverse to the node
	for (int loop=1; loop<nodeNum; loop++)
	{
		prev=temp, temp=temp->next;
		// check for case where nodeNum is > the number of 
		// nodes in the list. if we reach the tail before
		// we traverse to the node, delete the tail 
		if ( temp == tail )
			return DeleteFromTail();
	}

	// if deleting the head just call 
	// the appropriate member function 
	// and don't repeat that logic here
	if (temp == head) return DeleteFromHead();

	// otherwise, delete the node we traversed to
	prev->next = temp->next;
	current.data = temp->data;

	delete temp;

	return current;
}

///////////////////////////////////////////////////////////////////////
// InsertNode
///////////////////////////////////////////////////////////////////////
void NodeSLList::InsertNode(int nodeNum, const IntNode &node)
{
	//check bounds
	if (nodeNum < GetSize()){
		IntNode *tmp = head;

		IntNode* newNode = new IntNode();
		newNode->data = node.data;
		newNode->next = NULL;

		// traverse to the node, or to the last node, whichever comes
		// first. 
		for (int i = 1; i< nodeNum && tmp != tail; i++)
			tmp = tmp->next;

		IntNode* nextNode = tmp->next;
		tmp->next = newNode;
		newNode->next = nextNode;
	}	
}


///////////////////////////////////////////////////////////////////////
// UpdateNode
///////////////////////////////////////////////////////////////////////
void NodeSLList::UpdateNode(int nodeNum, const IntNode &node)
{
	IntNode *tmp = head;

	// traverse to the node, or to the last node, whichever comes
	// first. if the last node is reached, then that is the node
	// that is updated
	for (int i=1; i< nodeNum && tmp != tail; i++)
		tmp = tmp->next;

	tmp->data = node.data;
}

///////////////////////////////////////////////////////////////////////
// SortList
///////////////////////////////////////////////////////////////////////
void NodeSLList::SortList(unsigned int order)
{
	if (!IsEmpty()){
		
		int listSize = GetSize();
		//Selection Sort technique
		for (int i = 1; i <= listSize ; i++){
			IntNode iNode = RetrieveNode(i);
			int targetData = iNode.data;
			int targetPos = i;

			//inner loop to find minimum and maximum element
			for (int j = i+1; j <= listSize; j++){

				IntNode jNode = RetrieveNode(j);

				//for ascending
				if (order == 1){
					//since we are adding node to Head. So comparisom for ascending is reverse
					if (jNode.data > targetData){
						targetData = jNode.data;
						targetPos = j;
					}
				}
				else { //for descending
					if (jNode.data < targetData){
						targetData = jNode.data;
						targetPos = j;
					}
				}
				
			}

			IntNode swapNode = DeleteNode(targetPos);
			AddToHead(swapNode);
		}

	}
	 
}

///////////////////////////////////////////////////////////////////////
// DestroyList
///////////////////////////////////////////////////////////////////////
void NodeSLList::DestroyList()
{
	// while the list is NOT empy
	// keep removing the head node and make
	// the next node the head node
	for (IntNode *p; !IsEmpty(); )
	{
		p = head->next;
		delete head;
		head = p;
	}
	head = tail = 0;
}

///////////////////////////////////////////////////////////////////////
// operator=
///////////////////////////////////////////////////////////////////////
NodeSLList & NodeSLList::operator=(NodeSLList & list)
{
	NodeSLList tmp;

	IntNode* temp1 = head;
	IntNode* temp2 = list.head;

	//copy the data of list2 into this list till this.size
	while (temp1 != NULL && temp2 != NULL){
		temp1->data = temp2->data;
		temp1 = temp1->next;
		temp2 = temp2->next;
	}

	//if the list2 is shorter
	if (temp2 == NULL && temp1 != NULL){
		tail = temp1;
		temp1->next = NULL;
	}

	//when there are still few nodes in temp2
	while (temp2 != NULL){
		IntNode* newNode = new IntNode();
		newNode->data = temp2->data;
		if (head == NULL){
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}

		temp2 = temp2->next;
	}


	return list;
}

///////////////////////////////////////////////////////////////////////
// operator==
///////////////////////////////////////////////////////////////////////
bool NodeSLList::operator==(NodeSLList & list)
{
	IntNode* temp1 = head;
	IntNode* temp2 = list.head;

	//compare each data
	while (temp1 != NULL && temp2 != NULL){
		if (temp1->data == temp2->data){
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else{
			break;
		}
	}

	//check if any of the list is not empty
	if (temp1 == NULL && temp2 == NULL){
		return true;
	}
	else {
		return false;
	}
}

///////////////////////////////////////////////////////////////////////
// operator!=
///////////////////////////////////////////////////////////////////////
bool NodeSLList::operator!=(NodeSLList & list)
{
	IntNode* temp1 = head;
	IntNode* temp2 = list.head;

	//compare each data
	while (temp1 != NULL && temp2 != NULL){
		if (temp1->data == temp2->data){
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else{
			break;
		}
	}

	//check if any of the list is not empty
	if (temp1 == NULL && temp2 == NULL){
		return false;
	}
	else {
		return true;
	}
}

///////////////////////////////////////////////////////////////////////
// operator+
///////////////////////////////////////////////////////////////////////
NodeSLList NodeSLList::operator+(NodeSLList & list)
{
	NodeSLList tmp;

	IntNode *temp1 = head;
	IntNode *temp2 = list.head;

	//copy values from list1
	while (temp1 != NULL){
		IntNode* newNode = new IntNode();
		newNode->data = temp1->data;
		newNode->next = NULL;
		if (tmp.head == NULL){
			tmp.head = newNode;
			tmp.tail = newNode;
		}
		else{
			tmp.tail->next = newNode;
			tmp.tail = newNode;
		}
		temp1 = temp1->next;
	}


	//copy values from list2
	while (temp2 != NULL){
		IntNode* newNode = new IntNode();
		newNode->data = temp2->data;
		newNode->next = NULL;
		if (tmp.head == NULL){
			tmp.head = newNode;
			tmp.tail = newNode;
		}
		else{
			tmp.tail->next = newNode;
			tmp.tail = newNode;
		}
		temp2 = temp2->next;
	}

	return tmp;
}

///////////////////////////////////////////////////////////////////////
// RetrieveNode
// 
// Description: retrieve data from a node without removing it from 
//              the list
// Input: node number (1-N; not 0-N-1)
// Output: none
// Returns: reference to node data
///////////////////////////////////////////////////////////////////////
IntNode & NodeSLList::RetrieveNode(int nodeNum) const
{
	IntNode *tmp = head;

	// traverse to the node, or to the last node, whichever comes
	// first
	for (int i=1; i< nodeNum && tmp != tail; i++)
		tmp = tmp->next;

	return *tmp;
}

ostream & operator<<(ostream & output, NodeSLList & list)
{
	IntNode *tmp = list.head;

	if (tmp == NULL)
	{
		output << "NULL";
	}

	while (tmp != NULL){
		output << tmp->data << " ";
		tmp = tmp->next;
	}

	return output;

}

