//Longest Common Prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int common_count=0;
        
        if(strs.size()==0){
            return "";
        }
        
        int len = strs[0].length();
        
        int flag=0;
        for(int i=0;i<len;i++){
            string s=strs[0];
            // char cur = s[i];
            for(int j=0;j<strs.size();j++){
                string ev=strs[j];
                
                if(i==ev.length()){
                    flag=1;
                    common_count=i;
                    break;
                }
                
                if(s[i]==ev[i]){
                    continue;
                }
                else{
                    flag=1;
                    break;
                }
                
            }
            if(flag==1){
                common_count=i;
                break;
            }
            else if(i==len-1){
                common_count=i+1;
                break;
            }
        }
        
        if(strs.size()==0){
            return "";
        }
        else if(strs.size()==1){
            return strs[0];
        }
        
        string ret="";
        string curr=strs[0];
        ret=curr.substr(0,common_count);
        
        return ret;
    }
};
