#include <iostream>

bool Unique(int* arr, int size, int element)
{
	int unique = 1;
	for (int i = 0; i < size; i++)
	{
		if (element != i && arr[i] == arr[element])
		{
			return 0;;
		}
	}
	return 1;
}

void SortGrades(int* grades, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (grades[j] > grades[i] && Unique(grades, size, j))
			{
				int temp = grades[i];
				grades[i] = grades[j];
				grades[j] = temp;
			}
		}
	}
}

int main()
{
	int n = 7;
	int* prototype{ new int[n] {7, 2, 5, 7, 8, 2, 3 } };
	SortGrades(prototype, n);
	for (int i = 0; i < n; i++)
	{
		printf_s("%d ", prototype[i]);
	}
}