// #include <bits/stdc++.h>
// using namespace std;
// int main() wrong approach
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         /* code */
//         int n;
//         cin >> n;
//         long long sum = 0;
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//             int y;
//             cin >> y;
//             v.push_back(y);
//             sum += y;
//         }
//         sum = sum - 1;
//         int cnt = 0;
//         int N = pow(2, n);
//         for (int i = 0; i < N; i++)
//         {
//             /* code */
//             int curr_sum = 0;
//             for (int j = 0; j < n; j++)
//             {
//                 /* code */
//                 curr_sum = curr_sum + v[j];
//                 if (i & (1 << j) && (curr_sum == sum))
//                 {
//                     cnt++;
//                 }
//                 if(curr_sum > sum){
//                     curr_sum = curr_sum-v[j];
//                 }
//                 // if(curr_sum == sum){
//                 //     cnt++;
//                 // }
//             }
//         }
//         if (sum == 0)
//         {
//             cout << cnt + 1 << endl;
//         }
//         else
//         {
//             cout << cnt << endl;
//         }
//     }
// }
// sum-1 chaiye toh delete zeroes and 1  the number of ways to do that will be ans;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        vector<int> v;
        int cnt0=0,cnt1=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int y;
            cin >> y;
            if(y == 0){
                cnt0++;
            }
            if(y==1){
                cnt1++;
            }
        }
        // 1ll<< cnt0 == 2ki power of cnt0
        //It can be noticed that all subsequences with sum s−1 appear if we erase some 0-es from the array and also erase exactly one 1. We can independently calculate the number of ways to erase some 0-es from the array (that way the sum will remain the same), then calculate the number of ways to erase exactly one 1 from the array (that way the sum will become equal to s−1), and then multiply these two numbers. Therefore, the answer is equal to 2c0⋅c1, where c0 is the number of 0-es in the array, and c1 is the number of 1-s.
        cout << (1LL<<cnt0)*(long long)cnt1<< endl;
    }
    
}