class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        while(s<=e){
            if(nums[s]%2==0 and nums[e]%2!=0){
                s++;
                e--;
            }
            else if(nums[s]%2!=0 and nums[e]%2!=0){
                e--;
            }
            else if(nums[s]%2==0 and nums[e]%2==0){
                s++;
            }
            else{
                swap(nums[s],nums[e]);
                s++;
                e--;
            }
        }
        return nums;
    }
};