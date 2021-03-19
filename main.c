#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//De�i�kenler
	int tur = 1;
	int rastgeleSayi;
	int kazananOyuncu = 0;
	int birinciKullaniciSonZar = -1;
	int ikinciKullaniciSonZar = -1;
	int kazananKisininSonZari = 0;
	
	//Rastgele say� �retmek i�in kullan�l�yor.
	srand(time(NULL));
	
	   
	
	while(1){
		
    	printf("Oyuncu 1 zar atmak icin bir tusa basiniz.\n");
    	scanf("%s");   //Kullan�c�dan input almak i�in kullan�l�r.
    	
    	rastgeleSayi = (rand() % 6) + 1;  //Birinci oyuncu i�in 1'den 6'ya kadar olan say�lardan rasgeler say� �retme.
    	
    	if(rastgeleSayi == birinciKullaniciSonZar){ //Birinci oyuncu i�in e�er bir �nceki zar ile ayn� de�er gelirse oyunu bitir.
    		printf("%d\n\n",rastgeleSayi);
    		kazananOyuncu = 1;
    		kazananKisininSonZari = rastgeleSayi;
    		break;
		}
    	birinciKullaniciSonZar = rastgeleSayi;
    	printf("%d\n\n", rastgeleSayi);
    	
    	//////////////
    	
		printf("Oyuncu 2 zar atmak icin bir tusa basiniz. \n");
    	scanf("%s");
    	rastgeleSayi = (rand() % 6) + 1; //�kinci oyuncu i�in 1'den 6'ya kadar olan say�lardan rasgeler say� �retme.
    	if(rastgeleSayi == ikinciKullaniciSonZar){ //�kinci oyuncu i�in e�er bir �nceki zar ile ayn� de�er gelirse oyunu bitir.
    		printf("%d\n\n",rastgeleSayi);
    		kazananOyuncu = 2;
    		kazananKisininSonZari = rastgeleSayi;
    		break;
		}
		printf("%d\n\n",rastgeleSayi);
		
    	ikinciKullaniciSonZar = rastgeleSayi; 
    	
    	
		tur = tur + 1;
	}
	
	
	printf("\n\nOyuncu %d kazandi. %d. zari attiginda bir onceki atmis oldugu zar degeri olan %d ile ayni degeri atmis oldu.",kazananOyuncu, tur, kazananKisininSonZari);
	
	return 0;
}
