class Solution {
public:
    bool containsDuplicate(vector<int>& n) 
    {
        unordered_map<int,int>m;
        int f=0;
        for(int i=0;i<n.size();i++)
        m[n[i]]++;
        for(auto &i:m)
        {
            if(i.second>=2)
            {
                f=1;
                break;
            }
            
        }
        if(f==0)

        return false;
        else
        return true;
        
    }
};
