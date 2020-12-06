#include <stdio.h>
#include <stdlib.h>
#include<math.h>



void task1(){
printf("vvedite god mesyac i den rozhdeniya dvuh chelovek\n");
long year1,year2,month1,month2,day1,day2;
scanf("%ld%ld%ld%ld%ld%ld",&year1,&month1,&day1,&year2,&month2,&day2);
long old1=year1*10000+month1*100+day1  ,old2=year2*10000+month2*100+day2;
if (old1<old2)
    {printf("perviy starsche\n");}
else if(old2<old1)
    {printf("vtoroi starsche\n");}
else
    printf("odnogo vozrasta\n");

}

void task2(){
double x,y;
printf("vvedite koordinati tochki\n");
scanf("%lf%lf",&x,&y);


if (((fabs(x)<2.0 || fabs(x-2)<1e-15)&&(fabs(y)<2.0 || fabs(y-2)<1e-15)) && !(fabs(x)+fabs(y)<2))
    printf("v pervoi oblasti\n");
else
    printf("ne v pervoi oblasti\n");


if (((fabs(x)<2.0 || fabs(x-2)<1e-15)&&(fabs(y)<2.0 || fabs(y-2)<1e-15)) && !((x>0 && y>0) || (x*x+y*y<2)) )
    printf("vo vtoroi oblasti\n");
else
    printf("ne vo vtoroi oblasti\n");


}


void task3(){
printf("vvedite chislo\n");
int k;
scanf("%d",&k);
int ans;
if (k<0)
    ans=0;
else{
    ans=-((k%2)*2-1);
}
printf("znachenie funkcii %d\n",ans);
}


void task4(){
printf("vvedite storoni dbuh treugolnikov(snazhala pervogo potom vtorogo)\n");
double x1,x2,y1,y2,z1,z2;
scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&z1,&x2,&y2,&z2);
//zyx

if (z1>y1){
    double temp=z1;
    z1=y1;
    y1=temp;
}
if (y1>x1){
    double temp=x1;
    x1=y1;
    y1=temp;
}
if (z1>y1){
    double temp=z1;
    z1=y1;
    y1=temp;
}
if (z2>y2){
    double temp=z2;
    z2=y2;
    y2=temp;
}
if (y2>x2){
    double temp=x2;
    x2=y2;
    y2=temp;
}
if (z2>y2){
    double temp=z2;
    z2=y2;
    y2=temp;
}

double k1=(double)x1/x2, k2=(double)y1/y2, k3=(double)z1/z2;

if (fabs(k1-k2)<1e-15 && fabs(k3-k2)<1e-15){
    printf("podobnie\n");
}
else{
    printf("ne podobnie\n");
}


//printf("%d %d %d %d %d %d",z1,y1,x1,z2,y2,x2);

}


void task5(){
printf("vvedite nomer goda\n");
int n;
scanf("%d",&n);
if (n%4==0 && (n%100 || (n%100==0 && n%400==0)) )
    printf("366 dnney\n");
else
    printf("365 dney\n");
}


void task6(){

printf("vvedite chislo (20-69)\n");
int n;
scanf("%d",&n);
int z1=n/10, z2=n%10;
switch (z1){

case (2):
printf("dvatcat ");
break;
case (3):
    printf("tridcat ");
    break;
case (4):
    printf("sorok ");
    break;
case(5):
    printf("pyatdesyat ");
    break;
case (6):
    printf("shestdesyat ");
    break;
}
switch (z2){

case (1):
    printf("odin god");
    break;
case (2):
    printf("dva goda");
    break;
case (3):
    printf("tri goda");
    break;
case(4):
    printf("chetyre goda");
    break;
case (5):
    printf("pyat let");
    break;
case (6):
    printf("shest let");
    break;
case(7):
    printf("sem let");
    break;
case(8):
    printf("vosem let");
    break;
case(9):
    printf("devyat let");
    break;
case (0):
    printf("let");
    break;

}



printf("\n");
}




int main()
{
    int request;
    while(1){
        printf("vvedite nomer zadachi(1-6) 0 dlya zaversheniya\n");
        scanf("%d",&request);
        if (request==1)
            task1();
        if (request==2)
            task2();
        if (request==3)
            task3();
        if (request==4)
            task4();
        if (request==5)
            task5();
        if (request==6)
            task6();
        if (request==0)
            return 0;
    }
}
