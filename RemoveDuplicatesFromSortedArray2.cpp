class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2){
            return nums.size();
        }
        int i=2;
        for(int e=2;e<nums.size();e++){
            if(nums[e]!=nums[i-2]){
                nums[i]=nums[e];
                i++;
            }
        }
        return i;
    }
};