// Brute for counting Subbarrays for both positive and negative elements

#include <iostream>
using namespace std;
 
int main(){
    int a[]={-2,-1,1,2,3,4,5,6,7,8};
    int k=6;
    int n =sizeof(a)/sizeof(a[0]);
    int len=0;
    for (int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=a[j];
            if(s==k){
                len++;
            }
            
        }
    }
    cout<< len;

}