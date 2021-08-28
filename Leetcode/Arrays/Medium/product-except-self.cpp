class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pdt(n,1);
        for(int i=1;i<n;i++){
            pdt[i]=nums[i-1]*pdt[i-1];
        }
        int rightSum=1;
        for(int i=n-1;i>=0;i--){
            pdt[i]=pdt[i]*rightSum;
            rightSum = rightSum*nums[i];
        }
        return pdt;
    }
};
