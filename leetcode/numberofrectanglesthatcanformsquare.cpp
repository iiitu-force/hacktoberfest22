class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> ans;
        for(int i=0;i<rectangles.size();i++){
            vector<int> v = rectangles[i];
            sort(v.begin(), v.end());
            ans.push_back(v[0]);
            
        }
        sort(ans.begin(), ans.end());
        int l = ans.size();
        int cnt = count(ans.begin(), ans.end(),ans[l-1] );
        return cnt;
    }
};
// class Solution {
// public:
//     int countGoodRectangles(vector<vector<int>>& rectangles) {
//         unordered_map<int,int> map;
//         for(vector<int> rectangle: rectangles){
// 		    //storing number of time a particular square can obtain
//             map[min(rectangle[0],rectangle[1])]++; //[4,6], you can cut it to get a square with a side length of at most  4.
//         }
//         int cnt=INT_MIN,maxlen=INT_MIN;
//         for(auto m: map){
//             if(m.first>maxlen) cnt=m.second,maxlen=m.first; //finding out the maxlength square then storing its count in cnt
//         }
//         return cnt;
//     }
// };
// class Solution {
// public:
//     int countGoodRectangles(vector<vector<int>>& rectangles) {
//          int cnt = 0, max = 0;
//         for (vector<int>rectangle: rectangles) {
// 		//get the minimum from width and height
//             int side = min(rectangle[0], rectangle[1]); //[4,6], you can cut it to get a square with a side length of at most  4.
//             if (side > max) {  //comparing max side with new side 
//                 cnt = 1; // intialise count with 1
//                 max = side; //update the max by new side 
//             }else if (side == max) { // square with maxlength 
//                 cnt++; //just increase the count of square with max len
//             }
//         }
//         return cnt;
//     }
// };