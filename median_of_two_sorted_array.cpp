class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        
        for(int i=0;i<b.size();i++)
        a.push_back(b[i]);
        sort(a.begin(),a.end());
        int n=a.size();
        double d;
        if(n%2!=0)
        d=a[n/2];
        else
        d=(a[(n/2)-1]+a[n/2])/2.0;
        
        return d;
      
    }
};
