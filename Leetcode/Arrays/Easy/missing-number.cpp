class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int m = (n*(n+1))/2;
        int l =0;
        for(int i=0;i<n;i++){
           l+=nums[i];
        }
        return m-l;
    }
};
