class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int cnt =0;
        for(int i =0;i<arr.size();i++){
            string x = arr[i];
            int flag =0;
            for(int j =0 ;j<arr.size();j++){
                if(j != i &&  x == arr[j]){
                    flag =1;
                }
            }
            if(flag == 0){
                cnt++;
            }
            if(cnt == k){
                return arr[i];
            }
        }
        string temp = "";
        return temp;
    }
};
// hashmap
string kthDistinct(vector<string>& arr, int k) {
    unordered_map<string, int> m;
    for (auto &s : arr)
        ++m[s];
    for (auto &s : arr)
        if (m[s] == 1 && --k == 0)
            return s;
    return "";
}
//
 Map all the string with the number of times each of them occur.
2. Traverse the array once more and decrease the value of k by one, each time you encounter a string with count as 1.
string kthDistinct(vector<string>& arr, int k) {
    unordered_map<string, int> mp;
    for (string& s: arr)
        mp[s]++;    // Mapping string with its count.
    for (string& s: arr) {  // Traversing the string to get the kth distinct string
        if (mp[s] == 1) {   // Count of a string is 1
            k--;    // Decrease k
            if (k == 0)
                return s;   // When k is 0 we return the string
        }
    }
    return "";  // If k is more than all the distinct string
}
Time Complexity: O(2 * N)
Space Complexity: O(N)