class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
      vector<pair<int,int>>v;
      unordered_map<int,int>m;
      for(int i=0;i<nums.size();i++)
      m[nums[i]]++;
      for(auto &i:m)
      v.push_back({i.second,i.first});
      sort(v.begin(),v.end());
      reverse(v.begin(),v.end());
      vector<int>r;
      for(int i=0;i<k;i++)
     { r.push_back(v[i].second);}
      return r;


        
    }
};
