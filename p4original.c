#include<stdio.h>
int input_array_size(){
  int n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n]){
  for(int i=0;i<n;i++){
    printf("enter the number\n");
    scanf("%d",&a[i]);
  }  
}
int is_composite(int x){
  int value=0;
  for(int i=1;i<=x/2;i++){
    if(x%i==0)
      value = value +1;
    else
      value = value;
  }
  return value;
}
int sum_composite(int n,int a[n]){
int i,sum=0;
 for (i=0;i<n;i++)
 {
   if(is_composite(a[i])>1)
     sum=sum + a[i];
 }
  return sum;
  }
void output(int sum_composite){
  printf("sum of composite no is %d\n",sum_composite);
}
int main(){
  int n,i,a[i],sum;
  n=input_array_size()
  input_array(n,a);
  sum = sum_composite(n,a);
  output(sum);
  return 0;
}