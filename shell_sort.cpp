#include<iostream>
using namespace std;

void shell_sort (int *a, int n){
	int h,i,j,k,pass=1,x;
	for(h=n;h /= 2;){
		cout << "Shell Sort Pass #" << pass << endl;
		for(i=h;i<n;i++){
			k = a[i];
			for(j=i;(j>=h) && k < (a[j-h]);j-=h){
				cout << "Swapped " << a[j] << " and " << a[j-h] << endl;
				a[j] = a[j-h];
			}
			a[j]=k;
		}
		cout <<"Sorted Array in Pass #" << pass << endl;
		for(x=0;x<n;x++){
			cout <<a[x] << endl;
		}
		pass++; 
	}

}


int main (int ac, char **av){
	int x;
	int a[] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
	int n = sizeof a / sizeof a[0];
	cout <<"Original Array " << endl;
		for(x=0;x<n;x++){
			cout <<a[x] << endl;
		}
	cout << endl;
	shell_sort(a,n);
	return 0;
}
