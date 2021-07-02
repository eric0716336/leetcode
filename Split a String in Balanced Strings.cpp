//Split a String in Balanced Strings
class Solution {
public:
    int balancedStringSplit(string s) {
        int r_count=0;
        int l_count=0;
        int count=0;
        int flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R' && s[i+1]=='L' && (r_count==0 && l_count==0)){
                count++;
                i++;
            }
            else if(s[i]=='R')r_count++;
            else if(s[i]=='L')l_count++;
            
            if(r_count==l_count && r_count>0){
                count++;
                r_count=0;
                l_count=0;
            }
        }
        return count;
    }
};
