// Left rotate by one place

#include<iostream>
using namespace std;

int main(){
    int a[]={1,3,4,2,5,8,8,6};
    int n=sizeof(a)/sizeof(a[0]);
    int tem=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=tem;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

//left rotate by D places

// suppose for 3 places
#include<iostream>
using namespace std;

int main(){
    int a[]={1,3,4,2,5,8,8,6};
    int n=sizeof(a)/sizeof(a[0]);
    int d=3;
    int temp[]={1,3,4};
    for(int i=d;i<n;i++){
        a[i-3]=a[i];
    }
    for(int i=n-d;i<n;i++){
        a[i]=temp[i-(n-d)];
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}

// optimal solution

#include<iostream>
#include<algorithm>
using namespace std;

void lr(int arr[],int n ,int d){
     d = d % n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int arr[] = {1, 3, 4, 2, 5, 8, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int d;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
 
    lr(arr,n,d);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
