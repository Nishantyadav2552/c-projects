#include <stdio.h>
#include <math.h>
int main(){
    printf("welcome to the calculator : \n");
    int choice;
    while(1){
        printf("\n1.add\n2.subtract\n3.multiply\n4.division\n6. e for exit : \n");
        scanf("%d",&choice);
        if (choice == 1)        
        {
            printf("Enter the first and second number : \n");
            int num1;
            int num2;
            scanf("%d%d",&num1,&num2);
            printf("%d",num1 + num2);
            continue;
        }else if(choice == 2){
            printf("Enter the first and second number : \n");
            int num1;
            int num2;
            scanf("%d%d",&num1,&num2);
            printf("%d",num1 - num2);
            continue;
        }else if(choice == 3){
            printf("Enter the first and second number : \n");
            int num1;
            int num2;
            scanf("%d%d",&num1,&num2);
            printf("%d",num1 * num2);
            continue;
        }else if(choice == 4)
        {
            printf("Enter the first and second number : \n");
            int num1;
            int num2;
            scanf("%d%d",&num1,&num2);
            printf("%d",num1/num2);
            continue;
        }else if(choice == 5){
            printf("Enter the base and power : \n");
            int num1;
            int num2;
            scanf("%d%d",&num1,&num2);
            printf("%f",pow(num1,num2));
            continue;
        }else if(choice == 6)
        {
            printf("operation ended : \n");
            printf("--------------------------------------\n");
            break;
        }else{
            printf("its invalid \n");
            continue;
        }    
    }
}