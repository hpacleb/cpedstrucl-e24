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
	
	
	cout << "Original array : " ;
	for(i=0;i<n;i++){
		cout << a[i]<< " " ;
	}
	
	cout << endl;
	for(i=1;i<n;i++){
	temp=a[i];
		for(j=i-1;j>=0 && temp<a[j];j--){
			cout << "Swapped " << a[j+1] << " and " << a[j] << endl;
			a[j+1] = a[j];
		}
	a[j+1] = temp;
	cout << "Sorted Array in Pass #" << pass << " : ";
		for(x=0;x<n;x++){
			cout <<a[x] << " " ;
		}
		cout << endl;
	pass++;
}

return 0;
}

