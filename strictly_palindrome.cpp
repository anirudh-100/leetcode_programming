class Solution {
public:
bool p(int n,int c)
{
    string s,z;
    while(n!=0)
    {
        s+=to_string(n%c);
        z=to_string(n%c)+z;
        n/=c;
    }if(s==z)
    return true;
    else
    return false;
}
    bool isStrictlyPalindromic(int n) 
    {
        for(int i=2;i<=n-2;i++)
        {
            if(p(n,i))
            continue;
            else
            return false;
        }
        return true;
    }
};
