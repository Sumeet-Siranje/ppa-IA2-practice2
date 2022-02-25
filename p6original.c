#include<stdio.h>
void input_string(char *a){
printf("enter the string\n");
scanf("%s",a);
}
int string_length(char *s){
  int i;
  for(i=0;s[i]!='\0';i++)
    return i;  
}
char string_copy(char *d,char *s){
  for(int i=0;s[i]!='\0';i++)
    d[i]=s[i];
  return *d;
}
char str_rev(char *s,char *t){
  int length = string_length(s);
  length-=1;
  for(int i=0;i<length/2;i++){
    t=s[i];
    s[i]=s[length-i];
    s[length-i]=t;
  }
  return *t;
}
void output(char *s,char *r)
{
  printf("the reverse of %s is %s\n",s,r);
}
int main(){
  char s[100];
  char r[100];
  input_string(s);
  char original[100];
  string_copy(original,s);
  r==str_rev(s);
  output(original,r);
  return 0;
  }