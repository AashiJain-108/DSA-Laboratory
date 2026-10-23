#include <iostream>
using namespace std;

int main(){
	int arr[] ={10,20,-5,34,30};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int first = INT_MIN;
	int second = INT_MIN;
	int third = INT_MIN;
	int fourth = INT_MIN;
	
	for(int i = 0;i<n;i++){
		int current = arr[i];
		
		if(current>first){
			fourth = third;
            third = second;
            second = first;
            first = current;
		}
		
		else if (current>second){
			fourth = third;
            third = second;
            second = current;
		}
		
		else if(current>third){
			fourth = third;
            third = current;
		}
		else if(current>fourth){
			fourth = current;
		}
	}
	
	 if (n < 4) {
        cout << "Not enough elements";
    } else {
        cout << "4th largest element: " << fourth;
    }

return 0;
}

