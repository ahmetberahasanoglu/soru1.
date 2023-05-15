#include <stdio.h>
#include <stdlib.h>

void elemanara(int dizi[],int boyut, int eleman){
	int kontrol;
	for (kontrol=0; kontrol<boyut;kontrol++){
		if(dizi[kontrol]==eleman){
			printf("eleman dizide var");
			return;
		}
	}
	printf("eleman dizide degil");
}
int main(int argc, char *argv[]) {
	int i,index,arananeleman;//i degiskenini "boyut" olarak kullandim kod kalabalýk olmasýn diye deðiþtirmedim
	printf("Dizinin boyutu kactir?");
	scanf("%d",&i);
	int dizi[i];
	for (index=0;index<i;index++){
		printf("Dizinin %d. elemani kactir?",index+1);
		scanf("%d",&dizi[index]);
	}
	printf("dizide aradiginiz eleman hangisidir?");
	scanf("%d",&arananeleman);
	
	elemanara(dizi,i,arananeleman);
	
	
	return 0;
}
