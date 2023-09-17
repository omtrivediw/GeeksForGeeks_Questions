//Print First n Fibonacci Number

#include <bits/stdc++.h>
using namespace std;




class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> res;
        res.push_back(1);
        long long temp = 1;
        for(int i = 0 ; i < n ; i++)
        {
            res.push_back(temp);
            temp += res[i];
        }
        res.pop_back();
        return res;
        //code here
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends