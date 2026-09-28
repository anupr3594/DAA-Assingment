class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        int depthcounter = 0;
        for(char &ch : s){
            if(ch == '('){
                depthcounter++;
            }
            else if(ch == ')'){
                depthcounter--;
            }
            maxi = max(maxi,depthcounter);
        }
        return maxi;
        
    }
};