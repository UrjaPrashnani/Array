//Brute 

#include <iostream>
#include <vector>
using namespace std;
void Sum(int n,vector<int> a,int target){
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                cout << "yes" << endl;
                cout << i << " and " << j << endl;
                cout << a[i] << " and " << a[j] << endl;
                return;
            }

        }
    }
   cout<< "no"<< endl;

}
int main(){
    vector<int> a={1,2,3,4,5,6};
    int n =a.size();
    int target=7;

    Sum(n,a,target);
}


//best if indexes has to be found
#include <iostream>
#include <vector>
#include<map>
using namespace std;

void twoSum(vector<int> a, int target) {
        map<int, int> mp; 
        
        for (int i = 0; i < a.size(); i++) {
            int more = target - a[i];
            if (mp.find(more ) != mp.end()) {
                
                cout<<"yes"<<endl;
                cout << mp[more ] << " and " << i << endl;
            }
            mp[a[i]] = i;
        }
        
        cout<< "No"<<endl;
}
int main(){
    vector<int> a={1,2,3,4,5,6};
    
    int target=7;

    twoSum(a,target);
}


// if the array is sorted or we have to do it by sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    void tSum(vector<int>& numbers, int target) {
        sort(numbers.begin(), numbers.end());
        int left = 0;
        int right = numbers.size() - 1;
        

        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                cout<<left <<" and " <<right <<endl; 
                return; 
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        cout<<"no"<<endl; 
    }
int main(){
    vector<int> a={5,2,7,4,1,6};
    
    int target=7;

    tSum(a,target);
}


