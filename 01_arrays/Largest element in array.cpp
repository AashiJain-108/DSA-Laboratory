#include <iostream>
using namespace std;

int main(){
	int arr[] = {10,20,-5,34,30};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int current;
	int largest = arr[0];
	
	for(int i = 0;i<n;i++){
		current = arr[i];
		if(current>largest){
			largest = current;
		}
	}
	cout<<"Largest Element is:"<<largest;

return 0;
}

