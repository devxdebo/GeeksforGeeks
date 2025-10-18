class Solution {
  public:
    string caseSort(string& s) {
        // code here
        vector <int> hashu(26,0);
        vector <int> hashl(26,0);
        
        for(auto &i:s){
            if(i>=65 && i<=90){
                hashu[i-65]++;
                i = ' ';
            }else{
                hashl[i-97]++;
                i = '#';
            }
        }
        
        string capital = "";
        string small = "";
        
        for(int i=0;i<26;i++){
            if(hashu[i]!=0){
                while(hashu[i]!=0){
                    capital.push_back(char(i+65));
                    hashu[i]--;
                }
            }
        }
        
        for(int i=0;i<26;i++){
            if(hashl[i]!=0){
                while(hashl[i]!=0){
                    small.push_back(char(i+97));
                    hashl[i]--;
                }
            }
        }
        
        int ptr1 = 0;
        int ptr2 = 0;
        
        for(auto &i:s){
            if(i=='#'){
                i = small[ptr1];
                ptr1++;
            }else{
                i = capital[ptr2];
                ptr2++;
            }
        }
        
        return s;
        
        
        
        
        
        
        
    }
};