#include <stdio.h>
#include <stdlib.h>

int read_sequence(int** elements, int* elements_count)
{
	int count;

	if (scanf("%d", &count) != 1)
	{
		return -1;
	}

	int* array = new int[count];

	for (int index = 0; index < count; index++)
	{
		if (scanf("%d", &array[index]) != 1)
		{
			return -2;
		}
	}

	*elements = array;
	*elements_count = count;

	return 0;
}

int main() {
	//setlocale(LC_ALL, "RU");

	int *first_sequence, first_count;
	
	if (read_sequence(&first_sequence, &first_count) != 0)
	{
		return -1;
	}

	int* second_sequence, second_count;
	
	if (read_sequence(&second_sequence, &second_count) != 0)
	{
		return -2;
	}
	
	int first_index = 0, second_index = 0;

	while (true)
	{
		bool
			first_ended = first_index >= first_count,
			second_ended = second_index >= second_count;

		if (first_ended && second_ended)
		{
			break;
		}

		if (first_ended) {
			printf("%d ", second_sequence[second_index++]);
			continue;
		}


		if (second_ended) {
			printf("%d ", first_sequence[first_index++]);
			continue;
		}

		if (first_sequence[first_index] < second_sequence[second_index])
		{
			printf("%d ", first_sequence[first_index++]);
		}
		else if (first_sequence[first_index] > second_sequence[second_index])
		{
			printf("%d ", second_sequence[second_index++]);
		}
		else
		{
			printf("%d ", first_sequence[first_index++]);
			printf("%d ", second_sequence[second_index++]);
		}
	}

	return 0;
}	
