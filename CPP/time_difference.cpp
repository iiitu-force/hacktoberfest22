// C++ program to Calculate the Difference in Time using difftime() function.
#include <bits/stdc++.h>

using namespace std;
int main() {
  time_t start, end;
  int ans;
  cout << "10 x 15 = ?" << endl;
  time( & start); 
  cout << "Enter your answer: ";
  cin >> ans; 
  string str;
  if (ans == 150)
    str = "correctly";
  else
    str = "incorrectly";
  time( & end);  
  cout << "You answered the question " << str << " in " << difftime(end, start) << " seconds." << endl;
  
  return 0;
}
