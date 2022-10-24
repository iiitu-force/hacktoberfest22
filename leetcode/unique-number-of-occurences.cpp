class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int harr[2001]={0};
        for(int i =0;i<arr.size();i++){
            harr[1000 + arr[i]]++;
        }
        sort(harr, harr+2001);
        int flag =1;
        for(int i = 0;i<2000;i++){
            if(harr[i] != 0 && harr[i] == harr[i+1]){
                flag =0;
                break;
            }
            
        }
        return flag;
        
    }
};
//
Approach 1: Map and set
Count occurences of each number using a hash map. Insert all occurences into a hash set. If, after the insert, the sizes of hash map and set are equal, then all occurences are unique.

bool uniqueOccurrences(vector<int>& arr) {
  unordered_map<int, int> m;
  unordered_set<int> s;
  for (auto n : arr) ++m[n];
  for (auto& p : m) s.insert(p.second);
  return m.size() == s.size();
}
We can improve this for the average case by checking the result of s.insert(), which returns false if an element is already there.

bool uniqueOccurrences(vector<int>& arr) {
  unordered_map<int, int> m;
  unordered_set<int> s;
  for (auto n : arr) ++m[n];
  for (auto& p : m)
      if (!s.insert(p.second).second) return false;
      //set.insert returns a pair: (first) pointer to the inserted element, and (second) a boolean - false if an element was already in the set, and true otherwise. So, as we inserting occurances, we return false if we find a duplicate.
  return true;
}
Complexity Analysis
Time: O(n), where n is the size of input array.
Memory: O(m), where m is the number of unique elements (we store counts in hash map and set).

Approach 2: Counting sort
Since our values are limited to [-1000, 1000], we can use an array instead of hash set to count occurrences. Then, we can sort our array and check that no adjacent numbers are the same.

bool uniqueOccurrences(vector<int>& arr) {
  short m[2001] = {};
  for (auto n : arr) ++m[n + 1000];
  sort(begin(m), end(m));
  for (auto i = 1; i < 2001; ++i)
      if (m[i] && m[i] == m[i - 1]) return false;
  return true;
}
We can also note that the array length is limited to 1000, so no element will repeat more than 1000 times. Therefore we can use another array to do the counting sort over the occurrences.

bool uniqueOccurrences(vector<int>& arr) {
  short m[2001] = {}, s[1001] = {};
  for (auto n : arr) ++m[n + 1000];
  for (auto i = 0; i < 2001; ++i)
      if (m[i] && ++s[m[i]] > 1) return false;
  return true;
}
Complexity Analysis
Time:

First solution: O(n + m log m).
Second solution: O(n).
Memory: O(m).