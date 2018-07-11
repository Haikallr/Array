#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	cout<<"========================================================\n";
	cout<<"\t||Nama 	= Mohammad Haikal Ramadan	||"<<endl;
	cout<<"\t||Nim  	= 20170801058			||"<<endl;
	cout<<"========================================================"<<endl;
	
    float Na, Un, Us, TUGAS, nama, nis ;
    float bindo, biologi, kimia, fisika, bing, mtk;
    float bindo3, biologi3,kimia3, fisika3, bing3, mtk3; //declar rata-rata semester 3
    float bindo4, biologi4, kimia4, fisika4, bing4, mtk4; //declar rata-rata semester 4
    float bindo5, biologi5, kimia5, fisika5, bing5, mtk5; //declar rata-rata semester 5
    float rtbindo,rtbiologi,rtkimia,rtfisika,rtbing,rtmtk; //declar rata-rata seluruh semester
    float usbindo,usbio,uskim,usfis,usbingg,usmtk,us; //declar nilai US
    float nsbindo,nsbiologi,nskimia,nsfisika,nsbingg,nsmtk,ns; //declar nilai NS
    float unbindo,unbiologi,unkimia,unfisika,unbingg,unmtk,un; //declar nilai UN
    float nabindo,nabiologi,nakimia,nafisika,nabingg,namtk,na; //declar nilai NA
		
	cout<<"\nNilai Semester 3	"<<endl;
	cout<<"\nNilai Bahasa Indonesia Semester 3   :	"; //input nilai Bahasa Indonesia semester3
	cin>>bindo3; //output nilai Bahasa Indonesia semester3
	cout<<"Nilai Biologi Semester 3            :	"; //input nilai Biologi semester3
	cin>>biologi3; //output nilai Biologi semester3
	cout<<"Nilai Kimia Semester 3              :	"; //input nilai kimia semester3
	cin>>kimia3; //output nilai kimia semester3
	cout<<"Nilai Fisika Semester 3             :	"; //input nilai fisika semester3
	cin>>fisika3; //output nilai fisika semester3
	cout<<"Nilai Bahasa Inggris Semester 3     :	"; //input nilai Bahasa Inggris semester3
	cin>>bing3; //input nilai Bahasa Inggris 3
	cout<<"Nilai Matematika Semester 3         :	"; //input nilai Matematika semester3
	cin>>mtk3; //output nilai Matematika semester3
	
	cout<<"\nNilai Semester 4	"<<endl;
	cout<<"\nNilai Bahasa Indonesia Semester 4    :	"; //input nilai Bahasa Indonesia semester4
	cin>>bindo4; //output nilai Bahasa Indonesia semester4
	cout<<"Nilai Biologi Semester 4             :	"; //input nilai Biologi semester4
	cin>>biologi4; //output nilai Biologi semester4
	cout<<"Nilai Kimia Semester 4               :	"; //input nilai Kimia semester4
	cin>>kimia4; //output nilai Kimia semester4
	cout<<"Nilai Fisika Semester 4              :	"; //input nilai Fisika semester4
	cin>>fisika4; //output nilai fisika semester4
	cout<<"Nilai Bahasa Inggris Semester 4      :	"; //input nilai Bahasa Inggris semester4
	cin>>bing4; //output nilai Bahasa Inggris semester4
	cout<<"Nilai Matematika Semester 4          :	"; //input nilai Matematika semester4
	cin>>mtk4; //output nilai Matematika semester4

	cout<<"\nNilai Semester 5	"<<endl;
	cout<<"\nNilai Bahasa Indonesia Semester 5    :	"; //input nilai Bahasa Indonesia semester5
	cin>>bindo5; //output nilai Bahasa Indonesia semester5
	cout<<"Nilai Biologi Semester 5             :	"; //input nilai Biologi semester5
	cin>>biologi5; //output nilai Biologi semester5
	cout<<"Nilai Kimia Semester 5               :	"; //input nilai Kimia semester5
	cin>>kimia5; //output nilai Kimia semester5
	cout<<"Nilai Fisika Semester 5              :	"; //input nilai Fisika semester5
	cin>>fisika5; //output nilai Fisika semester5
	cout<<"Nilai Bahasa Inggris Semester 5      :	"; //input nilai Bahasa Inggris semester5
	cin>>bing5; //output nilai Bahasa Inggris semester5
	cout<<"Nilai Matematika Semester 5          :	"; //input nilai Matematika semester5
	cin>>mtk5; //output nilai Matematika semester5
	cout<<"======================================================"<<endl;
	
	cout<<"\tNilai Rata - Rata Semester"<<endl;
	rtbindo=(bindo3+bindo4+bindo5)/3; //rumus rata-rata semester Bahasa Indonesia
	cout<<"\nNilai Rata - Rata  Bahasa Indonesia  :	"<<rtbindo<<endl; //output rata-rata semester Bahasa Indonesia
	rtbiologi=(biologi3+biologi4+biologi5)/3; //rumus rata-rata semester Biologi
	cout<<"Nilai Rata - Rata  Biologi           :	"<<rtbiologi<<endl; //output rata-rata semester Biologi
	rtkimia=(kimia3+kimia4+kimia5)/3; //rumus rata-rata semester kimia
	cout<<"Nilai Rata - Rata  Kimia             :	"<<rtkimia<<endl; //output rata-rata semester kimia
	rtfisika=(fisika3+fisika4+fisika5)/3; //rumus rata-rata semester fisika
	cout<<"Nilai Rata - Rata  Fisika            :	"<<rtfisika<<endl; //output rata-rata semester fisika
	rtbing=(bing3+bing4+bing5)/3; //rumus rata-rata semester Bahasa Inggris
	cout<<"Nilai Rata - Rata  Bahasa Inggris    :	"<<rtbing<<endl; //output rata-rata semester Bahasa Inggris
	rtmtk=(mtk3+mtk4+mtk5)/3; //rumus rata-rata semester Matematika
	cout<<"Nilai Rata - Rata  Matematika        :	"<<rtmtk<<endl; //output rata-rata semester Matematika
	cout<<"========================================================"<<endl;
	
	cout<<"\n\tNilai US\n";
	cout<<"\nBahasa Indonesia                     : "; cin>>usbindo;
	cout<<"Biologi                              : "; cin>>usbio;
	cout<<"Kimia                                : "; cin>>uskim;
	cout<<"Fisika                               : "; cin>>usfis;
	cout<<"Bahasa Inggris                       : "; cin>>usbingg;
	cout<<"Matematika                           : "; cin>>usmtk;
	cout<<"========================================================="<<endl;
	
	us=(usbindo+usbingg+usfis+uskim+usbio+usmtk)/6; //rumus rata-rata nilai US
	cout<<"\tNilai Rata - Rata US : "<<us<<endl; //output nilai rata-rata US
	cout<<"=========================================================="<<endl;
	
		cout<<"\n\tNilai NS\n";
		cout<<"\nBahasa Indonesia                     : "; cin>>nsbindo;
		cout<<"Biologi                              : "; cin>>nsbiologi;
		cout<<"Kimia                                : "; cin>>nskimia;
		cout<<"Fisika                               : "; cin>>nsfisika;
		cout<<"Bahasa Inggris                       : "; cin>>nsbingg;
		cout<<"Matematika                           : "; cin>>nsmtk;
		cout<<"========================================================="<<endl;
	
	ns=(nsbindo+nsbingg+nsfisika+nskimia+nsbiologi+nsmtk)/6; //rumus rata-rata nilai NS
	cout<<"\tNilai Rata - Rata NS :"<<ns<<endl; //output nilai rata-rata NS
	cout<<"========================================================="<<endl;
	
		cout<<"\n\tNilai UN\n";
		cout<<"\nBahasa Indonesia                     : "; cin>>unbindo;
		cout<<"Biologi                              : "; cin>>unbiologi;
		cout<<"Kimia                                : "; cin>>unkimia;
		cout<<"Fisika                               : "; cin>>unfisika;
		cout<<"Bahasa Inggris                       : "; cin>>unbingg;
		cout<<"Matematika                           : "; cin>>unmtk;
		cout<<"========================================================="<<endl;
	
	un=(unbindo+unbingg+unfisika+unkimia+unbiologi+unmtk)/6; //rumus rata-rata nilai UN
	cout<<"\tNilai Rata - Rata UN :"<<un<<endl; //output nilai rata-rata UN
	
		cout<<"============================================================\n";
		cout<<"\nNILAI AKHIR\n";
		nabindo=(0.4*nsbindo)+(0.6*unbindo);
		cout<<"Nilai Akhir B.Indonesia : "<<nabindo<<endl;
		nabingg=(0.4*nsbingg)+(0.6*unbingg);
		cout<<"Nilai Akhir B.Inggris : "<<nabingg<<endl;
		namtk=(0.4*nsmtk)+(0.6*unmtk);
		cout<<"Nilai Akhir Matematika : "<<namtk<<endl;
		nafisika=(0.4*nsfisika)+(0.6*unfisika);
		cout<<"Nilai Akhir Fisika : "<<nafisika<<endl;
		nakimia=(0.4*nskimia)+(0.6*unkimia);
		cout<<"Nilai Akhir Kimia : "<<nakimia<<endl;
		nabiologi=(0.4*nsbiologi)+(0.6*unbiologi);
		cout<<"Nilai Akhir Biologi : "<<nabiologi;
		cout<<"\n\n";
		cout<<"=========================================================="<<endl;
		
		na=(nabindo+nabingg+namtk+nafisika+nakimia+nabiologi)/6;
		cout<<"Nilai Akhir Rata-Rata : "<<na<<endl;
		cout<<"\n";
		cout<<"============================================================\n";
		
		cout<<"\n\tKETERANGAN LULUS\n";
		if(nabindo>=4){
		cout<<"\nNilai B.Indonesia Anda Lulus"<<endl;
		}else{
		cout<<"Nilai B. Indonesia Anda Tidak Lulus"<<endl;
	}
	    if(nabingg>=4){
		cout<<"Nilai B. Inggris Anda Lulus"<<endl;
		}else{
		cout<<"Nilai B. Inggris Anda Tidak Lulus"<<endl;
	}
	    if(namtk>=4){
		cout<<"Nilai Matematika Anda Lulus"<<endl;
		}else{
		cout<<"Nilai Matematika Anda Tidak Lulus"<<endl;
	}
	    if(nafisika>=4){
		cout<<"Nilai Fisika Anda Lulus"<<endl;
		}else{
		cout<<"Nilai Fisika Anda Tidak Lulus"<<endl;
	}
	    if(nakimia>=4){
		cout<<"Nilai Kimia Anda Lulus"<<endl;
		}else{
		cout<<"Nilai Kimia Anda Tidak Lulus"<<endl;
	}
	    if(nabiologi>=4){
		cout<<"Nilai Biologi Anda Lulus"<<endl;
		}else{
		cout<<"Nilai Biologi Anda Tidak Lulus"<<endl;
	}
	    cout<<"\n";
	    
	    cout<<"======================================="<<endl;
	    cout<<"RATA-RATA KESELURUHAN NILAI AKHIR\n";
	    if(na>=5.5){
		cout<<"Congratulations, Kamu Lulus ^_^"<<endl;
		}else{
		cout<<"Maaf, Anda Tidak Lulus :("<<endl;
		cout<<"=======================================";
	}
	getch();
	}
