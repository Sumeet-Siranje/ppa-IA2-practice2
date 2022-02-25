#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;

Triangle input_triangle()
{
  Triangle t;
  printf("enter the base and altitude of triangle you want to find area of\n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area = ((t->base) * (t->altitude))/2 ;
}
void output(Triangle t)
{
  printf("%.1f is Area of given triangle with base=%.1f and altitude=%.1f",t.area,t.base,t.altitude);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}