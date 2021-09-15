//Hash Map Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;//create a vector to store answer
        unordered_map<int,int> m;//an unordered map to store elements and their indexes
        for(int i=0;i<nums.size();i++){//iterate over each elemnt
            if(m.find(target-nums[i]) != m.end()){//if diiference between target and iterated element is present
                auto it = m.find(target-nums[i]);//store it in an iterator
                ans.push_back(i);//push the index of first element in the vector
                ans.push_back(it->second);//push the index of second element in the vector
                break;//break from loop since we have our answer
            }
            m[nums[i]]=i;//if difference not found in the map add the element and its index in the map
        }
        return ans;//return your answer
    }
};
//Time Complexity: O(n)
//Space Complexity: O(n)
