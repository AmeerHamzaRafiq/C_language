#include<stdio.h>

main()
{
int age;
char gender;

printf("Please enter your gender (M/m for Male):");
scanf("%c",&gender);

printf("pleas enter your age:");
scanf("%d",&age);

if (gender=='m' || gender=='M' && age>=18)
{
   printf("congraculation for this job🎉");

}else{
    printf("sorry not eligible for this job");
}



}
