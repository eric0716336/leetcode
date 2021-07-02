//Reverse String
class Solution {
public:
    void reverseString(vector<char>& s) {
        int mid=s.size()/2;
        for(int i=0;i<mid;i++){
            char temp=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=temp;
        }
    }
};
