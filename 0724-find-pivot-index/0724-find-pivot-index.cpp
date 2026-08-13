class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        vector<int> sumleft(n); // mistake : i never initialized as (n)...gave me runtime error
        vector<int> sumright(n);
        sumleft[0]=0;
        sumright[n-1]=0;
        int ans=-1;
        // construct sumleft array
        for(int i =1;i<n;i++){
            sumleft[i]=arr[i-1]+sumleft[i-1];
        }
        // construsting sumright array
        for(int i =n-2;i>=0;i--){
            sumright[i]=arr[i+1]+sumright[i+1];
        }
         for(int i =0;i<n;i++){
            if(sumleft[i]==sumright[i]){
                ans= i;
                break;
            }
         }
         return ans;
    }
};