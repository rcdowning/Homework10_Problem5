#include <iostream>

using namespace std;

const int ROWS = 2;
const int COLS = 3;
void arr(int[][COLS]); // function prototype

int main() {

  int nums[ROWS][COLS] = {{33, 16, 29}, 
                         {54, 67, 99}}; // int matrix

  arr(nums); // calling function, accepting nums matrix?
  
  return 0;
}

void arr(int (*val)[3]) {  // function using matrix pointer variable named *val with 3 columns

  cout << endl << *(*val);           // points to val[0] = 33
  cout << endl << *(*val + 1);       // points to val[0] + 1 = val[2] = 16
  cout << endl << *(*(val + 1) + 2); // val + 1 = sec row, 2 means 0, 1st, 2nd column = 99
  cout << endl << *(*val) + 1;       // points to val[0] value, then adds 1 = 34

  return;
}