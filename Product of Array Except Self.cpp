class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz=nums.size();
        vector<int> res(sz);
        res[0] = 1;
        for(int i=1;i<sz;i++){
            res[i] = res[i-1] * nums[i-1];
        }
        int rightFlag = 1;
        for(int i=sz-1;i>=0;i--){
            res[i] = rightFlag * res[i];
            rightFlag *= nums[i];
        }
        return res;
    }
};