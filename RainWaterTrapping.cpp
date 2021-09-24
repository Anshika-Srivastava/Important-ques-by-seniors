//Optimised approach
class Solution
{
	public:
		int trap(vector<int> &height)
		{
			int n = height.size();
            //two variables to store left max and right max
			int max_left = 0;
			int max_right = 0;
			int res = 0;
            //take two pointers from start and end of array
			int left = 0;
			int right = n - 1;
			while (left <= right)//till the time our both pointer don't cross each other 
			{
				if (height[left] <= height[right])//left is smaller so iterate left
				{
					if (height[left] >= max_left)
					{
						max_left = height[left];
					}
					else
					{
						res += max_left - height[left];
					}

					left++;
				}
				else// right is smaller so iterate right
				{
					if (height[right] >= max_right)
					{
						max_right = height[right];
					}
					else
					{
						res += max_right - height[right];
					}

					right--;
				}
			}

			return res;
		}
};
