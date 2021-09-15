// Dutch National Flag algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Take 3 variables to keep a track of starting, ending and current positions
        int start=0;
        int end=nums.size()-1;
        int curr=0;
        
        while(curr<=end){//// if current pointer less than equal to end pointer
            if(nums[curr]==0){
                swap(nums[start],nums[curr]);// if 0 found then swap with current and start pointer values
                start++; // move start pointer one step ahead
                curr++; // move current pointer one step ahead
            }
            else if(nums[curr]==1){
                curr++; // if current pointer at 1 then just move the current pointer ahead
            }
            else if(nums[curr]==2){
                swap(nums[end],nums[curr]); // if current pointer is 2 then swap values of current and end pointed values
                end--; // move end pointer one step back
            }
        }
    }
};
