#include <iostream>
#include <time.h>
using namespace std;

int main() {
  int i, j, m, n;
  float t1, t2;
  int A[105][105], B[105][105], c[105][105];

  // Initializing rows and columns of Matrix by user input
  // Rows and columns going to be same in both the matrix.
  cout << "Enter the row dimension of the matrix: ";
  cin >> m;

  cout << "Enter the column dimension of the matrix: ";
  cin >> n;

  // Initializing Matrix A with random integers
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {

      A[i][j] = rand() % 100;
    }
  }

  // Initializing Matrix A with random integers
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {

      B[i][j] = rand() % 100;
    }
  }

  // Time Before Addition Operation
  t1 = clock();

  // Addition of Matrix A and B in C
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {

      c[i][j] = A[i][j] + B[i][j];
    }
  }

  // Time After Addition Operation
  t2 = clock();

  // Printing Matrix C
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {

      cout << c[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  // Calculating Time Taken for Addition
  cout << "Time Taken= " << ((t2 - t1) / CLOCKS_PER_SEC) << endl;

  return 0;
}