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
for(count = 0; count < limit; count++)
{
printf("\nProcess ID:\t");
scanf("%d", &process[count].pro_id);
printf("Arrival Time:\t");
scanf("%d", &process[count].at);
printf("Burst Time:\t");
scanf("%d", &process[count].bt);
printf("Process pt:\t");
scanf("%d", &process[count].pt);
tp = process[count].pt;
process[count].q = Queue(tp);
process[count].ready = 0;
}
time = process[0].bt;
for(y = 0; y < limit; y++)
{
for(count = y; count < limit; count++)
{
if(process[count].at < time)
{
process[count].ready = 1;
}}
for(count = y; count < limit - 1; count++)
{
for(r = count + 1; r < limit; r++)
{
if(process[count].ready == 1 && process[r].ready == 1)
{
if(process[count].q == 2 && process[r].q == 1)
{
temp = process[count];
process[count] = process[r];

