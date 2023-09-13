// write a program to find square root of 1 number that is given by user by sina function 

// #include <stdio.h>
// #include <math.h>

// int main (){
//     int a ;
//     int b;
//     printf("Enter any number");
//     scanf("%d",&a);
//     b= sqrt(a);
//     printf("The square root of the entered number is %d",b);
//     return 0;
// }



// write a program to calculate area of traingle if height and base are given if 3 side is only given 


// #include <stdio.h>
// #include <math.h>

// int main (){
//      int breath =10;
//      int height=29;
//      int area;
    
//     scanf("%d",&area);
     
//      area= (breath*height)/2;
//      printf("The area of traingel is %d",area);
// }


// // wap to calculate area and volume of sphere 
// #include <stdio.h>
// #define PI 3.14;
// int main (){
//     int r, area , volume;
//     prinf("Enter the radius");
//     scanf("%d",r);
//     area= 4*PI*r*r;
//     area = ("The value is 10007")
// }

// #include <stdio.h>
// int main(){
//     int a = 10;
//     double b= 63.3;
//     int sum = (int)(a+b);
//     printf("The reselut is %d",sum);
// }


// #include <stdio.h>
// int main (){
//     int a= 10;
//     double b = 33;
//     double sum= a+b;
//     printf("The result is %2f",sum);
// }

// #include <stdio.h>

// int main(){
//     int a ,b;
//     prinf("Enter two numbers");
//     scanf("%d","%d,");
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int  day, month , year;
//     printf("Enter your dob(day,month,year)");
//     scanf("%d/%d/%d",&day,&month,&year);
//     printf('Ypur date of birth is %d day, %d month, %d year');
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     char name[20];
//     printf("Enter your name");
//     scanf("%19s",&name);
//     printf("Your name is %s", name);
// }

// #include <stdio.h>

// int main(){
//     int a,b,c;
//     printf("Enter any there number");
//     scanf("%d%*d%d", &a,&b,&c);
//     printf("THe number given are %d, %d,%d" , a,b,c);
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     char string[100];
//     printf("Enter any string");
//     scanf("%[^\n]",&string);
//     printf("THe given string is %s",string);
//     return 0;
    
// }





// #include <stdio.h>
// #include <conio.h>

// int main(){
//     char ch;
//     printf("Enter any value:");
//     ch= getche();
//     printf("Given character is :");
//     putchar(ch);
//     return 0;
// }



// #include  <stdio.h>

// int main (){
//     char name[20];
//     printf('Enter your name :');
//     gets(name);
//     printf("The given name is :");
//     puts(name);
//     return 0;
// }


// #include <stdio.h>

// int main (){
//     int a= 66;
//     int b = 33;
//     int mul, div,add,sub ;
//     mul= a*b;
//    div= a/b;
//     add= a+b;
//    sub= a-b;
//     printf(" The result of a multiply b is %d\n",mul);
//     printf(" The result of a divide b is %d\n",div);
//     printf(" The result of a additional b is %d\n",add);
//     printf(" The result of a subtraction b is %d\n",sub);

// }

// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter any two number:");
//     scanf("%d %d",&a,&b);
//     if(a>b){
//         printf("%d is greatest",a);
//     }
//     if(b>a){
//         printf("%d is greatest");
//     }
// }



// #include <stdio.h>
// int main (){
//     int a , b, c;
//     printf("Enter any two numbers");
//     scanf("%d %d %d , &a, &b, &c");
//     // if(a>b){
//     //     if(a>c){
//     //         printf("%d is greatest",a);
//     //     }
//     // }else{
//     //     printf("%d is greatest");
//     //     return 0;
//     if(a>b){
//         if(a>c){
//             printf("%d is greatest",a);

//         }else{
//             printf("%d is greatest",c);
//         }

//     }
//     else if(b>c){
//         printf("%d is greatest",b);
//     }else{
//         printf("%d yogesh is hero",c);
//     }
//     return 0;
//     }



#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks",marks);
    scanf("%d",&marks);
    if(marks>=90){
     printf("the grade of this student is A",marks);
    }
    if(marks>=70){
     printf("the grade of this student is b",marks);
    }
    if(marks>=60){
     printf("the grade of this student is c",marks);
    }
    if(marks>=50){
     printf("the grade of this student is d",marks);
    }
    return 0;
}
   