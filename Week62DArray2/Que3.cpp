/**Write a program to print the matrix in wave form.
Input :
1 2 3
4 5 6
7 8 9*/

#include <iostream>
using namespace std;

int main(){

    int m;
    cout<<"Enter the number of rows in array:";
    cin>>m;
    int n;
    cout<<"Enter the number of columns in  array:";
    cin>>n;

    int arr[m][n];
    cout<<"Enter the valiues in array:"<<endl;
    for(int i=0; i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    cout<<"Column wise wave form"<<endl;
    for(int j=0; j<=n-1;j++){
        if(j%2==0){
        for(int i=0;i<=m-1;i++){
            cout<<arr[i][j]<<" ";
        }
        }
        else {
            for(int i=m-1;i>=0;i--)
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;

    }
    
    cout<<endl;
    cout<<"Row wise wave form"<<endl;
    for(int i=0; i<=m-1;i++){
        if(i%2==0){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        }
        else {
            for(int j=n-1;j>=0;j--)
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;

    }
    cout<<endl;
}
