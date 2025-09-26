#include<iostream>
using namespace std;

int LS(int arr[],int n , int num){
    for (int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main() {
	

	int n = 5, num = 7;
	int arr[n] = {1,3,5,7,8};
	cout<<LS(arr,n,num);
	
	return 0;
}
