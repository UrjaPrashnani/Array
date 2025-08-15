//remove duplicates in place from sorted array
//Brute force appoach

#include <iostream>
#include <set>
using namespace std;
int main(){
    int a[]={1,1,2,2,3,3,3,4,5,5};
    int n=sizeof(a)/sizeof(a[0]);
     
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    int index=0;
    for(auto it:st){
        a[index]=it;
        index++;
    }
    cout<< index;
}


//optimal search-2 pointers
#include <iostream>

using namespace std;
int main(){
    int a[]={1,1,2,2,3,3,3,5,5};
    int n=sizeof(a)/sizeof(a[0]);
     
    int i=0;
    for(int j=1;j<n;j++){
        if(a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }
    }
    cout<< i+1;
}  