class Solution {
public:
    void sortColors(vector<int>& a) {
        int i,n=a.size(),z=0,o=0,t=0;
        for(i=0;i<n;i++)
        {
            
                if(a[i]==0)
                z++;
                else if(a[i]==1)
                o++;
                else
                t++;
        }
        a={};
            
        while(z!=0)
        
        {
            a.push_back(0);
            
            z--;
        }
        while(o!=0)
        
        {
            a.push_back(1);
            o--;
        }
        while(t!=0)
        
        {
            a.push_back(2);
            t--;
        }


        
    }
};
