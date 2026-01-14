#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Ortalama_Hesapla(int sayi1, int sayi2){
    int i;
    int sum=0;
    int a=0;

    if(sayi1>sayi2){
        for(i=sayi2+1;i<sayi1;i++){
            if(i%3==0){
                sum+=i;
                a++;
            }
        }
    }
    else{
        for(i=sayi1+1;i<sayi2;i++){
            if(i%3==0){
                sum+=i;
                a++;
            }
        }
    }
    int ort=sum/a;
}


int main()
{
        printf("%d",Ortalama_Hesapla(1,7));

}
