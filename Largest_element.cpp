#include <iostream>
using namespace std;

int main(){
    int a[]={1,3,4,2,5,8,6};
    int n=sizeof(a)/sizeof(a[0]);
    int l=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
        
    }
    cout<<"the largest is: "<<l<<endl;
}