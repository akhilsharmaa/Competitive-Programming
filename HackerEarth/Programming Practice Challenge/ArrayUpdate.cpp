#include <cstdio>

int main()
{
   int no_of_elements, element_i;
   scanf("%d", &no_of_elements);

   int sum = 0;
   for(int i = 1; i <= no_of_elements; i++)
   {
       scanf("%d", &element_i);
       sum += element_i;
   }

   int x = sum/no_of_elements + 1 ;

   printf("%d\n", x);

   return 0;
}
