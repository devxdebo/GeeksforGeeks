string sort(string s) {
    // complete the function here
    
    vector <int> hash(26,0);
    
    for(auto i: s){
        hash[i-97]++;
    }
    
    s = "";
    
    for(int i=0;i<26;i++){
        while(hash[i]!=0){
            s.push_back((char)(i+97));
            hash[i]--;
        }
    }
    
    return s;
}