#include <conio.h>
#include <iostream>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }
    
    void printList(){
    	Node *p = head;
    	Node *q = head;
    	
    	while (q)
    	{
    		p=q;
    		cout << p->x << endl;
    		q = p-> next;
		}
	}
	
	
	
    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

private:
    Node *head; 
};

int main() {
    int choice,x;
	LinkedList list;
	while(69)
	{
	system("cls");
	cout << "What would you like to do?" << endl;
	cout << "(1) Insert into liked list" << endl;
	cout << "(2) Pop" << endl;
	cout << "(3) Exit" << endl;
	cout << "(4) Print out Linked List" << endl;
	cin >> choice;
	
	
	switch(choice)
	{
		case 1 : cout << "What number would you like to add?" << endl;
				cin >> x;
				 list.addValue(x);
				 break;
		case 2 :  cout <<"Popped the value " << list.popValue()  << endl;
		system("pause");
				 break;
		case 3 : exit(1);
		break;
		case 4 : list.printList();
		cout << endl;
		system("pause");
		break;
		
		default : cout << "Invalid Input Please try again!" << endl;
				  system("pause");
				break;
	}
}
    return 0;
}
