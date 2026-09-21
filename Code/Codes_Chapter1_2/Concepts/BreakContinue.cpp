#include <iostream>
using namespace std;

/*
int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break; // Exit the loop when i is 4 (breaks the loop)
    }
    cout << i << "\n";
  } 
  return 0;
}

*/


int main() {
  
  for (int i = 1; i < 10; i++) {
    if (i%2!=0) {
      continue; // Skip the rest of the loop when i is 4 (continues to the next iteration)
    }
    cout <<"Even number" <<i << "\n";
  } 
  return 0;
}


