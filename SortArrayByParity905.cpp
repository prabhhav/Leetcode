class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
            int l=0, r=0;
            while(r<A.size())
            {
                    if(A[r]%2==0)swap(A[l++],A[r]);
                    r++;
            }
            return A;
        
    }
};
