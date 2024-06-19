#include <stdio.h>
#define MAX 10
void register_();
int login_();
typedef struct {
    char username[30];
    char password[30];
}user;
user users[MAX];
int user_count =0;
int main(){
    int index;
    printf("welcome to user management : \n");
    printf("1.register\n2.login\n3.exit\n");
    int option;
    scanf("%d",&option);
    while(1){
        switch (option)
        {
        case 1:
            register_();
            break;
        case 2:
            index = login_();
            if(index >= 0){
                printf("\nlogin successfull!\n %s",users[index].username);
            }else{
                printf("\nlogin failed! incorrect username or password : ");
            }
            break;
        case 3:
            printf("___exiting program___");
            return 0;
            break;
        default:
            printf("invalid -- try again");
            break;
        }
    }
}
void register_(){
    if (user_count == MAX)
    {
        printf("max user limit exceeded : ");
        return;
    }else{
        int newindex = user_count;
        user_count++;
        printf("\nRegister a new user\n");
        printf("enter user name :  ");
        fgets(users[newindex].username,30,stdin);
    }
}
