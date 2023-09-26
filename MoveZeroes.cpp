class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;){
            if(nums[i]!=0){
                i++;
            }
            else{
                // left rotate from i to n-1
                int store=nums[i];
                for(int j=i+1;j<n;j++){
                    nums[j-1]=nums[j];
                }
                nums[n-1]=store;
                n--;
            }
        }
    }
};