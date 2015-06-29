#include<iostream>
#include <vector>
using namespace std;

class Solution
{
	public:
		int removeDuplicates(vector<int>& nums)
		{
			if (nums.size() == 0) return 0;
			
			int index = 0;
			for (int i = 1; i < nums.size(); i++)
			{
				if (nums[index] != nums[i])
					nums[++index] = nums[i];
			}
			
			return index + 1;
		}
};

int main()
{
	Solution mysolu;
	vector<int> numbers = {1,1,2,3,4,5,5,5,6,6};
	for (int ind = 0; ind < numbers.size();ind++)
	{
		cout << numbers[ind] <<" ";
	}

	int len = mysolu.removeDuplicates(numbers);
	cout << "the new length is: " << len;
	return 0;
}
