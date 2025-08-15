#include<iostream>
#include<algorithm>
using namespace std;
void Move(int arr[],int n){
    int j=-1;
    for (int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for (int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

}
int main(){
    int arr[] = {1, 3, 0, 2, 0, 8, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    Move(arr,n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}