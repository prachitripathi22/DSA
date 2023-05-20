//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        map<char,char> mst;
        map<char,char> mts;
        int n= str1.length();
        int m=str2.length();
        if(n!=m)
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(!mst.count(str1[i]))
            {
                if(mts.count(str2[i]))
                {
                    return false;
                }
                mst[str1[i]]=str2[i];
                mts[str2[i]]=str1[i];
            }
            else if(mst[str1[i]]!=str2[i]) return false;
        }
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends