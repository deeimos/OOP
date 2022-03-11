#include "matrix.h"

using namespace std;

int main()
{
	int		count;
	int		input;
	int*	result;

	setlocale(LC_ALL, "Russian");
	cout << "Введите количество городов:\n";
	cin >> count;
	matrix cities(count);
	cout << "\n0 - заполнить матрицу в ручную | 1 - случайными числами"
		 << "\n(при вводе другого символа программа завершится)\n";
	cin >> input;
	if (input == 1)
		cities.set_random_matrix();
	else if (input == 0)
		cities.set_input_matrix();
	else
		return 0;
	cout << "\nМатрица смежности для решения задачи коммивояджера:\n";
	cities.show_matrix();
	result = cities.algorithm();
	cout << "\nРешение:\n";
	for (int i = 0; i < count + 1; i++)
	{
		cout << result[i] + 1 << "\t";
	}
	cout << "\n\nДлина пути для этого решения:\n";
	cities.show_min_way();
	free(result);
	return 0;
}
