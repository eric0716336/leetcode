//Count the Number of Consistent Strings
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int count=0;
        int max=words.size();
        for(int i=0;i<words.size();i++){
            string curr=words[i];
            for(int j=0;j<curr.length();j++){
                int flag=0;
                for(int k=0;k<allowed.length();k++){
                    if(curr[j]==allowed[k]){
                        flag=1;
                        break;
                    }
                }
                if(!flag){
                    max--;
                    break;
                }
            }
        }
        return max;
    }
};
