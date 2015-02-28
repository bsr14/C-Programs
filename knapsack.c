#include<stdio.h>
#include<conio.h>

void main() {

float w[20], p[20], capacity, s[20],x[20], temp,totalprofit=0;
int obj,i,j;
printf("Enter the no. of objects:");
scanf("%d", &obj);
printf("\nEnter the weights and profits of each object");
for (i = 0; i < obj; i++)
{
scanf("%f %f", &w[i], &p[i]);
   }
printf("\nEnter the capacity of knapsack");
   scanf("%f",&capacity);
for (i = 0; i < obj; i++)
{
s[i] = p[i] / w[i];
   }
for (i = 0;i<obj;i++)
{
for (j = i + 1; j<obj;j++)
{
if (s[i] < s[j])
{
temp = s[j];
 s[j ] = s[i];
 s[i] = temp;
 temp = w[j];
 w[j] = w[i];
 w[i] = temp;
 temp =p[j];
 p[j] =p[i];
 p[i] =temp;
 }
 }
 }
   for (i = 0; i < obj; i++)
  x[i] = 0.0;
 for (i = 0; i < obj; i++) {
 if (w[i] > capacity)
 break;
 else {
 x[i] = 1.0;
 totalprofit = totalprofit + p[i];
 capacity = capacity - w[i];
 }
   }
 if (i <obj)
 x[i] = capacity / w[i];
totalprofit = totalprofit + (x[i] * p[i]);
printf("\n result value of weight is:- ");
for (i = 0; i < obj; i++)
printf("%f\t", x[i]);
printf("\nMaximum profit is:%f", totalprofit);

getch();
}
