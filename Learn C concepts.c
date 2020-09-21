// // // // // // /******************************************************************************

// // // // // //                             Online C Compiler.
// // // // // //                 Code, Compile, Run and Debug C program online.
// // // // // // Write your code in this editor and press "Run" button to compile and execute it.

// // // // // // *******************************************************************************/

// // // // // // // #include <stdio.h>

// // // // // // // int main()
// // // // // // // {
// // // // // // //     printf("Hello\n World");

// // // // // // //     return 0;
// // // // // // // }
// // // // // // // #include<stdio.h>
// // // // // // // for printing integer we have to write %d and comma variable
// // // // // // // int main()
// // // // // // //     {
// // // // // // //         int a =7;
// // // // // // //         float b =8.9;
// // // // // // //         char c = 't';
// // // // // // //         printf("Hello %d",a);
// // // // // // //         return 0;
// // // // // // //     }
// // // // // // // for printing float
// // // // // // // #include <stdio.h>

// // // // // // //  int main()
// // // // // // //  {
// // // // // // //      int a = 12;
// // // // // // //      float b =3.4;
// // // // // // //      char c ='f';
// // // // // // //      printf("hello %f",b);
// // // // // // //      return 0;
// // // // // // //  }
// // // // // // // for printing char
// // // // // // // // #include <stdio.h>

// // // // // // // //  int main (){
// // // // // // // //      int a = 8;
// // // // // // // //      float b= 8.90;
// // // // // // // //      char c = 'f';
// // // // // // // //      printf("hello %c",c);

// // // // // // // //  }
// // // // // // #include<stdio.h>
// // // // // // int
// // // // // // main ()
// // // // // // {
// // // // // //   int a = 12;
// // // // // //   unsigned short integer = 8;    //2 to 4 bytes 
// // // // // //   long integer1 = 8;             // 4 bytes 
// // // // // //   short integer2 = 8;            //2 bytes

// // // // // //   float b = 2.12;                //; 4 bytes - 6 decimal  precision
// // // // // //   double myfloat1 = 756.45;      // 8 bytes - 15 decimal precision
// // // // // //   long double myfloat2 = 7.45747;        // 10n bytes - 19 decimal precision
// // // // // //   char c = 'H';                  //1 byte
// // // // // // printf("the size taken by int is %d\n",sizeof(int));
// // // // // // printf("the size taken by unsigned int is %d\n", sizeof(unsigned int));
// // // // // // printf("the size taken by float is %d\n", sizeof(float));
// // // // // // printf("the size taken by doublefloat is %d\n", sizeof(double));
// // // // // // printf("the size taken by long doublefloat is %d\n", sizeof(long double));
// // // // // // printf("the size taken by char is %d\n", sizeof(char));

// // // // // //   printf ("hello %d", a);
// // // // // //   return 0;
// // // // // // }
// // // // // // ********RULES FOR CREATING VARIABLES*******************

// // // // // #include<stdio.h>

// // // // // int main(){

// // // // // int hritik;//this is variable declaration//

// // // // // hritik= 56;  //this is variable intialization//
// // // // // char five = 5; //this is variable intialization and declarartion//
// // // // // const int i =8;
// // // // // // i=2;
// // // // // hritik=56;
// // // // // printf("\n\n****variable declaration***");


// // // // // return 0;
// // // // // }

// // // // // *****types of operators ******
// // // #include<stdio.h>

// // // int main()
// // // {
// // // //     // ARITHMETIC OPERATORS 
// // // //     // RELATIONAL OPERATORS
// // // //     // LOGICAL OPERATORS
// // // //     // BITWISE OPRATORS 
// // // //     // ASSIGTNMENT OPRATORS
// // // //     // MISC OPERATORS

// // // //     // // ARITHMETIC OPERATORS--------------
// // // //     // int a= 6 , b=5, c=3;
// // // //     // printf(" the sum of a and  b is  %d\n", a+b);
// // // //     // printf(" the difference of a and  b is  %d\n", a-b);
// // // //     // printf(" the multiplicationof a and  b is  %d\n", a*b);
// // // //     // printf(" the division of a and  b is  %d\n", a/b);
// // // //     // printf(" the modulos of a and  b is  %d\n", a%b);
// // // //     // printf(" the post increment of a is %d\n", a++);
// // // //     // printf(" the post decrement of a is  %d\n", a--);
// // // //     // printf(" the pre increment of a is   %d\n", ++a);
// // // //     // printf(" the  pre decrement of a  is  %d\n", --a); 

// // // // //     //RELATIONAL OPERATORS//
// // // // //   int hritik=5 ,lucifer=4;
// // // // //     printf("   hritik equal to lucifer %d\n" ,hritik==lucifer);
// // // // //     printf("  hritik equal to lucifer %d\n",hritik!=lucifer);
// // // // //     printf("  hritik is  greater than lucifer %d\n",hritik>lucifer);
// // // // // printf("  hritik is less than lucifer %d\n",hritik<lucifer);
// // // // // printf("  hritik greater than or equal to lucifer %d\n",hritik>=lucifer);
// // // // // printf("  hritik less than or equal to lucifer %d\n",hritik<=lucifer);

// // // //   // LOGICAL OPERATORS// use for logical oprations
// // // // //   int h= 9, j=5;

// // // // //  printf("the logical OPERATORSn returned %d\n",h&&j);
// // // // //   printf("the logical OPERATORSn returned %d\n",h||j);
// // // // //   printf("the logical OPERATORSn returned %d\n",!h);
// // // // //   printf("the logical OPERATORSn returned %d\n",!j);

// // // //   // BITWISE OPERATORS//
// // // // //   a = 60 b= 70
// // // // //   a=002001010
// // // // //   b=0001000
// // // // //   result
// // // //   int a = 60, b=14;

// // // //   printf("the BITWISE OPERATORS returned %d\n",a&b);
// // // //   printf("the BITWISE OPERATORS returned %d\n",a|b);
// // // //   printf("the BITWISE OPERATORS returned %d\n",a^b);
// // // //   printf("the BITWISE OPERATORS returned %d\n",~b);
// // // //   printf("the BITWISE OPERATORS returned %d\n",a<<b);
// // // //   printf("the BITWISE OPERATORS returned %d\n",a>>b);

// // // //ASSIGTNMENT OPERATORS//
// // // // =, +=, *=,%=,etc
// // // // int a= 9;
// // // // a+=9;
// // // // printf("a is %d\n ",a);


// // // //MISC OPERATORS--  &-ampersant (gives address), *, ?:
// // //     return 0;
// // // }

// // #include<stdio.h>
// //  int main()
// //  {
// //      printf(" taking input from user in const");
// //      int hritikinput;
// //      printf("\n please enter the value of hritikinput");
// //      scanf("%d , &hritikinput");
// //      printf("\n you entered %d as hritikinput", hritikinput);
// //      return 0;
// //  }

// // #include<stdio.h>

// // int main()

// // {
// //     int num1, num2;
// //     scanf("%d", &num1);
// //     scanf("%d", &num2);
// //     printf(" \n num1/num2 is %f", (float) num1/num2);

// //     return 0;
// // }

// // #include<stdio.h>

// // int main ()
// // {
// //   // ************DECISION MAKING IN C**********

// //   // **CONDITIONAL STATEMENT***
// //   int age;
// //   printf ("enter your age\n");
// //   scanf("%d", &age);
// // if(age<18)
// // {
// //     printf(" you cant drive you are underage");
// // }
// // else
// // { 
// //   printf(" you can drive");
       
// //   }


// // return 0;
// // }


// // //loop in c
// #include <stdio.h>

// int main() {
//     int index = 0;
//     int j=0;
//     while(index<10)
//     {
//     printf("%d\n",index);
//         index++;
//     }
//     for( j=0; j<20; j++ )
//     {
//         printf("%d\n",j);
//     }
//     do
//     {
       
//     printf("do while loop is running");    
//     }
//     while(j>678);
//     return 0;
//  }

















