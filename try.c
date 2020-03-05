/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/*Write a c program to check given number is strong number or not*/
#include<stdio.h>
int main()
{
  int num,i,f,r,sum=0,temp;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\nEnter a number");
  scanf("%d",&num);
  temp=num;
  while(num){
      i=1,f=1;
      r=num%10;
      while(i<=r){
      f=f*i;
          i++;
      }
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      sum=sum+f;
      num=num/10;
  }
  if(sum==temp)
      printf("%d is a strong number",temp);
  else
      printf("%d is not a strong number",temp);
  return 0;
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
// done yep