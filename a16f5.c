#include<stdio.h>
#include"simpio.h"
#include<stdlib.h>

#define STANDAR 50

void populate(int s,int table[]);
void printArr(int s,int table[]);
int checkTable(int s,int table[],int pos[],int num);

int main ()
{
    int table [STANDAR];
    int num;
    int pos[STANDAR];
    int find;




    populate(STANDAR,table);

    printArr(STANDAR,table);

    printf("-------------------\n");
    printf("Dose arithmo apo to 0 ews to 9:");
    num=GetInteger();

    find=checkTable(STANDAR,table,pos,num);

    printf("-------------------\n");
    printf("o arithmos %d emfanistike %d fores.\n ",num,find);
    printf("stis theseis\n");
    printArr(find,pos);
    printf("-------------------\n");


}
void populate(int s,int table[])
{
    int i ;
    for(i=0;i<s;i++)
        table[i]=rand()%10 ;
}
void printArr(int s,int table[])
{
    int i;
    for(i=0;i<s;i++)
    {
        printf(" %d ",table[i]);
    }
    printf("\n");
}
int checkTable(int s,int table[],int pos[],int num)
{
    int i,sum,n;
    sum=0;
    n=0;
    for(i=0;i<s;i++)
    {
        if (table[i]==num)
           {
            sum++;
            pos[n]=i;
            n++;
           }
    }
    return sum;
}
