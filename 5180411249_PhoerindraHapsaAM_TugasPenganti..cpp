#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>
#include <windows.h>

using namespace std;

struct data1{
	unsigned long int idpasien;
	string nama;
	string umr;
	char jnsklmn;
	string almt;
	string golDarah;
}pasien[999];
int x;
	
void input1(){
	cout<<"Masukkan Jumlah Data Pasien	:";
	cin>>x;
	for (int i=0;i<x; i++){
	
		cout<<"Masukkan ID Pasien\t:"; 
		cin>>pasien[i].idpasien;
		cout<<"Masukkan Nama     \t:"; 
		cin>>pasien[i].nama;
		cout<<"Masukkan Umur     \t:";
		cin>>pasien[i].umr;
		cout<<"Masukkan JenisKelamin(L/P)\t:"; 
		cin>>pasien[i].jnsklmn;
		cout<<"Masukkan Alamat Pasien\t:"; 
		cin>>pasien[i].almt;
		cout<<"Masukkan Golongan Darah\t:"; 
		cin>>pasien[i].golDarah;
	};
	system ("cls");
	cout<<"Input Selesai Kembali ke Menu Sebelumnya "<<endl;
}

void update1(){
	//cari dulu
	bool found;
	unsigned long int cari;
	cout<<"Masukkan ID Untuk Diubah :";
	cin>>cari;
	found =false;
	int i=0;
	while  ((i<x)&(!found))
	{
	    if (pasien[i].idpasien==cari)
	    found=true;
	    else
	    i=i+1;
	}
	if(found){
	cout<<"ID Pasien\t: "<<cari<<endl;
	cout<<"Nama\t: "<<pasien[i].nama<<endl;
	cout<<"Umur\t: "<<pasien[i].umr<<endl;
	cout<<"Jenis Kelamin\t: "<<pasien[i].jnsklmn<<endl;
	cout<<"Alamat\t: "<<pasien[i].almt<<endl;
	cout<<"Golongan Darah\t: "<<pasien[i].golDarah<<endl;
	
	//mengubah data
	cout<<"Masukkan Data yang Baru "<<endl;
	cout<<"Masukkan Nama\t:"; cin>>pasien[i].nama;
	cout<<"Masukkan Umur\t:"; cin>>pasien[i].umr;
	cout<<"Masukkan Jenis Kelamin(L/P)\t:"; cin>>pasien[i].jnsklmn;
	cout<<"Masukkan Alamat\t:"; cin>>pasien[i].almt;
	cout<<"Masukkan Golongan Darah:"; cin>>pasien[i].golDarah;
	cout<<"Data Telah Berhasil diupdate!"<<endl;
	}
	else{
	cout<<"ID Pasien "<<cari<<" TIDAK ADA "<<endl;
	}
}

void delete1(){
	int hapus;
	cout<<endl
		<<"Masukkan Nomor Baris Data Yang Akan Dihapus :";cin>>hapus;
	hapus=hapus-1;
	for(int i=hapus;i<x;i++){
		pasien[i]=pasien[i+1];
	}
	cout<<"Data Berhasil Dihapus! "<<endl;
}

int menu1(){
	int pilih=0;
	int a=0;
    do {system ("cls");
		cout<<"Data Pasien "<<endl;
       	cout<<"Daftar Menu : "<<endl;
	    cout<<"1. Input Data Pasien"<<endl;
	    cout<<"2. Menampilkan Data "<<endl;
	    cout<<"3. Update Data "<<endl;
	    cout<<"4. Menghapus Data "<<endl;
	    cout<<"0. Keluar"<<endl;
    cout<<"Masukkan Pilihan Anda : ";cin>>pilih;
    switch(pilih)
        {case 1:{input1();a=1;break;}
         case 2:{if(a==0){cout<<"Masukkan Data Terlebih Dahulu"<<endl;}else{update1();};break;}
         case 3:{if(a==0){cout<<"Masukkan Data Terlebih Dahulu"<<endl;}else{delete1();};break;}
         case 0:{cout<<"Kembali ke Menu Utama  "<<endl;break;}
         default:cout<<"Pilihan Yang Masukkan Salah "<<endl;}
    system("pause");}
    while(pilih !=0);
}
int main()
{
	menu1();
}
