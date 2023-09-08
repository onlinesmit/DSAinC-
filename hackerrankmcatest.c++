#include <iostream>
using namespace std;

// A function to find the maximum element in a row
int maxInRow(int arr[][3], int m, int n, int i) {
    int max = arr[i][0];
    for (int j = 1; j < n; j++) {
        if (arr[i][j] > max) {
            max = arr[i][j];
        }
    }
    return max;
}

// A function to find the minimum element in a column
int minInCol(int arr[][3], int m, int n, int j) {
    int min = arr[0][j];
    for (int i = 1; i < m; i++) {
        if (arr[i][j] < min) {
            min = arr[i][j];
        }
    }
    return min;
}

// A function to find the number that is maximum in row and minimum in column
int maxInRowMinInCol(int arr[][3], int m, int n) {
    // Loop through each row
    for (int i = 0; i < m; i++) {
        // Find the maximum element in the current row
        int max = maxInRow(arr, m, n, i);
        // Loop through each column
        for (int j = 0; j < n; j++) {
            // Check if the maximum element is also the minimum element in the current column
            if (arr[i][j] == max && arr[i][j] == minInCol(arr, m, n, j)) {
                // Return the number
                return arr[i][j];
            }
        }
    }
    // If no such number is found, return -1
    return -1;
}

int main() {
    // Input the order of the matrix
    int m, n;
    cout<<"Input the order of the matrix: ";
    cin >> m >> n;
    
    // Input the elements of the matrix
    int arr[m][3];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Find and print the number that is maximum in row and minimum in column
    int ans = maxInRowMinInCol(arr, m, n);
    if (ans == -1) {
        cout << "Not found" << endl;
    } else {
        cout << ans << endl;
    }
    
    return 0;
}
