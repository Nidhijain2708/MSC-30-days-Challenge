// https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int a[26]={0};
        int n=s.size();
        for(int i=0;i<n;i++){
            char ch=s[i];
            int indx=ch-'a';
            a[indx]++;
        }
        for(int i=0;i<n;i++){
            char ch=t[i];
            int indx=ch-'a';
            a[indx]--;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=0){
                return false;
            }
        }
        return true;
    }
};