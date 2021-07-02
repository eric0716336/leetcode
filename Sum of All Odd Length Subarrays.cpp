//Sum of All Odd Length Subarrays
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=1;i<arr.size()+1;i+=2){
            
            for(int j=0;j<arr.size();j++){
                for(int k=j;k<j+i && j+i<arr.size()+1;k++){
                    sum+=arr[k];
                }
            }
        }
        return sum;
    }
};
