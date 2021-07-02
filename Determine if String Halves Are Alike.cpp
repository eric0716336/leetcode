//Determine if String Halves Are Alike
class Solution {
public:
    bool halvesAreAlike(string s) {
        int s1=0;
        int s2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='A'||s[i]=='I'||s[i]=='U'||s[i]=='E'||s[i]=='O'){
                if(i<s.length()/2)s1++;
                else s2++;
            }
        }
        return (s1==s2);
    }
};
