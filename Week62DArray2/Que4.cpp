/*Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
Input 1: n = 3

Input 2: n = 1 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int matrix[n][n];

    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        //top
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = num++;
        }
        top++;

        //right
        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = num++;
        }
        right--;

        // bottom
        for (int i = right; i >= left; --i) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        // left
        for (int i = bottom; i >= top; --i) {
            matrix[i][left] = num++;
        }
        left++;
    }

    cout<<"matrix filled with elements from 1 to n in spiral order"<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
