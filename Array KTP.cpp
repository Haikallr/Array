#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char NAMA [30];
	char NIK  [20];
	char TTL  [20];
	char JenisKelamin [10];
	char Alamat [60];
	char Agama  [10];
	char StatusPerkawinan [15];
	char Pekerjaan [10];
	char Kewarganegaraan [4];
	cout<<"Input Data KTP\n"<<endl;
	cout<<"nama : ";
	cin.getline(NAMA,30);
	cout<<"nik : ";
	cin.getline(NIK,20);
	cout<<"ttl : ";
	cin.getline(TTL,20);
	cout<<"jeniskelamin : ";
	cin.getline(JenisKelamin,10);
	cout<<"alamat : ";
	cin.getline(Alamat,60);
	cout<<"agama : ";
	cin.getline(Agama,10);
	cout<<"statusperkawinan : ";
	cin.getline(StatusPerkawinan,15);
	cout<<"pekerjaan : ";
	cin.getline(Pekerjaan,10);
	cout<<"kewargenaraan : ";
	cin.getline(Kewarganegaraan,4);
getch();
}
