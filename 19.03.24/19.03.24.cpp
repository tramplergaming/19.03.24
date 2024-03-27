#include <iostream>
#include <Windows.h>
#include <cstdlib>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	
	int arr[10], max = 0, min = 101;

	//1

	std::cout << "=======������� 1=======\n\n";

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << "  ";
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		else if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	std::cout << "\n\n����������� �����: " << min;
	std::cout << "\n\n������������ �����: " << max;

	//2

	std::cout << "\n\n=======������� 2=======\n\n";

	int arr1[10], start, end, num, sum = 0;

	std::cout << "������� ������ ���������: ";
	std::cin >> start;

	std::cout << "\n������� ����� ���������: ";
	std::cin >> end;

	for (int i = 0; i < 10; i++)
	{
		arr1[i] = rand() % end + start;
	}

	std::cout << "\n������� �����: ";
	std::cin >> num;

	for (int i = 0; i < 10; i++)
	{
		if (arr1[i] < num)
		{
			sum += arr1[i];
		}
	}

	std::cout << "\n";

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr1[i] << "  ";
	}

	std::cout << "\n\n����� ���������, �������� ������� ������ ���������� ��������������: " << sum;
	
	//3

	double profits[12];
	int startMonth, endMonth;

	std::cout << "\n\n=======������� 3=======\n\n";

	
	for (int i = 0; i < 12; i++) 
	{
		std::cout << "������� ������� ����� �� " << i + 1 << "-� ����� (12 �������) : ";
		std::cin >> profits[i];
		std::cout << "\n";
	}

	
	std::cout << "������� ��������� ����� ������: ";
	std::cin >> startMonth;
	std::cout << "\n������� �������� ����� ������: ";
	std::cin >> endMonth;

	if (startMonth < 1 || startMonth > 12 || endMonth < 1 || endMonth > 12 || startMonth > endMonth) 
	{
		std::cout << "\n������: ������� ������ �������� �������\n";
		return 1;
	}

	double maxp = profits[startMonth - 1], minp = profits[startMonth - 1];
	int maxMonth = startMonth, minMonth = startMonth;

	for (int i = startMonth; i <= endMonth; i++) 
	{
		if (profits[i - 1] > maxp) 
		{
			maxp = profits[i - 1];
			maxMonth = i;
		}
		if (profits[i - 1] < minp) 
		{
			minp = profits[i - 1];
			minMonth = i;
		}
	}

	std::cout << "\n����� � ������������ ��������: " << maxMonth << " (" << maxp << ")\n";
	std::cout << "\n����� � ����������� ��������: " << minMonth << " (" << minp << ")\n";


	return 0;
}