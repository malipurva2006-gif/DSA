class Solution {
public:
    int mySqrt(int n) {
       double x = n;
       // here we are jst assummingg
       //then keep improving until x becomes close to n
       while((x*x -n)>0.0001){
        x= (x+ n/x)/2;
        
       } 
       return x;
    }
};