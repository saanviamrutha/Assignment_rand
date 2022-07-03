#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double mean(char *str)
{
int i=0;
FILE *fp;
double x, temp=0.0;

fp = fopen(str,"r");
//get numbers from file
while(fscanf(fp,"%lf",&x)!=EOF)
{
//Count numbers in file
i=i+1;
//Add all numbers in file
temp = temp+x;
}
fclose(fp);
temp = temp/(i-1);
return temp;

}
//End function for calculating the mean of random numbers
double var(char *str)
{
int i=0;
FILE *fp;
double x, temp=0.0,c;
fp = fopen(str,"r");
//get numbers from file
c=mean(str);
while(fscanf(fp,"%lf",&x)!=EOF)
{
//Count numbers in file
i=i+1;
//Add all numbers in file
temp = temp+pow(x-c,2);
}
fclose(fp);
temp = temp/(i-1);
return temp;

}
//End function for calculating the mean of random numbers
int  main(void) //main function begins
{
 
//Uniform random numbers
//uniform("uni.dat", 1000000);

//Gaussian random numbers
//gaussian("gau.dat", 1000000);

//Mean of uniform
printf("%lf \n",mean("gau.dat"));
//Variance of uniform
printf("%lf \n",var("gau.dat"));
return 0;
}
