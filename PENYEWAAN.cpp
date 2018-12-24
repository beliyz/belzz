#include <conio.h>
#include <iostream>
#include <cstdlib>


using namespace std;
int main(){
    int buku,hari,total,disc,bayar,komik,novel,ensiklopedia,sejarah;

char nomor[8];
char lagi;
do{
string nama, alamat;
system("cls");
cout<<"                        Program SEWA BUKU                           "<<endl;
cout<<"          |============================================|                "<<endl;
cout<<"          |  Selamat Datang di Penyewaan Buku 		  |                "<<endl;
cout<<"          |          Dapatkan diskon 10%               |                "<<endl;
cout<<"          |Dengan Menyewa lebih dari sama dengan 3 hari|                "<<endl;
cout<<"          |============================================|                "<<endl<<endl;
cout<<"[1] KOMIK  		                                || biaya sewa Rp.5000/hari  ||"<<endl;
cout<<"[2] NOVEL        			                || biaya sewa Rp.6000/hari  ||"<<endl;
cout<<"[3] ENSIKLOPEDIA   					|| biaya sewa Rp.7000/hari  ||"<<endl;
cout<<"[4] SEJARAH						|| biaya sewa Rp.8000/hari  ||"<<endl;


cout<<"------------------------Identitas Penyewa Buku------------------------"<<endl;
cout<<"Masukan Nama Anda                 : "; cin>>nama;
cout<<"Masukan Alamat Anda               : "; cin>>alamat;
cout<<"Masukan Nomor HP Anda             : "; cin>>nomor;
cout<<"----------------------------------------------------------------------"<<endl;
atas:
cout<<"Pilih buku  yang ingin dipinjam [1-4] : "; 
cin>>buku;

switch(buku){
 komik=5000;           
 case 1 :
    cout<<"\nBerapa hari anda ingin menyewa buku? : ";
	cin>>hari;
      if(hari>=3){
       disc=hari*komik*0.1;
        total=(hari*komik)-disc;
      }
      else if(hari<=3){
       total=hari*komik;
      }
     
      cout<<"|====================================================================|"<<endl;
      cout<<"        Anda Telah Menyewa Komik Selama           : "<<hari<<" hari"<<endl;
      cout<<"        Total yang harus anda bayar               : Rp. "<<total<<endl;
      cout<<"        Masukan jumlah uang yang anda bayarkan    : Rp. "; cin>>bayar;      
      cout<<"        Total kembalian anda                      : Rp. "<<bayar-total<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Penyewaan Buku        *****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Buku   Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
   break;
   case 2 :
   	novel=6000;
    cout<<"\nBerapa hari anda ingin menyewa Novel? : ";cin>>hari;
      if(hari>=3){
       disc=hari*novel*0.1;
       total=(hari*novel)-disc;
      }
      else if(hari<=3){
       total=hari*novel;
      }
      cout<<"|====================================================================|"<<endl;
      cout<<"        Anda Telah Menyewa Novel selama         :     "<<hari<<" hari"<<endl;
      cout<<"        Total yang harus anda bayar             : Rp. "<<total<<"      "<<endl;
      cout<<"        Masukan jumlah uang yang anda bayarkan  : Rp. "; cin>>bayar;      
      cout<<"        Total kembalian anda                    : Rp. "<<bayar-total<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Penyewaan Buku        *****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Buku   Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
   
   break;
   case 3 :
   	ensiklopedia=7000;
    cout<<"\nBerapa hari anda ingin ensiklopedia? : ";cin>>hari;
      if(hari>=3){
       disc=hari*ensiklopedia*0.1;
         total=(hari*ensiklopedia)-disc;
      }
      else if(hari<=3){
       total=hari*ensiklopedia;
      }
      cout<<"|====================================================================|"<<endl;
      cout<<"        Anda Telah Menyewa ensiklopedia selama      : "<<hari<<" hari"<<endl;
      cout<<"        Total yang harus anda bayar                 : Rp. "<<total<<endl;
      cout<<"        Masukan jumlah uang yang anda bayarkan      : Rp. "; cin>>bayar;      
      cout<<"        Total kembalian anda                        : Rp. "<<bayar-total<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Penyewaan Buku        *****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Buku  Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
      break;
   case 4 :
   	sejarah=8000;
    cout<<"\nBerapa hari anda ingin menyewa sejarah ? :";cin>>hari;
      if(hari>=3){
       disc=hari*sejarah*0.1;
         total=(hari*sejarah)-disc;
      }
      else if(hari<=3){
       total=hari*sejarah;
      }
      cout<<"|====================================================================|"<<endl;
      cout<<"      Anda Telah Menyewa Sejarah selama 					     : "<<hari<<"  hari    |"<<endl;
      cout<<"      Total yang harus anda bayar                               : Rp. "<<total<<"      "<<endl;
      cout<<"      Masukan jumlah uang yang anda bayarkan                    : Rp. "; cin>>bayar;      
      cout<<"      Total kembalian anda                                      : Rp. "<<bayar-total<<" "<<endl;
      cout<<"|====================================================================|"<<endl;
      cout<<"|*****Terima kasih atas kunjungan anda di Penyewaan buku        *****|"<<endl;
      cout<<"|***** Jangan Lupa Untuk Mengembalikan Buku Dengan Tepat Waktu*****|"<<endl;
      cout<<"|====================================================================|"<<endl;
       break;
       break;
}
   cout<<"Apakah Anda Ingin Mengulang Lagi Dari Awal? [Y/T] = ";
   cin>>lagi;
     
      }
        while(lagi=='y'|| lagi=='Y');
getch();
}
