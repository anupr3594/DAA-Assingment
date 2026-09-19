class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>&B, int n) {
        int indx = m+n-1;
        int i = m-1;
        int j = n-1;

        while( i>=0 && j>=0){
            if(A[i] >= B[j]){
                A[indx--] = A[i--];

            }else{
                A[indx--] =  B[j--];
            }
        }
        while(j >= 0){
            A[indx--] = B[j--];
        }
        
    }
};