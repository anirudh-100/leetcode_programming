class Solution {
public:
    int kthSmallest(vector<vector<int>>& n, int k) 
    {
  if(k>(pow(n.size(),2)))
  return -1;
  vector<int>v;
  for(int i=0;i<n.size();i++)
  {
      for(int j=0;j<n[i].size();j++)
      
          v.push_back(n[i][j]);
  }
  sort(v.begin(),v.end());
  return v[k-1];

    }
};
