class Solution {
public:
    bool closeStrings(string a, string b) {
        unordered_map<char,int>x;
        unordered_map<char,int>y;
        int f=0;
        for(int i=0;i<a.length();i++)
        {
           x[a[i]]++;

        }
        for(int i=0;i<b.length();i++)
        {
           y[b[i]]++;
           
        }

        string m;//characters of a
        string n;//characters of b
        vector<int>m1;//frequency of a
        vector<int>n1;//frequency of b



        for(auto &i:x)
        {
           m=m+i.first;
           m1.push_back(i.second);
        }
        for(auto &i:y)
        {
           n=n+i.first;
           n1.push_back(i.second);
        }
        sort(m1.begin(),m1.end());
        sort(n1.begin(),n1.end());
        sort(m.begin(),m.end());
        sort(n.begin(),n.end());        
       
        if(m==n && m1==n1)
        return true;
        else
        return false;
    }
};
