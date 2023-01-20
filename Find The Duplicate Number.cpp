class Solution {
public:
    int findDuplicate(vector<int>& n) {
        unordered_map<int,int>m;
        for(int i=0;i<n.size();i++)
        m[n[i]]++;
        for(auto &i:m)
        {
            if(i.second>=2)
            return i.first;
        }
        return 0;

        
    }
};
