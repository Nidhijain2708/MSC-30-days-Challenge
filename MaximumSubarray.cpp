// https://leetcode.com/problems/maximum-subarray/
// Kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums.size()==1){
                return nums[i];
            }
            sum+=nums[i];
            maxSum=max(sum,maxSum);
            if(sum<0){
                sum=0;
            }
        }
        cout<<maxSum;
        return maxSum;
    }
};