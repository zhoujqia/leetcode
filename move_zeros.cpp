#include <iostream>
#include <vector>
using namespace std;

	void moveZeroes(vector<int>& nums) {

		for(int i = 0; i < nums.size(); i++)
		{
			if(0 == nums[i])
			{
				int j = i + 1;
				while(j < nums.size())
				{
					if( 0 == nums[j])
					{
						j++;
					} else {
						break;
					}					
				}

				if( j <= (nums.size() - 1) && nums[j] != 0)
				{
					nums[i] = nums[j];
					nums[j] = 0;
				} else {
					return;
				}

			}

		}
        
    }

int main(int argc, char const *argv[])
{
	vector<int> v { 0, 1, 0, 3, 12};
	moveZeroes(v);
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " "; 
	
	return 0;
}


	
	

