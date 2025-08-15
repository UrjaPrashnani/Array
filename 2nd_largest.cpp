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
    int sl=-1;
    for (int i =0;i<n;i++){
        if(a[i]>sl && a[i]!=l){
            sl=a[i];
        }
    }
    cout<<"second largest: "<<sl<<endl;
   
}



// Optimal approach

#include <iostream>
using namespace std;

int main(){
    int a[]={-4,-5,1,3,4,2,5,8,8,6};
    int n=sizeof(a)/sizeof(a[0]);
    int l=a[0];
    int sl=INT32_MIN;
    for (int i=1;i<n;i++){
        if(a[i]>l){
            sl=l;
            l=a[i];

        }
        else if(a[i]<l && a[i]>sl){
            sl=a[i];
        }
    }
    cout<< "the second largest element is: "<<sl;

}