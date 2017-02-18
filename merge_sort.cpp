#include<iostream>
using namespace std;

int main (){
	int x;
	int l1,k,h1,l2,h2,i,j;
	int pass=1;
	int n=8;
	int size;
	int a[] = { 10 , 12 , 2 , 3 ,5 , 6, 8, 11};
	int temp[8]; 
	cout << "Original Array " << " : " ;
	for(x=0;x<n;x++){
		cout << a[x] << " " ;
	}
	for(size=1;size<n;size=size*2){
		cout << endl;
		l1=0;
		k=0;
		while(l1+size<n){
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if(h2>=n){
				h2=n-1;
			}
			i=l1;
			j=l2;
			while(i<=h1&&j<=h2){
				if(a[i]<=a[j]){
					temp[k++]=a[i++];
				}
				else
					temp[k++]=a[j++];
			}
			while(i<=h1)
				temp[k++]=a[i++];
			while(j<=h2)
				temp[k++]=a[j++];
			l1= h2+1;
		}
		for(i=l1;k<n;i++)
			temp[k++]=a[i];
		for(i=0;i<n;i++){
						if(a[i]!=temp[i]){
				cout << "Swapped " << a[i] << " and " << temp[i] << endl;
			}
			a[i]=temp[i];

		}
		cout << "Sorted Array in Pass #" << pass << " : " ;
		for(x=0;x<n;x++)
		cout << a[x] << " ";
		pass++;
	}
	

}
