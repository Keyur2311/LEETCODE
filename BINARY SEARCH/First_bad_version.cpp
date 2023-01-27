https://leetcode.com/problems/first-bad-version/
class Solution {
public:
    int firstBadVersion(int n) {
       int l = 1;
        int r =n;
        int mid;
        int ans=-1;
        
        while(l<=r){
            mid = l+(r-l)/2;
            
            if(isBadVersion(mid)){
                 ans=mid;
                 r=mid-1;
            }
            else {
                 l=mid+1;
            }
        }
        
        return ans;
    }
};
