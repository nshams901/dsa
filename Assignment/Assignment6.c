#include<stdio.h>


// 1
// int main(){
//     int n = 13, sum = 0;
//     for(int i = 1; i <= n; i++){
//         sum +=  i;
//     }
//     printf("Sum of %d natural number is: %d", n, sum);
// }

// 2
// int main(){
//     int n = 4;
//     printf("%d", n * (n+1) );
// }

// 3
// int main(){
//     int n = 6;
//     printf("%d", n * n);
// }


// 4
// int main(){
//     int n =8;
//     int sum = (n * ( n + 1) * ( 2*n + 1)) / 6;
//     printf("%d", sum);
// }

// 5
// int main(){
//     int n = 5;
//     int cal = (n * (n + 1)) / 2;
//     int sum = cal * cal;
//     printf("%d", sum);
// }


// 6
// int main(){
//     int n = 5, fact= 1;
//     for(int i = 1; i <=n; i++){
//         fact *= i;
//     }
//     printf("Factorial of %d is : %d", n, fact);
// }


// 7
// int main(){
//     int num = 87654, count = 0;
//     int temp = num;
//     while(temp){
//         count ++;
//         temp /= 10;
//     }
//     printf("%d has %d digit", num, count);
// }


// 8
// int main(){
//     int number = 2;
//     int i;
//     for( i = 2; i < number; i++){
//         if( number == 2) printf("2 is a prime number");
//         else if( number % i == 0)
//             break;
//     }
//     if( i == number ){
//         printf("%d is a prime number", number);
//     } else printf("%d is a not prime number", number);
// }