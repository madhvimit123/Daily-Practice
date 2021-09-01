#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int i,n;
	for(i=0;i<t;i++){
	   cin>>n;
	   int *A =new int[n];
	   int *revA = new int[n];
	   for(int j = 0;j<n;j++) {
	       cin>>A[j];
	   }
	   int j = n-1;
	   int k = 0;
	   while(k<j) {
	       int temp = A[j];
	       A[j] = A[k];
	       A[k] = temp;
	       k++;j--;
	   }
	   for(j = 0;j<n;j++) {
	       cout<<A[j]<<" ";
	   }
	   cout<<"\n";
	}
	return 0;
}
