/* Wrong code
#include<stdio.h>
int main()
{
int a,,c,d,e,f;
scanf("%d%d,&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=b/a;
printf("Addition=%f\n",c);
printf("Substaction=%d\n",d);
printf("Multiplication=%d\n",e);
printf("Division=%d\n",f);
}

/ Right code */

// #include<stdio.h>
// int main()
// {
// int a,c,d,e,f,b;
// scanf("%d %d",&a,&b);
// c=a+b;
// d=a-b;
// e=a*b;
// f=b/a;
// printf("Addition=%d\n",c);
// printf("Substaction=%d\n",d);
// printf("Multiplication=%d\n",e);
// printf("Division=%d\n",f);
// }

/* WRONG CODE
// II. #include<stdio.h>
// int main(
// {
// float KB;
// printf("Enter the size in Kilo Bytes:\n");
// scan("%d",&KB);
// printf("Size in Mega Bytes:%f\n",KB*0.001);
// printf("Size in Giga Bytes:%f\n",KB*0.000001);
// printf("Size in Tera Bytes:%f\n",KB*0.000000001);
  } */

//RIGHT CODE://
// int main()
// {
// float KB;
// printf("Enter the size in Kilo Bytes:\n");
// scanf("%f",&KB);
// printf("Size in Mega Bytes:%f\n",KB*0.001);
// printf("Size in Giga Bytes:%f\n",KB*0.000001);
// printf("Size in Tera Bytes:%f\n",KB*0.000000001);
// }

// WRONG CODE
// III. #include<stdio.h>
// int main()
// {
// float year;
// printf("Enter Year:");
// scanf("%d",&year);
// if((year%4!=0)||((year%400==0)||(year%100==0))){
// printf("The year is a leap year");
// }
// else{
// printf("The year is not a leap year");

//RIGHT CODE//

// #include<stdio.h>
// int main()
// {
// int  year;
// printf("Enter Year:");
// scanf("%d",&year);
// if((year%4==0)&& ((year%400!=0)||(year%100==0))){
// printf("The year is a leap year");
// }
// else{
// printf("The year is not a leap year");
// }
// }

//WRONG CODE//
// IV. #include<stdio.h>
// int main(){
// int num;
// printf("ENTER THE NUMBER : ");
// scanf("%d", %num);
// if(num<=0)
// if(num=!0){
// printf("NUMBER IS NEUTRAL");
// }
// else{
// printf("NUMBER IS NEGATIVE");
// }
// }
// else{
// print("NUMBER IS POSITIVE");
// }
// }

//RIGHT CODE//
#include<stdio.h>
int main(){
int num;
printf("ENTER THE NUMBER : ");
scanf("%d", &num);
if(num==0){
printf("NUMBER IS NEUTRAL");
}
else if(num<=0){
printf("NUMBER IS NEGATIVE");
}
else{
printf("NUMBER IS POSITIVE");
}
}