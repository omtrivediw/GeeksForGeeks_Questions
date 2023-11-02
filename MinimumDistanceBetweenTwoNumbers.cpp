//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int forx = 100001, fory = 100001;
        int ans = 100001;
        for(int i = 0 ; i < n ; i++){
            if(a[i] == x)
            forx = i;
            else if(a[i] == y)
            fory = i;
            if(forx != 100001 or fory != 100001)
            ans = min(ans, abs(forx-fory));
        }
        if(forx == 100001 or fory == 100001)
        return -1;
        else 
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
