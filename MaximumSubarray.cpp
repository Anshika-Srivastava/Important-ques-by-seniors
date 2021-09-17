//Kadane's Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int sum=0;
        int mx=A[0];
        for(int i=0;i<A.size();i++){
            sum+=A[i];
            mx=max(mx,sum);
            if(sum<0)
                sum=0;
        }
        return mx;
    }
};
