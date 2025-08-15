#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;
vector<int> Next_Permu(vector<int> a){
    int index=-1;
    int n =a.size();
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>=index;i--){
        if(a[i]>a[index]){
            swap(a[i],a[index]);
            break;
        }
    }
    reverse(a.begin() + index + 1, a.end());

    return a;
}
int main(){
    vector<int> a={1,2,3,4,5,6};
    int n =a.size();
   
    for (int i : Next_Permu(a)) {
        cout << i << " ";
    }
    cout << endl;
}