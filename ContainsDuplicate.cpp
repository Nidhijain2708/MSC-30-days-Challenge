// https://leetcode.com/problems/contains-duplicate/description/
#include<map>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i])!=mpp.end()){
                mpp[nums[i]]++;
            }
            else{
                mpp[nums[i]]=1;
            }
        }
        bool ans=false;
        for(auto x:mpp){
            if(x.second>1){
                return true;
            }
        }
        return false;
    }
};