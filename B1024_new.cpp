//1024 科学计数法 (20分)
#include <cstdio>
char num[10000] = { 0 };//初始化两个字符数组 
char exp[10000] = { 0 };
int main()
{
	int i, j;
	i = j = 0;
	char ch;
	//边输入边处理 
	while ((ch = getchar()) != 'E')//输入的字符不为E 
	{
		if (ch == '.') {
			continue;
		}
		num[i++] = ch;//将所有的底数部分存储到num数组 
	}
	while ((ch = getchar()) != '\n')//紧接着第二部分输入 
	{
		exp[j++] = ch;//指数部分存储到exp数组 
	}
	if (num[0] == '-')//最前面的符号部分
		putchar('-');//putchar输出字符 
	int valid_digit = i - 2;//小数部分的有效位数是i-2
	int n = 0;
	sscanf(exp+1, "%d", &n);//将exp字符串转化为正整数，从E后面的一位开始 ，n为转化成功的个数 
	if (n) {
		if (exp[0] == '+') {
			if (n >= valid_digit) {//无小数点
				printf("%s", num + 1);
				int k = n - valid_digit;
				while (k--)
				{
					putchar('0');//补0 
				}
			}
			else//有小数点
			{
				i = 1;
				while (num[i])
				{
					putchar(num[i]);
					if (i == n + 1)//在该位置输出小数点
						putchar('.');
					i++;
				}
			}
		}
		else if (exp[0] == '-') {
			printf("0.");
			n--;//输出n-1个0
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
