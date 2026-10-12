class Solution {
public:
    //  int t[1001][1001];
    bool checkpalindrome(string &s , int i , int j ){
        if(i >= j){
            return  true;
        }
        //  if(t[i][j] != -1){
        //     return t[i][j];
        //  }
        if(s[i] == s[j])
            return checkpalindrome(s, i+1, j-1);
        
        return false;
    }
    string longestPalindrome(string s) {
        int n = s.length();
        // memset(t , -1, sizeof(t));
        int maxlen = 1;
        int startingpoint = 0;
        for(int i = 0; i <n; i++){
            for(int j = i; j < n; j++){
                if(checkpalindrome(s, i , j) == true){
                    if(j - i + 1 > maxlen){
                        maxlen = j - i + 1;
                       startingpoint = i;
                    }
                }

            }
        }
        return s.substr(startingpoint, maxlen);
       

    }
};