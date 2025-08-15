//give row and column, tell the element at that place
//TC=(O(r))
//SC=O(1)
#include<bits/stdc++.h>
using namespace std;

int nCr(int n , int r)//n=row , r=column
{
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
} 
int main(){
    cout<< nCr(10,3)<<endl;
    return 0;
}

//print the given row
//TC=(O(n))
//SC=O(1)
#include<bits/stdc++.h>
using namespace std;

int row(int n )//n=row 
{
    int ans=1;
    cout<< ans <<" ";
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/(i);
        cout<< ans <<" ";
    }
    cout<< endl;
   
} 
int main(){
    row(6);
    return 0;
}

//print the triangle

#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> ans = pascalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
