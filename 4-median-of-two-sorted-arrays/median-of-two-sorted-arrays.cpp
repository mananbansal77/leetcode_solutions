class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=0;
        int m=0;
        vector<int>c;
        while(n<nums1.size()&&m<nums2.size())
        {
            if(nums1[n]<nums2[m])
            {
                
            c.push_back(nums1[n]);
            n++;
            }
            else
            {
                c.push_back(nums2[m]);

                m++;
            }

        }
        while(n<nums1.size())
        {
            c.push_back(nums1[n]);
            n++;
        }
        while(m<nums2.size())
        {
            c.push_back(nums2[m]);
            m++;
        }
        int l=c.size();
        double r=0;
        if(l%2==0)
        {
            r=(c[l/2]+c[(l-1)/2])/2.0;
            return r;
        }
        else
        return(c[l/2]);
        
    }
};