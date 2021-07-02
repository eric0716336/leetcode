//Create Target Array in the Given Order
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        // ans.push_back(nums[0]);
        for(int i=0;i<nums.size();i++){
            ans.insert(ans.begin()+index[i],nums[i]);
        }
        return ans;
    }
};
