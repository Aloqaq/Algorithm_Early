#include<bits/stdc++.h>
using namespace std;
char a[11], b[1000010];
int main() {
    
    gets(a);
    gets(b);
    strcat(a," "); 
    strcat(b," ");//��ab�����һ��" "����С��Ե��Ѷ� 
    int i, s, n=0, j, ss=0, k, rec;
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] >= 'a')
            a[i] -= 'a' - 'A';
    }
    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] >= 'a')
            b[i] -= 'a' - 'A';
    } //ͳһab�Ĵ�Сд 
    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] == ' ') {
            s=1;
            for (j = n,k = 0; j <= i, a[k] != '\0'; j++, k++) {
                if(b[j] == a[k]) {
                    s*=1;//��s����¼����λ�ܷ��Ӧ����������1����ȷ��һλ����s�ͱ��0 
                } else {
                     s*=0;
                }
            }
            if (s == 1) {
                ss++; //���ÿ�ζ��Ծ����ӷ��ϵĴ��� 
            }
            if (ss == 1 && s==1) {
                rec = n; //��¼��һ�η��ϵ�λ�� 
            }
            n=i;
            n++;
        }
    }
    if(ss==0){
		ss=-1;
		cout<<ss;
	}else if(ss>=1){
		cout<<ss<<" "<<rec;
	}
    return 0;
}
