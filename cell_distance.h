#pragma once
#include <iostream>
#include <climits>
#include <ctime>

class cell_distance
{
private:
	double	item;
public:
	cell_distance() { item = 0; };
	cell_distance(double l);
	void	random_distance();
	void	set_distance(double	arg);
	friend bool operator<(const cell_distance& left, const cell_distance& right);
	friend cell_distance operator+=(cell_distance& left, cell_distance& right);
	double	get_item();
	//~cell_distance();
};
