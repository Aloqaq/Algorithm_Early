//1024 ��ѧ������ (20��)
#include <cstdio>
char num[10000] = { 0 };//��ʼ�������ַ����� 
char exp[10000] = { 0 };
int main()
{
	int i, j;
	i = j = 0;
	char ch;
	//������ߴ��� 
	while ((ch = getchar()) != 'E')//������ַ���ΪE 
	{
		if (ch == '.') {
			continue;
		}
		num[i++] = ch;//�����еĵ������ִ洢��num���� 
	}
	while ((ch = getchar()) != '\n')//�����ŵڶ��������� 
	{
		exp[j++] = ch;//ָ�����ִ洢��exp���� 
	}
	if (num[0] == '-')//��ǰ��ķ��Ų���
		putchar('-');//putchar����ַ� 
	int valid_digit = i - 2;//С�����ֵ���Чλ����i-2
	int n = 0;
	sscanf(exp+1, "%d", &n);//��exp�ַ���ת��Ϊ����������E�����һλ��ʼ ��nΪת���ɹ��ĸ��� 
	if (n) {
		if (exp[0] == '+') {
			if (n >= valid_digit) {//��С����
				printf("%s", num + 1);
				int k = n - valid_digit;
				while (k--)
				{
					putchar('0');//��0 
				}
			}
			else//��С����
			{
				i = 1;
				while (num[i])
				{
					putchar(num[i]);
					if (i == n + 1)//�ڸ�λ�����С����
						putchar('.');
					i++;
				}
			}
		}
		else if (exp[0] == '-') {
			printf("0.");
			n--;//���n-1��0
			while (n--)
			{
				putchar('0');
			}
			printf("%s", num + 1);
		}
	}
	else
	{
		printf("%c.%s", num[1], num + 2);
	}
	printf("\n");
	return 0;
}
