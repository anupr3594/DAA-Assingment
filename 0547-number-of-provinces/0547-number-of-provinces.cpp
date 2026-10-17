class Solution {
    private:
    void dfs(int i,vector<vector<int>>& isConnected,  vector<int> &visited){
        visited[i] = 1;
        int n = isConnected.size();
        for(int next = 0 ; next < n; next++){
            if(isConnected[i][next] == 1 && visited[next] == 0){
                dfs(next, isConnected, visited);
            }
        }

    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n, 0);
        int provinces = 0;

        for(int i = 0; i < n; i++){
            if(visited[i] == 0){
                 provinces++;

                 dfs(i, isConnected, visited);

            }
        }
        return  provinces; 
    }
};