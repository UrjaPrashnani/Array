// if array is sorted
#include <iostream>
using namespace std;
int  is_sorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
           
        }
        else{
             return false;
        }
        
    }
     return true;
    

}
int main(){
    int n;
    cout<< "enter the no of element: ";
    cin>>n;
    int arr[1000];
    cout<< "enter the array element: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   if (is_sorted(arr, n)) {
        cout << "The array is sorted ";
    } 
    else {
        cout << "The array is NOT sorted ";
}
}