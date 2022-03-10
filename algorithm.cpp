#include "matrix.h"

using namespace std;

int matrix::search_min(int point)
{
	cell_distance	tmp(INT_MAX);
	int				min_way = INT_MAX;

	for (int i = 1; i < size; i++)
	{
		if (arr[point][i] < tmp)
		{
			tmp = arr[point][i];
			min_way = i;
		}
	}
	if (min_way == INT_MAX)
		return(0);
	return(min_way);
}

int* matrix::algorithm()
{
	int	*result = new int[size + 1];
	int				iter = 1;
	int				point = 0;
	int				next_point;

	for (int i = 0; i < size; i++)
		result[i] = 0;
	while (iter < size + 1)
	{
		next_point = search_min(point);
		result[iter] = next_point;
		min_way += arr[point][next_point];
		for (int i = 0; i < size; i++)
			arr[i][next_point] = INT_MAX;
		arr[next_point][point] = INT_MAX;
		point = next_point;
		iter++;
	}
	return(result);
}

void	matrix::show_min_way()
{
	cout << min_way.get_item() << endl;
}
