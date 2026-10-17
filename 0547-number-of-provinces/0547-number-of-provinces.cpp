class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visted(n, 0);
        int provinces = 0;
        for(int start = 0; start < n; start++){
            if(visted[start] == 1){
                continue;
            }
            provinces++;
            queue<int> q;
            visted[start] = 1;
            q.push(start);
            while(!q.empty()){
                int city = q.front();
                q.pop();
                for(int nextcity = 0; nextcity < n; nextcity++){
                    if(isConnected[city][nextcity] == 1 && visted[nextcity] == 0){
                        visted[nextcity] = 1;
                        q.push(nextcity);
                    }
                }
            }
        }
        return provinces;
        
    }
};