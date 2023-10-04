//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int count = 0;
        map<char,int>mp;
        mp['I'] = 1; mp['V'] = 5; mp['X'] = 10; mp['L'] = 50; mp['C'] = 100; mp['D'] = 500; mp['M'] = 1000; 
        reverse(str.begin() , str.end());
        count += mp[str[0]];
        for(int i = 1 ; i < str.length() ; i++){
            if(mp[str[i]] < mp[str[i-1]])
            count -= mp[str[i]];
            else
            count += mp[str[i]];
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends
