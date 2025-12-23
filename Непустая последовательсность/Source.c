#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "rus");
	int num;
	int sum = 0, count = 0;
	
	do
	{
		printf("Введите целое число (число должно оканчиваться одним нулем):\n");
		scanf_s("%d", &num);
		if (num % 10 == 0)
		{
			printf("Введите 0 для завершения записи чисел\n");
			sum += num;
			count++;
		}
		else
			printf("Нужно ввести число, оканчивающееся на ноль!\n");
	} while (num != 0);

	count = count - 1;

	printf("\nСумма всех чисел: %d\n", sum);
	printf("Количество всех чисел: %d\n", count);

	_getch();
}