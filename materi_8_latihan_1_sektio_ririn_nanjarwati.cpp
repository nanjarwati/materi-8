#include<iostream>
using namespace std;
	
string kucing ="anggora";//variabel hasil sebagai global
void tampil(){
	string kucing ="persia";//variabel hasil sebagai lokal
	cout<<"kucingku :"<<kucing<<endl;
}
int main()
{
	tampil();
	cout<<"kucingku :"<<kucing<<endl;
	
	system("pause");
	return 0;
}
