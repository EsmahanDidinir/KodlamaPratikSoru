#include <stdio.h>

int main()
{
	int max, i;
	int dizi[]= {-1,5,12,13,6};
    max = dizi[i];
    for( i=1 ; i<5 ; i++){
        if(dizi[i] > max)
        	max = dizi[i];
    }
    

    printf("Dizideki en buyuk sayi : %d", max);
}
