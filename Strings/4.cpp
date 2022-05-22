#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        string t = "";
        for(int i=0;i<s.length();i++){
            int j = i+1;
            t += s[i];
            while(s[j]==s[i]){
                j++;
                i++;
            }
        }
        return t;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 
