// Write a program to find Area of a circle
#include <iostream>
using namespace std;
void aera(double a) {
  double k = 3.14 * a * a;
  cout << k << endl;
}

int main() {
  double radius = 3;
  aera(radius);
}