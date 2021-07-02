//Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=0;
        int maxnum=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 || sum+nums[i]>0){
                sum+=nums[i];
            }
            else sum=0;
            if(sum>max)max=sum;
            if(nums[i]>maxnum)maxnum=nums[i];
        }
        if(max>0)return max;
        return maxnum;
    }
};
