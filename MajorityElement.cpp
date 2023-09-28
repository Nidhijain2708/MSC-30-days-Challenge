class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i])!=mpp.end()){
                mpp[nums[i]]++;
            }
            else{
                mpp[nums[i]]=1;
            }
        }
        int ans=0;
        for(auto x:mpp){
            if(x.second>(nums.size())/2){
                ans=x.first;
                break;
            }
        }
        return ans;
    }
};