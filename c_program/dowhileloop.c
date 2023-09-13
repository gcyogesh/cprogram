// #include <stdio.h>
// #include<math.h>
// int main(){
//     int num ,rem, sum=0,temp;
//     printf("Enter the number to be checked");
//     scanf("%d",&num);
//     temp=num;
//     while(num!=0){
//         rem=num%10;
//         sum+=pow(rem,3);
//         num/=10;

//     }
//     if (temp==sum){
//         printf("The given number is armstrong");
//     else
//         printf("the given number is not armstrong");

//     }
//     return 0;
// }

// #include <stdio.h>
// int main (){
//     int n=1;
//     do{
//         printf("%d\t",n);
//         n++;
//     }while(n<=5);
//     return 0;
// }




// #include <stdio.h>
// int main(){
//     int fibonum,i=1,prevterm=0,nextterm=1,fiboterm;
//     printf("How many number of terms do you want to print: ");
//     scanf("%d", &fibonum);
//     printf("fibonancci series: ");
//     do{
//         printf("%d\t", prevterm);
//         fiboterm=prevterm+nextterm,
//         prevterm=nextterm;
//         nextterm=fiboterm;
//         i++;
//     }while(i<=fibonum);
//         return 0;
    
// }