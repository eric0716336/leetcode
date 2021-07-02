//Count Items Matching a Rule
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ind=0;
        if(ruleKey=="type")ind=0;
        else if(ruleKey=="color")ind=1;
        else ind=2;
        int count=0;
        for(int i=0;i<items.size();i++){
            if(items[i][ind]==ruleValue)count++;
        }
        return count;
    }
};
