#include "cell_distance.h"

using namespace std;

cell_distance::cell_distance(double l)
{
	item = l;
}

void	cell_distance::random_distance()
{
	item = rand() % 1000;
}

void	cell_distance::set_distance(double arg)
{
	item = arg;
}
double	cell_distance::get_item()
{
	return item;
}

bool operator<(const cell_distance& left, const cell_distance& right)
{
	return left.item < right.item;
}

cell_distance operator+=(cell_distance& left, cell_distance& right)
{
	left.item += right.item;
	return left;
}
