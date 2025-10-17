class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        string bk = s1;
        
        reverse(bk.begin(),bk.end());
        reverse(bk.begin(),bk.begin()+2);
        reverse(bk.begin()+2,bk.end());
        
        if(bk==s2){
            return true;
        }else{
            int n = s1.size()-2;
            
            bk = s1;
            
            reverse(bk.begin(),bk.end());
            reverse(bk.begin(),bk.begin()+n);
            reverse(bk.begin()+n,bk.end());
            
            if(bk==s2){
                return true;
            }else{
                return false;
            }
        }
    }
};
