class Solution {
  public:
    int findSubString(string& str) {
        // code here
          int n = str.size();
        unordered_set<char> uniqueChars(str.begin(), str.end());
        int required = uniqueChars.size();
        unordered_map<char, int> windowCount;
        int start = 0, minLen = INT_MAX, formed = 0;
        
        for (int end = 0; end < n; end++) {
            char ch = str[end];
            windowCount[ch]++;
            if (windowCount[ch] == 1) formed++;
            
            while (formed == required) {
                minLen = min(minLen, end - start + 1);
                char startChar = str[start];
                windowCount[startChar]--;
                if (windowCount[startChar] == 0) formed--;
                start++;
            }
        }
        return minLen;
    }
};