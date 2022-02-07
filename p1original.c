// #include<stdio.h>
// void input(float base,float height)
// {
// printf(" enter the base and height if triangle\n");
// scanf("%f%f",&base,&height);
// }
// void find_area(float base,float height,float *area){
// *area=(base*height)/2.0;
// }
// void output(float base,float height,float area){
//   printf("the area of triangle is %f\n",&area);
// }
// int main(){
//   int n1,n2,n3;
// input(n1,n2);
// find_area(n1,n2,&n3);
// output(n1,n2,n3);
// return n1,n2,n3;
// }
#include<stdio.h>
int main()
{
  float base, height, area;
  printf("enter the length of base of triangle\n");
  scanf("%f",&base);
  printf("enter the length of height of triangle\n");
  scanf("%f",&height);
  if(base == 0 || height ==0)
  {
    printf("invalid input\n");
  }
  else
  {
   area = (base*height)/2.0;
   printf("area of triangle is: %0.2f\n", area);  
  }
  return 0;
}