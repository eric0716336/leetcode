//To Lower Case
class Solution {
public:
    string toLowerCase(string str) {
        string ans;
        for(int i=0;i<str.length();i++){
            int a=int(str[i]);
            if(a>=65 && a<=90){
                ans+=char(a+32);
            }
            else ans+=str[i];
        }
        return ans;
    }
};
