#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int onluk() {
	int sayi;
	int taban;
	printf("Tabani Giriniz:");
	scanf("%d", &taban);
	if(taban==16){
        char onaltilik[32]={0};
    int  sonuc,i;
    int  count;
    int  digit;

    printf("Bir Sayi Giriniz: ");
    scanf("%s",&onaltilik);

    count=0;
    sonuc=0;
    for(i=(strlen(onaltilik)-1);i>=0;i--)
    {
        switch(onaltilik[i])
        {
            case 'A':
                digit=10; break;
            case 'B':
                digit=11; break;
            case 'C':
                digit=12; break;
            case 'D':
                digit=13; break;
            case 'E':
                digit=14; break;
            case 'F':
                digit=15; break;
            default:
                digit=onaltilik[i]-0x30;
        }
        sonuc= sonuc+ (digit)*pow((double)16,(double)count);
        count++;
    }

    printf("Sonuc: %d",sonuc);
    return 0;
	}
	else if(taban>=2 && taban<=9)
	{
	printf("Bir Sayi Giriniz:");
	scanf("%d", &sayi);
	int gecici;
	gecici = log10(sayi);
    int temp = gecici;
	int dizi[gecici];
	int a ;

	for (int i = 0; i <= gecici; i++) {

        a = pow(10,temp);
        dizi[i]  = sayi / a;
		sayi = sayi % a;
		temp--;
	}
	int sonuc = 0,temp2;
	int count=0;
	for(int i=gecici; i>=0; i--)
	{
	    temp2 = pow(taban,i);
	    sonuc = sonuc + dizi[count]*temp2;
	    count++;
	}
	printf("sonuc = %d",sonuc);
}else{
 printf("Bu tabanda bir sayi donusturulemez.");
}
}
int main(){
	onluk();
}
