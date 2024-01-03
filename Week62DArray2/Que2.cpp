/*Write a program to rotate the matrix by 90 degrees anti-clockwise.
Input 1:
1 2 3
4 5 6
7 8 9*/

#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter the number of rows:";
    cin >> m;

    int n;
    cout << "Enter the number of columns:";
    cin >> n;
    
    int arr[10][10];

    cout << "Enter the elements of the arr:" << endl;
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
            cin>>arr[i][j];
        }
    }

    cout << "Original array:" << endl;
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Array rotated by 90 degrees anti-clockwise:" << endl;
    for (int j=n-1; j>=0; --j) {
        for (int i=0; i<m; ++i) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
