#pragma once

#include "cell_distance.h"

class matrix : public cell_distance
{
private:
	int				size;
	cell_distance	**arr;
	cell_distance	min_way;
public:
	matrix();
	matrix(int size_matrix);
	void	set_random_matrix();
	void	set_input_matrix();
	void	show_matrix();
	int		search_min(int point);
	int		*algorithm();
	void	show_min_way();
	~matrix();
};
