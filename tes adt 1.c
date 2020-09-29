#include <stdio.h>
#include <stdlib.h>
 
struct Siswa {
  
  char  nama[50];
  char  tempat[50];
  char  tanggal[50];
  char  Univ[50];
  char  jurusan[50];
  char  NPM[50];
  
};
 
typedef struct Siswa biodataSiswa;
 
int main()
{
  biodataSiswa siswa;
 
  printf("\n\t\t\t Program Sederhana Mengenai ADT\n\n");
 
  printf("Masukkan Nama kamu 			: ");
  gets(siswa.nama);
  printf("\n Masukkan Tempat Lahir Kamu	 	: ");
  gets(siswa.tempat);
  printf("\n Masukkan Tanggal Lahir Kamu 		: ");
  gets(siswa.tanggal);
  printf("\n Masukkan Nama Universitas Kamu 	: ");
  gets(siswa.Univ);
  printf("\n Masukkan Nama Jurusan Kamu 		: ");
  gets(siswa.jurusan);
  printf("\n Masukkan Nomor NPM Kamu 		: ");
  gets(siswa.NPM);
  
  printf("\n\n");
  printf("Hai teman teman, nama saya %s", siswa.nama);
  printf(" Saya Lahir di %s",siswa.tempat);
  printf(" pada tanggal %s.",siswa.tanggal);
  printf("\n Saya sedang menempuh pendidikan di %s ",siswa.Univ); 
  printf(" dan saya mengambil jurusan %s", siswa.jurusan);
  printf(" \n Nomor NPM saya %s",siswa.NPM);
  
  
  
  return 0;
}
