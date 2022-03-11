#include "matrix.h"

using namespace std;

matrix::matrix()
{
}

matrix::matrix(int size_matrix) : cell_distance()
{
	size = size_matrix;
	min_way.set_distance(0);
	arr = new cell_distance * [size_matrix];
	for (int i = 0; i < size_matrix; i++)
	{
		arr[i] = new cell_distance[size_matrix];
	}
}

void	matrix::set_random_matrix()
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (i == j)
				arr[i][j] = INT_MAX;
			else
			{
				arr[i][j].random_distance();
				arr[j][i] = arr[i][j];
			}
		}
	}
}

void	matrix::set_input_matrix()
{
	double			inp;
	cell_distance	tmp;

	for (int i = 0; i < size - 1; i++)
	{
		cout << "Введите растояния от " << i << "города к другим(:" << size - i - 1 << "): ";
		for (int j = i; j < size; j++)
		{
			if (i == j)
				arr[i][j] = INT_MAX;
			else
			{
				cin >> inp;
				tmp.set_distance(inp);
				arr[i][j] = tmp;
				arr[j][i] = arr[i][j];
			}
		}
	}
	cout << endl;
}

void	matrix::show_matrix()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i != j)
				cout << arr[i][j].get_item() << "\t";
			else
				cout << "no\t";
		}
		cout << endl;
	}
	cout << endl;
}

matrix::~matrix()
{
	for (int i = 0; i < size; i++)
	{
		delete[](arr[i]);
	}
	delete[](arr);
}
