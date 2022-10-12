/*Problem Link: https://leetcode.com/problems/median-of-two-sorted-arrays/description/


Problem Description:
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

Approach :

We can see that a median element would be the middle element obtained after merging both the sorted arrays and forming a sorted array ultimately. From here we observe that
the first half may comprise of some element fron num1 and some form num2 and similar applies for second half.

Also Median = (n+m+1)/2

So let's say if we make a partition and call it cut1 which implies that we have taken cut1 elements from the first array and therefore we need to take median - cut1 = cut2 elements
from second array .
Now for array to be sorted the element at cut1-1 position--(l1) should be less that element at cut2 position-- (r2) (start of second half of second array) and element at cut2-1 position --(l2) s
should be less than element at cut1 position -- (r1)(start of second half of first array)

If this is the case then we have made the cuts at correct position and have inlcuded the correct elements from both the arrays that would there in final merged sorted arrays
Thus in this case median would be either max(l1,l2) (if final array size is odd) or (max(l1,l2)+min(r1,r2))/2.0 ((if final array size is even))

Else if l1 > r2 then we need to shift l1 to second half and therefore the cut1 has to shifted to left so high = cut1-1
Else we move in second half low = cut1+1

Thus we make use of binary search for implementing the above concept of shifting making the cuts at correct position The low pointer start from 0 index and high is initialized with
the min of th size of both the arrays

We also handle the edge case when we take all the elements of arrays to be present on any one of the halves completely and so make comparisions with INT_MIN and INT_MAX so that those partitions
can also be taken into considerations

Time Complexity: O(log (m+n))
Space Complexity : O(1)  

Implementation in C++:

**/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
       if(nums1.size() > nums2.size()){
           return findMedianSortedArrays(nums2,nums1);
       }
        
        int n = nums1.size(), m = nums2.size();
        
         int median = (n+m+1)/2;
        
         int low = 0 , high = n;
        
        while(low <= high){
            
            int cut1 = low + (high - low)/2;
            int cut2 = median - cut1;
            
            long long l1 = cut1==0?INT_MIN:nums1[cut1-1];
            long long l2 = cut2==0?INT_MIN:nums2[cut2-1];
            
            long long r1 = cut1==n?INT_MAX:nums1[cut1];
            long long r2 = cut2==m?INT_MAX:nums2[cut2];
            
            if(l1<=r2 && l2<=r1){
                
                if((n+m)%2){
                    return max(l1,l2);
                }
                return (max(l1,l2)+min(r1,r2))/2.0;
            }
            
            else if(l1 > r2){
                high = cut1 - 1;
            }
            else{
                low = cut1 + 1;
            }
            
        }
        
        return 0.0;
    }
};