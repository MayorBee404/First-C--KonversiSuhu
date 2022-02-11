
#include <iostream>

using namespace std;

int main()
{
int celcius , kelvin ; 
float fahrenheit , reamur ;

	cout<<".........Selamat Datang di............"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"|	PROGRAM KONVERSI SUHU	     |"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"Isi Suhu Celcius:";
	cin>>celcius;
	cout<<"======================================"<<endl;
	cout<<endl;
	
	fahrenheit=(9/5*celcius)+32;
	reamur=(0.8*celcius);
	kelvin=273+celcius;
	
	cout<<"Nilai: "<<fahrenheit<<" Fahrenheit"<<endl;
	cout<<"Nilai: "<<reamur<<" Reamur"<<endl;
	cout<<"Nilai: "<<kelvin<<" Kelvin"<<endl;
	cout<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"=============Selesai================="<<endl;
	cout<<"Name : Daninsyah Bagas Abiyansa"<<endl;
	cout<<"NIM  : 1201190039";
	
	return 0;
}
