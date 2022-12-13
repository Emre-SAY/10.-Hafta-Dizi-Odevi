#include<stdio.h>
int dizi1[5]={};
int dizi2[5]={};
int f1(float vo,float fo,int v,int f){
	for(v=0;v<5;v++)
    vo+=dizi1[v];
    vo=vo/5;

    printf("Vize Ortalama %.2f\n",vo);

	for(f=0;f<5;f++)
    fo+=dizi2[f];
    fo=fo/5;
    printf("Final Ortalama %.2f",fo);
}
int main(){
	int v,f,a,b;
	float vo,fo;
	printf("5 adet vize notu giriniz\n");
	for(a=0;a<5;a++){
	
	scanf("%d",&dizi1[a]);
    }
    printf("5 adet final notu giriniz\n");
	for(b=0;b<5;b++){
	
	scanf("%d",&dizi2[b]);
    }
    
	f1(v,f,vo,fo);
	return 0;
	
}