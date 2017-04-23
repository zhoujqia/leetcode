#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
	if (matrix.size() == 0) return false;
	if (matrix[0].size() == 0) return false;
	int row = 0, col = matrix[0].size() - 1;

	while (row < matrix.size() && col >= 0)
	{
		if(target > matrix[row][col]) row++;
		else if(target < matrix[row][col]) col--;
		else return true;
	}

	return false;
}

int main(int argc, char const *argv[])
{
	std::vector<std::vector<int>> matrix { {1,   4,  7, 11, 15},
                                        	{ 2,   5,  8, 12, 19} };
    cout << searchMatrix(matrix,2) <<endl;                                 	
    cout << searchMatrix(matrix,20) <<endl;                                      	
	return 0;
}


