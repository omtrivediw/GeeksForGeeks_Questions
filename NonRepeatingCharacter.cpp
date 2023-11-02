//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        int arr[26] = {0};
        for(int i = 0 ; i < S.length() ; i++){
            arr[(int)S[i] - 97]++;
        }
        for(int j = 0 ; j < S.length() ; j++){
            if(arr[(int)S[j] - 97] == 1)
            return S[j];
        }
        return '$';
       //Your code here
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends
