#include<stdio.h>
void input_string(char *a){
printf("enter the string\n");
scanf("%s",a);
}
int str_reverse(char *a){
  int m=0;
  for(int i=0;a[i]!='\0';i++){
    m=m+1;
    }
  return m;
  }
void output(char *a,char reverse){
  printf("the reverse of the string is:\n");
  for(int i=reverse-1;i>=0;i--)
    printf("%c",a[i]);
  }
int main(){
  char a[100];
  int b;
  input_string(a);
 b = str_reverse(a);
  output(a,b);
  return 0;
  
}
  
     

