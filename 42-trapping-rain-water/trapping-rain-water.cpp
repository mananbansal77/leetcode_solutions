class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0;
        int rmax=0;
        int l=0;
        int r=height.size()-1;
        int t=0;
        while(l<r)
        {
            if(height[l]<height[r])
            {
                if(lmax>height[l])
                {
                    t+=lmax-height[l];
                }
                else
                {
                    lmax=height[l];
                }
                l++;

            }
            else
            {
                if(rmax>height[r])
                {
                    t+=rmax-height[r];

                }
                else
                rmax=height[r];
                r--;
            }
            
        }
        return t;
        
    }
};