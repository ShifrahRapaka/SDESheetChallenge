#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool detectCycle(Node *head)
{
	//	Write your code here
    unordered_set<Node*> s;

    while(head != NULL) {

        if(s.find(head) != s.end()) return true;

        s.insert(head);

        head = head->next;

    }

    return false;
    
}