#include <iostream>
using namespace std;

int main(){
	//form an array
	int arr[] = {20,10,30,5,34,-65};
	
	//logic to find length of array 
	int n = sizeof(arr)/sizeof(arr[0]);
	
	//traversing my array till its size
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}

return 0;
}

