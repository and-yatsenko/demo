#include <stdio.h>

 
main() 
{
   float a, b;		
   char znak;
   while (znak != '0') 
   {
      printf("Print znak, please \n");
      scanf("%c%*c", &znak);
      if (znak == '0') 
	  { 
	  break; 
	  }
        if (znak == '+' || znak == '-' || znak == '*' || znak == '/') 
	   {
		 printf("Print first number\n");
         scanf("%f%*c", &a);
         printf("print second number\n");
         scanf("%f%*c", &b);
         switch (znak) 	 
		 {
            case '+':
               printf("%.2f\n", a+b);
               break;
            case '-':
               printf("%.2f\n", a-b);
               break;
            case '*':
               printf("%.2f\n", a*b);
               break;
            case '/':
               if (b != 0) printf("%.2f\n", a/b);
               else printf("/0 \n");
         }
      }
      else 
      {
	  printf("Print correct znak, please \n\n");	  
	  }
   }
}
