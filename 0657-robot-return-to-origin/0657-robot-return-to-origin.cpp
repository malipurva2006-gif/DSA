class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.length();
        int i = 0;
        int l =0;
        int r=0;
        int u=0;
        int d=0;
        while(i<n){

            if(moves[i]=='L'){
                l++;
            }
            else if(moves[i]=='R'){
                r++;
            }
            else if(moves[i]=='U'){
                u++;
            }
            else{
                d++;
            }
            i++;
        }
        if(l==r && u==d){
            return true;
        }
        else { 
            return false;
        }
        
    }
};