class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // for(int i=0;i<k;i++){
        //     int temp=nums[nums.size()-1];
        //     for(int j=nums.size()-1;j>=1;j--){
        //         nums[j]=nums[j-1];
        //     }
        //     nums[0]=temp;
        // }

        int arr[nums.size()];
        for(int i=0;i<nums.size();i++){
            int ind=(i+k)%nums.size();
            arr[ind]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=arr[i];
        }
    }
};