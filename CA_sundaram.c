#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<math.h>
#define N 10
typedef struct
{
int pro_id, at, bt, pt;
int q, ready;
}process_structure;
int Queue(int t1)
{
if
(t1==0||t1==1||t1==2||t1==3)
{
return 1;
}
else
{
return 2;
}}
int main()
{
int limit, count, tp, time, r, y;
process_structure temp;
printf("Enter Total Number of Processes:\t");
scanf("%d", &limit);
process_structure process[limit];

