#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int tekrarsayi=0,temp=0,tkredensayi=0,j,i,l=0;
	int m,a;
	
	printf("dizinin satir sayisi: ");
	scanf("%d",&m);
	
	int dizi[m];
	srand(time(NULL));
	for(i=0;i<m;i++)
	{
		dizi[i]=rand()%m;
	}
	for(i=0;i<m;i++)
	{
		printf("%5d",dizi[i]);
	}
	
	for(i=0;i<m;i++)
	{
		l=0;
		for(j=0;j<m;j++){
			l++;
		}
	
	if(l>temp)
	{
		temp=l;
		tkredensayi=dizi[i];
	}
}

	printf("\n %d",tkredensayi);
	
	return 0;
}
