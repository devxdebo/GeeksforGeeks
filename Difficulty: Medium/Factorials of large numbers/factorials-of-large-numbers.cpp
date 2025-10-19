// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector <int> vec(1,1);
        int size = 1;
        int carry = 0;
        
        for(int i=2;i<=n;i++){
            for(int j=0;j<size;j++){
                int ans = vec[j]*i + carry;
                if(ans>9){
                    carry = ans/10;
                    ans %= 10;
                }else{
                    carry = 0;
                }
                vec[j] = ans;
            }
            while (carry) {
                vec.push_back(carry % 10);
                carry /= 10;
            }
            size = vec.size();
        }
        reverse(vec.begin(),vec.end());
        return vec;
        
    }
};