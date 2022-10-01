#include <iostream>
#include <time.h>

using namespace std;

int main() {
  int i, j, k, m, n;
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

  // Time Before Multiplication Operation
  t1 = clock();

  // Multiplication of Matrix A and B in C
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      for (k = 0; k < n; k++) {
        c[i][j] = c[i][j] + A[i][k] * B[k][j];
      }
    }
  }

  // Time After Multiplication Operation
  t2 = clock();

  // Printing Matrix C
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {

      cout << c[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  // Calculating Time Taken for Multiplication
  cout << "starting time=" << t1 / CLOCKS_PER_SEC << " "
       << "Endding time=" << t2 / CLOCKS_PER_SEC << endl;
  cout << "Time Taken= " << ((t2 - t1) / CLOCKS_PER_SEC) << endl;

  return 0;
}
