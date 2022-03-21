#include<stdio.h>
int input_array_size(){
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n]){
  int i;
  printf("enter %d numbers:\n",n);
  for("%d",&a[i]);
  {
    scanf("%d",&a[i]);
  }
}
int sum_composite(int n,int a[n]){
  int count 0;
  for(int i=0;i<n;i++){
    if(a[i]==2){
      continue;
    }
    else if(a[i]%2==0){
      count =count + a[i];
    }
  }
  return count;
}