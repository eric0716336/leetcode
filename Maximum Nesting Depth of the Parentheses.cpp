//Maximum Nesting Depth of the Parentheses
class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')count++;
            else if(s[i]==')')count--;
            if(max<count)max=count;
        }
        return max;
    }
};
