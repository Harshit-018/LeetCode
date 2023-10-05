class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0;
        int maj1 = NULL;
        
        for (int i=0;i<n;i++){
            if(nums[i]==maj1){
                count1++;
            }
            else if(count1==0){
                maj1=nums[i];
                count1=1;
            }
            else {
                count1--;
            }
        }
        return maj1;
    }
};