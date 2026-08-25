class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int sn = s.length();
        int tn = t.length();
        string ns="";
        string nt="";
     int j =0;
      int i =0;
      while(i< sn  ){
      if (s[i]=='#'){
        if(ns!="") {ns.pop_back();}
      }
      else{
        ns.push_back(s[i]);
      }
      i++;
}
 while(j< tn  ){
      if (t[j]=='#'){
        if(nt!="") {nt.pop_back();}
      }
      else{
        nt.push_back(t[j]);
      }
      j++;
}
if(ns==nt){return true;}
else{return false;}
        
        
    }
};