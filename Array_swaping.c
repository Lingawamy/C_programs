#include<stdio.h>
#include<stdint.h>
void fun1(uint8_t *parr1,uint8_t *parr2, uint8_t len);
void main()
{
 uint8_t s1[]={1,2,3,4,5},s2[]={6,7,8,9,10},i,len;

len=sizeof(s1); 
printf("before swaping\n");
 printf("s1 = \t");
 for(i=0;i<len;i++)
 {
 printf("%d\t",*(s1+i));
 }
 printf("\n");
  printf("s2 = \t");
 for(i=0;i<len;i++)
 {
 printf("%d\t",*(s2+i));
 }
printf("\nafter swaping\n");
 fun1(s1,s2,len);
 
} 
 void fun1(uint8_t *parr1,uint8_t *parr2, uint8_t len)
 {
 uint8_t i;
 for(i=0;i<len;i++)
 {
 uint8_t temp1,temp2;
 temp1=*(parr1+i);
 temp2=*(parr2+i);
 
 *(parr1+i)=temp2;
 *(parr2+i)=temp1;
 }
 printf("s1 = \t");
 for(i=0;i<len;i++)
 {
 printf("%d\t",*(parr1+i));
 }
 printf("\n");
  printf("s1 = \t");
 for(i=0;i<len;i++)
 {
 printf("%d\t",*(parr2+i));
 }
 }
