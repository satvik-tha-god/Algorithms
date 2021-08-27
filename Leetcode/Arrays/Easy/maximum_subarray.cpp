class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_so_far = INT_MIN;
        int max_at_here = 0;
        for(int i=0;i<n;i++){
            max_at_here+=nums[i];
            if(max_so_far<max_at_here){
                max_so_far = max_at_here;
            }
            if(max_at_here<0){
                max_at_here = 0;
            }
        }
        return max_so_far;
    }
};
