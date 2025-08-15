//leaders in an array
//brute 
#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;
vector<int> leader(vector<int> a){
    int n =a.size();
    vector<int> ans;
    for(int i =0;i<n;i++){
        int lead=true;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                lead=false;
                break;
            }
        }
        if(lead==true){
            ans.push_back(a[i]);
        }
    }
    return ans;
}
int main(){
    vector<int> a={10,22,12,3,0,6};
    int n =a.size();
    for (int i :  leader(a)) {
        cout << i << " ";
    }
    
    cout << endl;
}

// optimal

#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;
vector<int> leader(vector<int> a){
    
    int n =a.size();
    int maxi=INT32_MIN;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);

        }
        maxi=max(maxi,a[i]);
    }
    sort(a.begin(),a.end());
    return ans;
}
int main(){
    vector<int> a={10,22,12,3,0,6};
    int n =a.size();
    for (int i :  leader(a)) {
        cout << i << " ";
    }
    
    cout << endl;
}
