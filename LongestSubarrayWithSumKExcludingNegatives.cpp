// https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i=0,j=0,largelen=0;
    long long sum=a[0];
    while(j<a.size()){
        while(sum>k and i<=j){
            sum-=a[i];
            i++;
        }
        if(sum<k){
            j++;
            sum+=a[j];
        }
        if(sum==k){
            largelen=max(j-i+1,largelen);
            j++;
            sum+=a[j];
        }
    }
    return largelen;
}