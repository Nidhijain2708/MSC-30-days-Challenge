// https://leetcode.com/problems/search-insert-position/description/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,m;
        while(s<=e){
            m=(s+e)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        if(s==nums.size()){
            return nums.size();
        }
        else if(nums[m]<target){
            return m+1;
        }
        else if(nums[m]>target){
            return s;
        }
        return 0;
    }
};