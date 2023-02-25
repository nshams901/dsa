#include <stdio.h>
// 1
// int main(){
//     int num;
//     printf("Enter a number\n");
//     scanf("%d", &num);
//     if(num >= 0){
//         printf("%d is a positive number");
//     }else printf("%d is non-positive number", num);
// }

//2
// int main(){
//     int num;
//     printf("Enter a number");
//     scanf("%d", &num);
//     if( num % 5){
//         printf("%d is not divisible by 5", num);
//     }else
//         printf("%d is divisible by 5", num);
// }

//3
// int main(){
//     int num;
//     printf("Enter a number");
//     scanf("%d", &num);
//     if( num % 2){
//         printf("%d is a odd number", num);
//     } else printf("%d is a even number", &num);
// }


// 4
// int main(){
//     int num;
//     printf("Enter a number");
//     scanf("%d", &num);
//     if(num & 1){
//         printf("%d is a odd number", num);
//     } else printf("%d is a even number", &num);
// }

// 5
// int main(){
//     int num;
//     printf("Enter a number");
//     scanf("%d", &num);
//     int count = 0;
//     int temp = num;
//     while (temp)
//     {
//         count ++;
//         temp /= 10;
//         /* code */
//         if(count > 3){
//             break;
//         }
//     }
//     if(count == 3){
//         printf("%d is a 3 digit number", num);
//     }else printf("%d is not a 3 digit number", num);
// }


// 6
// int main(){
//     int num1, num2;
//     printf("Enter two numbers");
//     scanf("%d%d", &num1, &num2);
//     num1 >= num2 ? printf("%d",num1) : printf("%d",num2);
// }


// 10
// int main(){
//     int cost, sell;
//     printf("Enter cost price\n");
//     scanf("%d", &cost);
//     printf("Enter selling price\n");
//     scanf("%d", &sell);
//     if(sell - cost >= 0){
//         float p = (( sell - cost)* 100) / cost;
//         printf(" profit is %f percent ", p);
//     }else {
//         float p = (( cost - sell)* 100)/ cost;
//         printf("loss is %f percent", p);
//     }
// }

// 11
// int main(){
//     int phy, chem, math, bio, gk;
//     printf("Enter your marks obtained in each subject\n1.Physics: ");
//     scanf("%d", &phy);
//     printf("\n2.Chemistry: ");
//     scanf("%d", &chem);
//     printf("\n3.Math: ");
//     scanf("%d", &math);
//     printf("\n4.Biology: ");
//     scanf("%d", &bio);
//     printf("\n5.GK: ");
//     scanf("%d", &gk);
//     if(phy >= 33 && chem >=33 && math >= 33 && bio >=33 && gk >=33)
//         printf("You are pass");
//     else
//         printf("You are failed");
// }


// 12
// int main(){
//     char ch;
//     printf("Enter a character ");
//     scanf("%c", &ch);
//     if (ch >= 'A' && ch <= 'Z')
// 		printf("\n%c is an UpperCase character", ch);

// 	else if (ch >= 'a' && ch <= 'z')
// 		printf("\n%c is an LowerCase character",ch);

// 	else
// 		printf("\n%c is not an alphabetic character",ch); 
// }

// 13
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num % 6 ){
//         printf("%d is not divisible by 2 and 3", num);
//     } else printf("%d is divisible by 2 and 3", num);
// }

// 14
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if( num % 7 == 0 || num % 3 == 0){
//         printf("%d is divisible by either 7 or 3", num);
//     }else printf("%d is neither divisible by 7 nor 3", num);
// }

// 15
// void main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if( num > 0)
//         printf("%d is a positive number", num);
//     else if( num == 0)
//         printf("Entered  number is equal to zero");
//     else
//         printf("%d is a negative number", num);
// }


// 16
// int main(){
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     if( ch >= 'A' && ch <= 'Z' ){
//         printf("%c is uppercase", ch);
//     }else if( ch >= 'a' && ch <= 'z' ) printf("%c is lowercase", ch);
//     else if( ch >= '0' && ch <= '9') printf("%c is a number", ch);
//     else printf("%c is an special character");
// }


// 17
// int main(){
//     int side1, side2, side3;
//     printf("Enter three sides of a triangle: ");
//     scanf("%d %d %d", &side1, &side2, &side3);
//     if( side1 + side2 > side3 || (side1 + side3 > side2) || ( side2 + side3 > side1) )
//         printf("Valid triangle");
//     else printf("Invalid triangle");
// }

// 18
// int main(){
//     int month;
//     printf("Enter a month: ");
//     scanf("%d", &month);
//     switch(month){
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             printf("31 days in this month");
//             break;
//         case 2:
//             printf("28 or 29 days in this month");
//             break;
//         default:
//             printf("30 days in this month");
//     }
// }