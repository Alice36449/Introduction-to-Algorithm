#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// ����� �����Լ� ����
// ���⿡�� �����Ӱ� ���� Ǯ�̸� ���� �Լ��� �����ؼ� ����ϸ� ��

// test �Լ���
void test2()
{
	char word[100] = { 0, };
	int i = 0;
	printf("[������ n ����Ʈ ���ڿ��� �Է��ϼ���]: ");
	//scanf("%s", &word);
	fgets(word, BUFSIZ, stdin);
	printf("\n�Է¹��� ���ڿ� : %s\n", word);

	while (word[i]) {
		if (word[i] >= 'A' && word[i] <= 'Z')
			word[i] += 32;
		else if (word[i] >= 'a' && word[i] <= 'z')
			word[i] -= 32;
		i++;
	}

	printf("�ڹٲ� ���ڿ�\t: %s", word);


}

void test3()
{
	int arr[7][20] = { 0, };
	int i = 0;
	int j = 0;
	int k = 0;
	int a = 0;
	int b = 0;

	for (j = 1; j <= 20; j++) {
		arr[0][j - 1] = j;
	}
	for (int i = 1; i < 7; i++) {
		for (int j = 1; j <= 20; j++) {
			for (int k = 0; k < j; k++) {
				arr[i][j - 1] += arr[i - 1][k];
			}
		}
	}
	printf("[���� ���� i, j�� �Է��ϼ���]: ");
	scanf("%d%d", &a, &b);
	printf("���� %d�� %dȣ ���� %d ���� �л��� �ֽ��ϴ�.", a, b, arr[a][b - 1]);
}
void test5() {
	int numArr[5] = { 11, 22, 33, 44, 55 };
	int* numPtrA;
	void* ptr;

	numPtrA = &numArr[2];
	ptr = numArr;

	printf("%d\n", *(numPtrA + 2));
	printf("%d\n", *((int*)ptr + 1));

}

int main()
{
	//test2();		// 2�� ����
	//test3();		// 3�� ����
	test5();		// 5�� ����
	return 0;
}

// EOF