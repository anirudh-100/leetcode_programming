class Solution {
public:

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>v;
        
        for(auto i:nums1)
        {
            stack<int>s;
            int c=-1,f=0;
            for(auto j:nums2)
            {
                s.push(j);
                if(s.top()==i)
                f=1;
                if(f==1 && s.top()>i)
                {
                    c=s.top();
                   break;
                }
            }
            v.push_back(c);

        }
        return v;
        
    }
};
