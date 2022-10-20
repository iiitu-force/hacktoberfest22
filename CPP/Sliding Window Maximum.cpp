class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& n, int k) {
        deque<int> d;
        vector<int> v;
        for(int i =0;i<n.size();i++){
            if(!d.empty() && d.front()==i-k){
                d.pop_front();
            }
            while(!d.empty() && n[d.back()]<n[i]){
                d.pop_back();
            }
            d.push_back(i);
            if(i>=k-1)
                v.push_back(n[d.front()]);
            }
            return v;
        }
    };

//----------------------o(n^2)-------------------------

        // int x = n.size();
        // vector<int> v;
        // for(int i =0;i<x-k+1;i++){
        //     vector<int> v1;
        //    for(int j =i;j<i+k;j++){
        //        v1.push_back(n[j]);
        //    } 
        //    int m = *max_element(v1.begin(),v1.end());
        //     v.push_back(m);
        // }
        // return v;
