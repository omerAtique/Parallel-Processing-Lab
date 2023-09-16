#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc < 3)
	{
		printf("No enough arguments\n");
	}

	printf("%s\n", argv[0]);

	int size = atoi(argv[1]);

	char op = *argv[2];

	int arr[size];

	printf("Enter the elements\n");

	for (int i = 0; i<size; ++i)
	{
		scanf("%d", &arr[i]);
	}

	int result;


	//printf("Op: %c\n", op);

	if(op == '+')
	{
		for (int i = 0; i< size; ++i)
		{
			result += arr[i];
		}
	}
	else if(op == '-')
	{
		for (int i = 0; i< size; ++i)
		{
			result -= arr[i];
		}
	}
	else if(op == 'd')
	{
		result = 1;
		for (int i = 0; i< size; ++i)
		{
			result *= arr[i];
		}
	}
	else if(op == '/')
	{
		result = arr[0]/arr[1];
		for (int i = 2; i< size; ++i)
		{
			result /= arr[i];
		}
	}
	else
	{
		printf("Invalide operator\n");
	}

	printf("The result is: %d \n", result);

	return 0;
}