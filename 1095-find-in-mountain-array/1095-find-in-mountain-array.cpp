/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int peakIndexInMountainArray(MountainArray &mountainArr) {
        int r = mountainArr.length()-1;
        int l = 0;
        while(l<r){
            int mid = l + (r-l)/2;
                
            if(mountainArr.get(mid)<mountainArr.get(mid+1))
               l = mid+1;
               else r = mid;
        }
        return l;        
    }
               
    int bsearch(MountainArray &mountainArr, int l, int r, int target){
        int mid;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(mountainArr.get(mid)==target) return mid;   
            else if(mountainArr.get(mid)< target)
                l = mid+1;
            else r = mid-1;
        }
        return -1;  
    }
    
    int revbsearch(MountainArray &mountainArr, int l, int r, int target){
        int mid;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(mountainArr.get(mid)==target) return mid;   
            else if(mountainArr.get(mid)< target)
                r = mid-1;
            else l = mid+1;
        }
        return -1;  
    }            
               
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        
        int ind = peakIndexInMountainArray(mountainArr);
        
        int ans_ind = bsearch(mountainArr,0,ind,target);
        
        if(ans_ind != -1) return ans_ind;
        
        return ans_ind = revbsearch(mountainArr,ind,n-1,target);
    }
              
};