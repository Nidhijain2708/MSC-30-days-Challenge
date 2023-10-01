// https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_5713505?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
#include <bits/stdc++.h>
int getLongestSubarray(vector<int>& a, int k){
    map<long long,int> preSumMap;
    long long sum=0;
    int larglen=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i+1;
        }
        if(sum==k){
            larglen=i+1;
        }
        long long rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            larglen=max(larglen,i-preSumMap[rem]+1);
        }
    }
    return larglen;
}