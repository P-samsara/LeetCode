class Solution {
public:
    double findkth(vector<int>& a, vector<int>& b, int k)
    {
        int m = a.size();
        int n = b.size();
        if(m > n)
            return findkth(b, a, k);
        if(m == 0)
            return b[k-1];
        if(k==1)
            return (a[0]<b[0])?a[0]:b[0];
        int pa = (k/2 < m)?(k/2):m; 
        int pb = k-pa;
        if(a[pa-1]<b[pb-1])
        {
            a.erase(a.begin(),a.begin()+pa);
            return findkth(a,b,k-pa);
        }
        else if(a[pa-1]>b[pb-1])
        {
            b.erase(b.begin(),b.begin()+pb);
            return findkth(a,b,k-pb);
        }
        else 
            return a[pa-1];
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int num1 = nums1.size();
        int num2 = nums2.size();
        if((num1+num2)&0x1)
            return findkth(nums1,nums2,(num1+num2)/2+1);
        else
        {
            vector<int>c; vector<int>d;
            vector<int>::iterator it;
            for(it=nums1.begin();it!=nums1.end();it++)
            c.push_back(*it);
            for(it=nums2.begin();it!=nums2.end();it++)
            d.push_back(*it);
            return (    findkth(nums1,nums2,(num1+num2)/2)+findkth(c,d,(num1+num2)/2+1)    )/2;
        }
    }
        
};