#include<stdio.h>
#include<conio.h>
int main()
{
	char nama [50];
	long upah,jam;
	printf("masukkan nama karyawan : "); scanf("%[^\n]", &nama);
	printf("jam kerja : ");scanf("%i", &jam);
	printf("----------------------------------\n");
	upah=5000*jam;
	printf("Nama Karyawan : %s\n",nama);
	printf("upah kerja : RP %d ",upah);
	getch();
}
