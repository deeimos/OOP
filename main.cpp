#include "matrix.h"

using namespace std;

int main()
{
	int		count;
	int		input;
	int*	result;

	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� �������:\n";
	cin >> count;
	matrix cities(count);
	cout << "\n0 - ��������� ������� � ������ | 1 - ���������� �������"
		 << "\n(��� ����� ������� ������� ��������� ����������)\n";
	cin >> input;
	if (input == 1)
		cities.set_random_matrix();
	else if (input == 0)
		cities.set_input_matrix();
	else
		return 0;
	cout << "\n������� ��������� ��� ������� ������ �������������:\n";
	cities.show_matrix();
	result = cities.algorithm();
	cout << "\n�������:\n";
	for (int i = 0; i < count + 1; i++)
	{
		cout << result[i] + 1 << "\t";
	}
	cout << "\n\n����� ���� ��� ����� �������:\n";
	cities.show_min_way();
	free(result);
	return 0;
}
