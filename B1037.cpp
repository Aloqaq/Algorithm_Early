#include<bits/stdc++.h>
using namespace std;
/*
B1037 �ڻ����ִ�����Ǯ
ʮ�߸�������(Sickle)��һ����¡(Galleon)
��ʮ�Ÿ�����(Knut)��һ������ 
   ģ��������� 
*/

struct coin{
	int Galleon;
	int Sickle;
	int Knut;	
};

int main()
{
	coin price;
	coin money;
	coin rest;//�۸񣬸������
	
	//����Ǯ 
	cin>>price.Galleon;
	getchar();
	cin>>price.Sickle;
	getchar();
	cin>>price.Knut; 
	
	cin>>money.Galleon;
	getchar();
	cin>>money.Sickle;
	getchar();
	cin>>money.Knut;
	
	int sumPrice=price.Galleon*17*29+price.Sickle*29+price.Knut;
	int sumMoney=money.Galleon*17*29+money.Sickle*29+money.Knut;
	
	int ret;
	bool flag;//������ 
	if(sumPrice<=sumMoney){
		ret=sumMoney-sumPrice;
		flag=true;
	}else{
		ret=sumPrice-sumMoney;
		flag=false;
	} 
	
	
	rest.Galleon=ret/(17*29);
	ret=ret%(17*29);
	rest.Sickle=ret/29;
	ret=ret%29;
	rest.Knut=ret;
	
	if(flag==false){
		cout<<"-";
	}
	cout<<rest.Galleon
		<<"."<<rest.Sickle
		<<"."<<rest.Knut;
	return 0;
} 
