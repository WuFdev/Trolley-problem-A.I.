#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
  int x;
  int y;
  cout << "track 1: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "track 2: ";
  cin >> y;

  if (x == y && y == x)
  {
    cout << "Help me im too stupid to figure out which people to kill!!!\n";
    exit(0);
  }
  
  if (x > y) 
  {
    cout << "I just killed the People on track 2.\n";
  }
  else
  {
    cout << "I just killed the People on track 1.\n";
  }
  return 0;
}
