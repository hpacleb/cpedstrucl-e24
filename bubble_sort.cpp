#include<iostream>
using namespace std;

int main (){
	int* a = NULL;
	int n,i,x,j,temp;
	int pass=1;
	cout << "Enter how many numbers to sort: " ;
	cin >> n;
	a = new int[n];
	for(i=0;i<n;i++){
		cout << "Enter value of Array " << i+1 <<  ": ";
		cin >> a[i];
	}
	cout << "Original array " << endl;
	for(i=0;i<n;i++){
		cout << a[i] << endl;
	}
	for(i=n;i>1;i--){
		cout << "Bubble Sort Pass #" << pass << endl;
		for(j=0;j<i-1;j++){
			if(a[j]>a[j+1]){
				cout << "Swapped " << a[j] << " and " << a[j+1] << endl;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			
			}
		}	
	cout << "Sorted Array in Pass #" << pass << endl;
	for(x=0;x<n;x++){
		cout <<a[x] << endl;
	}
	pass ++;
	}
	return 0;
}

