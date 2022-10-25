#include <iostream>
using namespace std;
#define N 9      
void print(int arr[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}
bool isValid(int puzzle[N][N], int row,	int col, int number)
{
	for (int x = 0; x <= 8; x++)
		if (puzzle[row][x] == number)
			return false;
	
	for (int x = 0; x <= 8; x++)
		if (puzzle[x][col] == number)
			return false;
	
	int sRow = row - row % 3,
			sCol = col - col % 3;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (puzzle[i + sRow][j +
							sCol] == number)
				return false;
	return true;
}
bool solution(int puzzle[N][N], int row, int col)
{
	if (row == N - 1 && col == N)
		return true;
	
	if (col == N) {
		row++;
		col = 0;
	}
	if (puzzle[row][col] > 0)
		return solution(puzzle, row, col + 1);
	for (int number = 1; number <= N; number++)
	{
		if (isValid(puzzle, row, col, number))
		{	
			puzzle[row][col] = number;
			if (solution(puzzle, row, col + 1))
				return true;
		}
		puzzle[row][col] = 0;
	}
	return false;
}
int main()
{
	int puzzle[N][N] = { { 0, 7, 0, 0, 0, 0, 0, 0, 9 },
					{ 5, 1, 0, 4, 2, 0, 6, 0, 0 },
					{ 0, 8, 0, 3, 0, 0, 7, 0, 0 },
					{ 0, 0, 8, 0, 0, 1, 3, 7, 0 },
					{ 0, 2, 3, 0, 8, 0, 0, 4, 0 },
					{ 4, 0, 0, 9, 0, 0, 1, 0, 0 },
					{ 9, 6, 2, 8, 0, 0, 0, 3, 0 },
					{ 0, 0, 0, 0, 1, 0, 4, 0, 0 },
					{ 7, 0, 0, 2, 0, 3, 0, 9, 6 } };
        cout << "Before Solving " << endl;
    	print(puzzle);
    	cout << "" << endl;
    	cout << "After Solving " << endl;
	if (solution(puzzle, 0, 0))
		print(puzzle);
	else
		cout << "No solution exists " << endl;

	return 0;
}