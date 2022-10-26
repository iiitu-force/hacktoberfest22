#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> &a,
         pair<string, int> &b)
{
    return a.second < b.second;
}

// Function to sort the map according
// to value in a (key-value) pairs
// void sort(map<string, int> &M)
// {

//     // Declare vector of pairs
//     vector<pair<string, int>> A;

//     // Copy key-value pair from Map
//     // to vector of pairs
//     for (auto &it : M)
//     {
//         A.push_back(it);
//     }

//     // Sort using comparator function
//     sort(A.begin(), A.end(), cmp);

//     // Print the sorted value
// }
int main()
{
    freopen("notlast.in","r",stdin);
    freopen("notlast.out","w",stdout);
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    int x;
    while (n--)
    {
        /* code */

        cin >> s >> x;
        mp[s] += x;
    }
    // sort(mp);

    //     auto it = mp.begin();
    //    int minx = it->second;
    //    for(auto iy:mp){
    //     if (iy.second > minx)
    //     {
    //         /* code */
    //         cout << iy.first;
    //         break;
    //     }

    //    }
    vector<pair<string, int>> A;

    // Copy key-value pair from Map
    // to vector of pairs
    for (auto &it : mp)
    {
        A.push_back(it);
    }

    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
    auto iz = A.begin();
    int x2 ;
    if(A.size() != 7){
        x2 =0;
    }
    else{
       x2=  iz->second;
    }
    
    int flag =0;
    int min1 ;
    string s2;
    for(auto it:A){
        // cout << it.first  << " "<< it.second<< endl;
        if(it.second > x2){
           
            // cout << it.first ;
            min1 = it.second;
            s2 =it.first;
            flag =1;
            break;
        }
    }
    int cnt =0;
     for(auto it:A){
        // cout << it.first  << " "<< it.second<< endl;
        if(it.second == min1){
           
            // cout << it.first ;
            cnt++;
            
        }
    }

    if(flag == 0 || cnt > 1){
        cout << "Tie"<<"\n";
    }
    else {
        cout << s2;
    }
}