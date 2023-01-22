class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int m=INT_MIN,j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=m)
            {
                m=nums[i];
                j=i;
            }
        }
        return j;
    }
};
