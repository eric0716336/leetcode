//Implement strStr()
class Solution {
public:
    int strStr(string haystack, string needle) {
        // int pos=-1;
        if(haystack.length()==0 && needle.length()==0)return 0;
        if(haystack.length()<needle.length())return -1; 
        for(int i=0;i<haystack.length();i++){
            int count=0;
            while(haystack[i+count]==needle[count]){
                if(count==needle.length() ||  i+count==haystack.length())break;
                count++;
            }
            if(count==needle.length())return i;
        }
        return -1;
    }
};
