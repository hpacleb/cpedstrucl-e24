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
	cin  >> choice ; 
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
		default : cout << "Invalid Input Please try again!" << endl;
				  system("pause");
				break;
	}
}
    return 0;
}
