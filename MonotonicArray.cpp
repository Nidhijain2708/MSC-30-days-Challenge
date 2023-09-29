class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increase=true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){

            }
            else{
                increase=false;
                break;
            }
        }
        bool decrease=true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){

            }
            else{
                decrease=false;
                break;
            }
        }
        if(increase==true || decrease==true){
            return true;
        }
        else{
            return false;
        }
    }
};