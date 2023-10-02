// https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/description/
class Solution {
public:
    bool winnerOfGame(string colors) {
        int aliceMoves=0,bobMoves=0;
        for(int i=0;i<colors.length();){
            char ch=colors[i];
            int j=i+1;
            while(j<colors.length() and colors[j]==ch){
                j++;
            }
            j--;
            int consecutiveChars=j-i+1;
            if(consecutiveChars<2){
                consecutiveChars=2;
            }
            if(ch=='A'){
                aliceMoves+=consecutiveChars-2;
            }
            else{
                bobMoves+=consecutiveChars-2;
            }
            i=j+1;
        }
        if(aliceMoves>bobMoves){
            return true;
        }
        return false;
    }
};