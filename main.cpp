#include <iostream>
using namespace std;
int main() {
  int a[10][10], b[10][10], mul[10][10], m, c, p, j, k;
  cout << " Enter the number of printing the rows=";
  cin >> m;
  cout << "Enter the number of printing the column=";
  cin >> c;
  // cout<<"Enter the first matrix of element=\n";
  for (p = 0; p < m; p++) {
    for (j = 0; j < c; j++) {
      a[p][j] = rand() % 100 + 1;
    }
  }
  cout << "Enter the second matrix of element=\n";
  for (p = 0; p < m; p++) {
    for (j = 0; j < c; j++) {
      b[p][j] = rand() % 100 + 1;
    }
  }
  cout << "multiply of the matrix=\n";
  for (p = 0; p < m; p++) {
    for (j = 0; j < c; j++) {
      mul[p][j] = 0;
      for (k = 0; k < c; k++) {
        mul[p][j] += a[p][k] * b[k][j];
      }
    }
  }
  // for printing result
  for (p = 0; p < m; p++) {
    for (j = 0; j < c; j++) {
      cout << mul[p][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}