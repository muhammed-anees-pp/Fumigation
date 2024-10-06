#include <stdio.h>
int main()
{
    int choice,deposit,withdraw,accountbalance=0,ministat[10],i=0,j,repeatchoice;
    printf("Welcome to ATM\n");
    for(;;){
    printf("Select the options below \n1 For Deposit \n2 For Withdrwal \n3 For Balance Check \n4 For Mini Statement  \nPlease Select Your Option: ");
    scanf("%d",&choice);

    
    switch (choice){
        case 1:
        printf("How much money you want to deposit: ");
        scanf("%d",&deposit);
        accountbalance=accountbalance+deposit;
        printf("%d rupees deposited successfully",deposit);
        ministat[i]=deposit;
        i++;
        break;

        case 2:
        printf("How much money you want to withdraw: ");
        scanf("%d",&withdraw);
        accountbalance=accountbalance-withdraw;
        printf("You are succussfully withdraw %d rupees from your account",withdraw);
        ministat[i]=(withdraw*-1);
        i++;
        break;

        case 3:
        printf("Your account having balance amount of %d rupees",accountbalance);
        break;

        case 4:
        printf("Mini Statement\n");
        for(j=0;j<10;j++){
            printf("%d\n",ministat[j]);
            if(i=j){
                break;
            }
        }
        break;

        default:
        printf("Wrong selection");
        break;
    
    }
    printf("\nDo you want to continue? \n1 For Yes \n2 For No \nPlease Select Your Option: ");
    scanf("%d",&repeatchoice);
    if(repeatchoice==2){
        break;
    }
    else{
        continue;
    }


    }
    
    return 0;
}