//using priority queue
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;//min-heap declaration
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);//pushing each element in min-heap
            if(pq.size()>k)//if the size of min heap increases the value k
                pq.pop();//pop the element as we require k large elements
        }
        return pq.top();//return the top of priority queue
    }
};
//Time Complexity:O(nlogk)
//Space Complexity:O(n)
