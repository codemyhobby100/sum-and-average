#include <iostream>
using namespace std;

int main() {
  // Declare variables
  int sum = 0;
  int input;
  const int constant = 5;

  // Prompt the user 10 times for input and sum the input
  for (int i = 0; i < 10; i++) {
    cout << "Enter a number: ";
    cin >> input;
    sum += input;
  }

  // Calculate and print the final result
  cout << "The average is : " << ((double)sum / 10)  << endl;
  cout << "Sum: " << ((double)sum) << endl;

  return 0;
}