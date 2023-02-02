class Solution {
public:

void helper(int n,vector<string>&ans,int cl,int op,string s)
{
    if(cl>=op && op==n)
    {
        ans.push_back(s);
        return;
    }
    if(op<n)
    {
        s.push_back('(');
        helper(n,ans,cl,op+1,s);
        s.pop_back();
    } 

    if(cl<op)
    {
        s.push_back(')');
        helper(n,ans,cl+1,op,s);
        // s.pop_back();
    }
    return;
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        if(n>0)
        s+='(';
        int cl=0,op=1;
        helper(n,ans,cl,op,s);
        return ans;
    }
};
