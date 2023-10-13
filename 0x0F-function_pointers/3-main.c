#include "3-calc.h"

/**
 * main - Entry point of the calculator program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Description: This program performs simple arithmetic operations on two
 * integer values based on the provided operator. It takes three command-line
 * arguments: the first number, the operator, and the second number. It then
 * prints the result of the operation.
 *
 * Return: 0 upon success, or error codes (98, 99, 100) in case of issues.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char *operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
    func = get_op_func(operator);
	result = func(num1, num2);
    printf("%d\n", result);
    return (0);
}
