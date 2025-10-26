//intersection of two sorted array
// Brute force Approach
#include<bits/stdc++.h>
using namespace std;

  vector<int> intersectionOfArrays(vector<int>A, vector<int>B){
    
  vector <int> ans;
  
  // to maintain visited
  vector <int> visited(B.size(), 0);  
  int i = 0, j = 0;
  
  for (i = 0; i < A.size(); i++) {
      
    for (j = 0; j < B.size(); j++) {

      if (A[i] == B[j] && visited[j] == 0) { 
      
        //if element matches and has not been matched with any other before
        ans.push_back(B[j]);
        visited[j] = 1;

        break;
      } 
      
      else if (B[j] > A[i]) break; 
      //because array is sorted , element will not be beyond this
    }
  }
  
  return ans;
    
}

int main() {
    
  // Array Initialisation.
  vector < int > A {1,2,3,3,4,5,6,7};
  vector < int > B {3,3,4,4,5,8};

  vector<int> ans = intersectionOfArrays(A,B);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}

// Optimal Solution:2 pointers approach
#include<bits/stdc++.h>
using namespace std;

  vector<int> intersectionOfArrays(vector<int>A, vector<int>B){
    
  // Declare ans array.
  vector <int> ans;

  int i = 0, j = 0; 

  // to traverse the arrays
  while (i < A.size() && j < B.size()) {
      
    //if current element in i is smaller
    if (A[i] < B[j]) { 
      i++;
    } else if (B[j] < A[i]) {
      j++;
    } else {
        
      //both elements are equal
      ans.push_back(A[i]); 
      i++;
      j++;
    }
  }
  
  return ans;
    
}

int main() {
    
  // Array Initialisation.
  vector < int > A {1,2,3,3,4,5,6,7};
  vector < int > B {3,3,4,4,5,8};

  vector<int> ans = intersectionOfArrays(A,B);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}