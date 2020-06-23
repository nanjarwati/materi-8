#include<iostream>
using namespace std;

int hasil=5;

void tampil(){
	cout<<"hasil :"<<hasil<<endl;
	hasil =4;
}
int main()
{
	tampil();
	cout<<"hasil :"<<hasil<<endl;
	
	system("pause");
	return 0;
}
