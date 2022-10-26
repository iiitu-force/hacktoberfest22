#include <bits/stdc++.h>
using namespace std;
/*
	Author:Siddharth Akar

	time complexity:nlog(N);
	space:o(1)

*/

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int gaps=(n+m)/2;
	    if((n+m)%2!=0)gaps++;
	    while(gaps>=1)
	    {
	        int l=0,r=gaps;
	        while(r<n+m)
	        {
	            if(l<n&&r<n){
	                if(arr1[l]>arr1[r])
	                    swap(arr1[l],arr1[r]);
	            }
	            else if(l<n&&r>=n){
	                 if(arr1[l]>arr2[r-n])
	                    swap(arr1[l],arr2[r-n]);
	            }
	            else{
	                if(arr2[l-n]>arr2[r-n])
	                    swap(arr2[l-n],arr2[r-n]);
	            }
	            l++,r++;
	        }
	        if(gaps==1)
	            break;
	        gaps%2!=0?gaps=gaps/2+1:gaps=gaps/2;
	        
	    }
	    
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  