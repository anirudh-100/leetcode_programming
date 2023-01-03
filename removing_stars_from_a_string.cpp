class Solution {
public:
    string removeStars(string s) 
    {
        string w;
        for(auto i:s)
        {
            if(i!='*')
            w.push_back(i);
            else
            w.pop_back();
        }
        return w;
        
    }
};
