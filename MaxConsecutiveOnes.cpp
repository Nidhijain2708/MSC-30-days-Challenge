class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes=0,n=nums.size(),largestMaxOne=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                maxOnes++;
                if(maxOnes>largestMaxOne){
                    largestMaxOne=maxOnes;
                }
            }
            else{
                maxOnes=0;
            }
        }
        return largestMaxOne;
    }
};