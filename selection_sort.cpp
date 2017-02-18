#include<iostream>
using namespace std;

int main (){
	int* a = NULL;
	int n,i,x,j;
	int pass=1;
	cout << "Enter how many numbers to sort: " ;
	cin >> n;
	a = new int[n];
	for(i=0;i<n;i++){
		cout << "Enter value of Array " << i+1 <<  ": ";
		cin >> a[i];
	}
	cout << "Original array : ";
	for(i=0;i<n;i++){
		cout << a[i] << " " ;
	}
	cout << endl;
	for(i=0;i<n-1;i++){	
		int min=a[i] , index=i;
		for(int j=i+1;j<n;j++){	
			if(a[j] < min){
			cout << "Swapped " << min << " and " << a[j] << endl; 
			min=a[j];
			index=j;
			}
		}
	a[index]= a[i];
	a[i] = min;
	cout << "Sorted Array in Pass #" <<  pass << " : " ;
	for(x=0;x<n;x++){
		cout <<a[x] << " " ;
	}
	cout << endl;
	pass++;
	}
	return 0;
}

