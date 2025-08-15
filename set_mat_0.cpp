//better approach

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

    int row[n] = {0}; // row array
    int col[m] = {0}; // col array

    // Traverse the matrix:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                // mark ith index of row wih 1:
                row[i] = 1;

                // mark jth index of col wih 1:
                col[j] = 1;
            }
        }
    }

    // Finally, mark all (i, j) as 0
    // if row[i] or col[j] is marked with 1.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: \n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}

//optimal solution

#include<bits/stdc++.h>
using namespace std;

void set_mat(vector<vector<int>> &mat){
    int col0=1;
    int n=mat.size();
    int m=mat[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                mat[i][0]=0;
                if(j!=0){
                    mat[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(mat[i][0]==0 || mat[0][j]==0){
                mat[i][j]=0;
            }
        }
    }
    if (mat[0][0]==0){
        for(int i=1;i<m;i++){
            mat[0][i]=0;
        }
    }
    if(col0==0){
        for(int i=1;i<n;i++){
            mat[i][0]=0;
        }
    }
    
}
int main(){
    vector<vector<int>> mat = {{2,4,1},{4,0,1},{3,9,1}};

    set_mat(mat);
    for (vector<int> row : mat){
        for (int x : row) {
            cout << x << " ";
        }
        cout<< endl;
    }
    return 0;
}