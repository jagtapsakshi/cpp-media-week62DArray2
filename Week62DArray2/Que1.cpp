/*Write a program to print the elements of both the diagonals in a square matrix.
Input 1:
1 2 3
4 5 6
7 8 9*/

#include <iostream>
using namespace std;

int main(){

    int m;
    cout<<"Enter number of rows for a array:";
    cin>>m;

    int n;
    cout<<"Enter number of columns for a array: ";
    cin>>n;


    cout<<"Enter values in array:";
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"The elements of both the diagonals in a square matrix:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            if(j==i || i+j==n-1){
                cout<<a[i][j]<<" ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
