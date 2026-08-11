class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          int n = strs.size(); // size of array
          if(n==1){ return strs[0];}
          string str1 = strs[0];
          string pref = str1;
          string new_pref="";
           
          for(int i =1;i<n;i++){  // iterate over array
            string y = strs[i];
             string new_pref="";
            for(int j =0; j<y.length();j++){ //  iterate over string
                if(y[j] == pref[j]){
                   new_pref.push_back(y[j]);
                
                }
                else{
                  break;
                }  
            } pref = new_pref;
          }
    return pref;
    }
};