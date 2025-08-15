//for maximum Subarray Sum

#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int maxSubArray(vector<int>& nums) {
      int Sum=0;
      int max = INT32_MIN;
      for (int i = 0; i< nums.size(); i++) {
            Sum += nums[i];
            if (Sum > max){
                max = Sum;
            }
            if (Sum<0){
                Sum=0;
            }
        }
    
    return max;


        
}
int main(){
    vector<int> nums={-4,-5,1,3,4,2,5,8,8,6};

    int result=maxSubArray(nums);
    cout<<result<< endl;
}


// for maximum Subarray
#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int maxSubArray(vector<int>& nums) {
      int ansst=-1, ansed=-1;
      int Sum=0;
      int start;
      int max = INT32_MIN;
      for (int i = 0; i< nums.size(); i++) {
            if(Sum==0){
                 start=i;
            }
            Sum += nums[i];
            if (Sum > max){
                max = Sum;
                ansst=start;
                ansed=i;

            }
            if (Sum<0){
                Sum=0;
            }
        }
        for (int i = ansst; i <= ansed; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return max;


        
}
int main(){
    vector<int> nums={-4,-5,1,3,4,2,5,8,8,6};

    int result=maxSubArray(nums);
    cout<<result<< endl;
}