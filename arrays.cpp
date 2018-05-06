#include <iostream>
#include <string>
using namespace std;
int main() {
  cout << "You can make arrays out of any data type!\n";
  cout << "Also there are three ways to declare arrays!\n";
  
  //ways to declare arrays
  bool arr_bool[] = {true, false, true};
  bool arr_bool_2[3];
  bool arr_bool_3 = arr_bool;
  
  //arrays of different data types
  char chars[10];
  int ints[10];
  float floats[10];
  double doubles[10];
  string strings[10];
  
  for ( int i = 0; i < 10; i++)
  {
    cout << ints[i] << " ";
  }
  cout << endl;
  
  for ( int i = 0; i < 10; i++)
  {
   ints[i] = i;
  }
  
  for ( int i = 0; i < 10; i++)
  {
    cout << ints[i] << " ";
  }
  cout << endl;
  
  
  
}
