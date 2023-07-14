#include<bits/stdc++.h>
using namespace std;
const int maxn=101;
char a[maxn];
int n,k=0;
string b[maxn],c[maxn],d[maxn],e[maxn],f[maxn];//五个行
void show(char i,int k){
	if(i=='0'){
		b[k]="XXX";
		c[k]="X.X";
		d[k]="X.X";
		e[k]="X.X";
		f[k]="XXX";
	}else if(i=='1'){
		b[k]="..X";
		c[k]="..X";
		d[k]="..X";
		e[k]="..X";
		f[k]="..X";
	}
	else if(i=='2'){
		b[k]="XXX";
		c[k]="..X";
		d[k]="XXX";
		e[k]="X..";
		f[k]="XXX";
	}else if(i=='3'){
		b[k]="XXX";
		c[k]="..X";
		d[k]="XXX";
		e[k]="..X";
		f[k]="XXX";
	}
	else if(i=='4'){
		b[k]="X.X";
		c[k]="X.X";
		d[k]="XXX";
		e[k]="..X";
		f[k]="..X";
	}
	else if(i=='5'){
		b[k]="XXX";
		c[k]="X..";
		d[k]="XXX";
		e[k]="..X";
		f[k]="XXX";
	}else if(i=='6'){
		b[k]="XXX";
		c[k]="X..";
		d[k]="XXX";
		e[k]="X.X";
		f[k]="XXX";
	}
	else if(i=='7'){
		b[k]="XXX";
		c[k]="..X";
		d[k]="..X";
		e[k]="..X";
		f[k]="..X";
	}
	else if(i=='8'){
		b[k]="XXX";
		c[k]="X.X";
		d[k]="XXX";
		e[k]="X.X";
		f[k]="XXX";
	}
	else if(i=='9'){
		b[k]="XXX";
		c[k]="X.X";
		d[k]="XXX";
		e[k]="..X";
		f[k]="XXX";
	}

}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		show(a[i],k);
		k++;
	}
	
	for(int i=0;i<5;i++){//按行输出
		 if(i==0){
		 	for(int j=0;j<n;j++){
		 		cout<<b[j];
		 		if(j<n-1)	cout<<".";
			 }
		 }
		 if(i==1){
		 	for(int j=0;j<n;j++){
		 		cout<<c[j];
		 		if(j<n-1)	cout<<".";
			 }
		 }
		 if(i==2){
		 	for(int j=0;j<n;j++){
		 		cout<<d[j];
		 		if(j<n-1)	cout<<".";
			 }
		 }
		 if(i==3){
		 	for(int j=0;j<n;j++){
		 		cout<<e[j];
		 		if(j<n-1)	cout<<".";
			 }
		 }if(i==4){
		 	for(int j=0;j<n;j++){
		 		cout<<f[j];
		 		if(j<n-1)	cout<<".";
			 }
		 }
		 cout<<endl;
	}
	return 0;
}
