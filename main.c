#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
/*
    int dizi[]={5,2,999,9,8,18};
    float sum;
    int i;
    for(i=0;i<6;i++){

        sum+=dizi[i];
    }
    sum=sum/i;
    printf("ortalamasi %f dir",sum);



    return 0;


int dizi[50];
int i,a;
for(i=0;i<=50;i++){
dizi[i]=i*i;
printf("dizi[%d]:%d\n",i,dizi[i]);


}


int i,s,zar,dizi[7]={0,0,0,0,0,0,0};
srand(time(NULL));
printf("kac kez zar atmak istersiniz?\n");
scanf("%d",&s);
for(i=1;i<=s;i++){
zar=rand()%6+1;
dizi[zar]++;
}
printf("zar numarasi\t kac defa geldi\n");
for(i=1;i<7;i++){
printf("%d\t\t%d\n",i,dizi[i]);
}
*/
// kişi dizi değerlerini kendi olulturup içinden seçeceği dizi elemanlarını ekrana yazdıran algoritma



int dizi[999]={0},i=0,k=0,j=0,h=0,q=0,y=0,deger=0;
 do {

printf("Deger okumak icin 1`i tuslayiniz:\nDeger girmek icin 2`yi tuslayiniz:\nCikmak icin -1`i tuslayiniz;\n");
scanf("%d",&deger);

 if(deger==1){
        printf("Hangi degeri okumak istiyorsunuz?\n");
        scanf("%d",&k);
        printf("Okumak istediginiz deger:%d\n\n",dizi[k]);
        printf("En basa donmek icin=1\nCikmak icin=-1\n");
        scanf("%d",&j);
        if(j==1){
            continue;
        }
        if(j==-1){
            break;
       }
    }

 if(deger==2){
    printf("Hangi dizi numarasinda islem yapmak istiyorsunuz?\n");
    scanf("%d",&h);
    printf("Dizi icine girilecek olan degeri tuslayiniz:\n\n");
    scanf("%d",&i);
    dizi[h]=i;
    printf("Islem basarili,deger atandi.\n");
    printf("Ana sayfa icin:1\nCikmak icin:-1\n");
    scanf("%d",&q);
    if(q==1){
        continue;
    }
if(q==-1)
        break;
else{
    while(q!=1 && q!=-1){
        printf("LUTFEN GECERLI BIR DEGER GIRINIZ!\n");
        scanf("%d",&q);
       }
     }
   }
 }
while(j!=-1);





/*







int x;
scanf("%d",&x);
int i ,j,k;
int y = x;

for (i=0 ;x>i;i++){

    for (k=0;k<i;k++){
        printf(" ");
    }
    for(j=0;j<y;j++){

       printf("*");
      }

    printf("\n");
    y--;
    }




int i,x,j;

scanf("%d",&x);
for(i=1;i<=x;i++){
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");


}



int x;
scanf("%d",&x);
int i ,j,k;

for (i=0 ;x>i;i++){

    for (k=0;k<i;k++){
        printf(" ");
    }
    for(j=0;j<(x-i);j++){

       printf("*");
      }

    printf("\n");

    }

int i,j,k,x;

scanf("%d",&x);


for(i=1;i<=x/2;i++){
    for(j=1;j<=(x/2)-i;j++){
        printf(" ");
    }
    for(k=1;k<=i*2;k++){
        printf("*");

    }
    printf("\n");

}
for(i=0;i<x/2;i++){
    for(j=0;j<i;j++){
        printf(" ");
    }
    for(k=0;k<x-(2*i);k++){
        printf("*");
    }
    printf("\n");

}

int i,j;


int dizi[3][3];
int dizi2[2][2]={{2,80},{5,15}};
int toplam[2][2];

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&dizi[j][i]);
    }
}



for(i=0;i<3;i++){
    for(j=0;j<3;j++){

        printf("%d  ",dizi[i][j]);
    }
    printf("\n");
}


    int dizi[10] = {190000, 2, 3, 4, 10000.8, 6, 7, 8, 9, 10};
    int i;
    int temp = dizi[0];

for( i=0;i<10;i++){
    if(dizi[i]>temp){
        temp = dizi[i];
    }
}
printf("%d",temp);


int i,j,k,x;

scanf("%d",&x);

for(i=0;i<x;i++){
    for(j=0;j<x-i;j++){
        printf(" ");
    }
    for(k=0;k<x;k++){
        printf("*");
    } printf("\n");
}



int x,i,j,k;
 int sayac=0;
scanf("%d",&x);
for(i=0;i<=x;i++){


    for(j=0;j<i;j++){
        sayac++;
        printf("%d ",sayac);

    }
    printf("\n");
}



char dizi1[20]="deneme";
char dizi2[5]={'a','2','c'};
char ogrencibilgi[3][100]={"ali yılmaz","veli kaya","xxx yyy"};
char string[20];
printf("ad soyad giriniz");
gets(string);// veri girişi
puts(string);// ekrana gösterme
int uzunluk = strlen(string);
printf("dizinin uzunluğu %d kadardır",uzunluk);


int dizi[99],i;

for(i=0;i<100;i++){
    dizi[99]+=i*i;
}
for(i=0;i<99;i++){
    printf("%d\n",dizi[i]);
}

*/









return 0;
}









