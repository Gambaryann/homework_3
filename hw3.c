#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int N = 10;
	printf(" ����� ���� = %d\n ������� ������� ����������� = %d", N * N * N, 6* (N*N));

	return 0;
}

//������� 3 20.09.2023