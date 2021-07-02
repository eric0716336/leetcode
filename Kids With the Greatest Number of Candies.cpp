//Kids With the Greatest Number of Candies
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max=0;
        int max_index=0;
        for(int i=0;i<candies.size();i++){
            if(max<candies[i]){
                max=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]!=max && (candies[i]+extraCandies)>=max){
                ans.push_back(1);
            }
            else if(candies[i]==max){
                ans.push_back(1);
            }
            else ans.push_back(0);
        }
        return ans;
    }
};
