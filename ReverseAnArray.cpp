// https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
vector<int> reverseArray(int n, vector<int> &nums)
{
    vector<int> v;
    for(int i=n-1;i>=0;i--){
        v.push_back(nums[i]);
    }
    return v;
}