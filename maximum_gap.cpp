class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=0;
        for( int i=0;i<nums.size()-1;i++)
        {
             if (nums[i+1]-nums[i]>m)
             m=nums[i+1]-nums[ i];

        }
        return m;
        
    }
};
