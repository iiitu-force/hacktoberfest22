#include<iostream>
using namespace std;
int stairClimbWays(int stair, int max){
   int count[stair]; //fill the result stair using bottom up manner
   count[0] = 1; //when there are 0 or 1 stair, 1 way to climb
   count[1] = 1;
   for (int i=2; i<stair; i++){ //for stair 2 to higher
      count[i] = 0;
      for(int j=1; j<=max && j<=i; j++)
         count[i] += count[i-j];
   }
   return count[stair-1];
}
int countWays(int stair, int max){ //person can climb 1,2,...max stairs at a time
   return stairClimbWays(stair+1, max);
}
int main (){
   int stair, max;
   cout << "Enter number of stairs: "; cin >> stair;
   cout << "Enter max stair a person can climb: "; cin >> max;
   cout << "Number of ways to reach: " << countWays(stair, max);
}
