#include<stdio.h>
#include<math.h>

float hipoten(int , int);

int main()
{
    int a,b;
    printf("dik kenarlari giriniz:\n");   scanf("%d%d",&a,&b);
    hipoten(a ,b);

return 0;
}

float hipoten(int a , int b)
{
    float sonuc;
    sonuc=pow((pow(a,2)+ pow(b,2)),1.0/2);//ya da pow kullanırsın..
    printf("hipotenus uzunlugu %.4f dir..",sonuc);
return sonuc;
}
