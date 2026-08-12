class Solution {
public:
    string reverseWords(string s) {
        int i =0;
        int j=0;
        int k;
        for(int i=0;i<s.length();i++){
             if(s[i]==' ' || i == s.length()-1){
                if(i == s.length()-1){k=i;}
             else{ k = i-1;}
              while(k>=j){
                char temp = s[k];
                s[k]= s[j];
                s[j]= temp;
                j++;
                k--;
              }
              i=i+1;
              j= i;
             }
        }
        return s;
    }
};