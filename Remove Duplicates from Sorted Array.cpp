//Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        while(j < nums.size()){
            while(j < nums.size() && nums[i]==nums[j])j++;
            if(j<nums.size()) 
                nums[++i]=nums[j++];
        }
        if(nums.size()==0)
            return 0;
        return i+1;
    }
};

