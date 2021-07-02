//Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(int i=0;i<accounts.size();i++){
            vector<int>current = accounts[i];
            int sum=0;
            for(int j=0;j<current.size();j++){
                sum+=current[j];
            }
            if(max<sum)max=sum;
        }
        return max;
    }
};
