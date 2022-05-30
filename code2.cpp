#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
    string reverseWords (string s)
    {
        stack <int> st;
        int i,j;
        string ans="";
        for(i=0;i<s.length();i++)
        {   
            j=i;
            while(s[j]!=' ' && s[j]!='\0')
            {
                st.push(s[j]);
                j++;
            }
            while(!st.empty())
            {
                ans+=st.top();
                st.pop();
            }
            if(j!=s.length())
            {
                ans+='j';
            }
            i=j;
        }
        return ans;
    }
};

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        solution obj;
        cout << obj.reverseWords (s) <<endl;
    }
    return 0;
}