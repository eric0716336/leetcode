//Find the Highest Altitude
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int start=0;
        int max=0;
        for(int i=0;i<gain.size();i++){
            start+=gain[i];
            if(max<start)max=start;
        }
        return max;
    }
};
