//XOR Operation in an Array
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans;
        ans=start;
        for(int i=1;i<n;i++){
            ans= ans^(start+(2*i));
        }
        return ans;
    }
};
