#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int menu();
int menu211();
int deposit();
int withdraw();
int withdraw1(int a);
int display();
int reporter(int a);
int main(){
    int choice;
    /*
       PROGRAM INSTRUCTION:
       1. FOR FIRST USER, KINDLY CREAT ACCOUNT BY CHOOSING OPTION 1
       2. ALWAYS DISPLAY ACCOUNT BEFORE WITHDRAWING
    */
    printf("");
    printf("______________________________________________________________________________________\n");
    printf("\t\t          WELCOME TO JAY BANK PLC......");
    printf("\n______________________________________________________________________________________\n");
    printf("\n[1] Open account with any amount \n");
    printf("[2] Deposit\n");
    printf("[3] Withdraw\n");
    printf("[4] Display balance\n");
    printf("[5] Cancle transaction\n");
    printf("\nSelect your transaction: \n\n");
    scanf("%d", &choice);
    switch (choice) {
            case 1:
            printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
            return menu();
                break;
            case 2:
            printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
            return deposit();
                break;
            case 3:
            printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
            return withdraw();
                break;
            case 4:
            printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
            return display();
                break;
            case 5:
            printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
                printf("Thank you for using BANK PLC");
                exit(0);
                break;
            default: 
            printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
            printf("invalid Choice");
            printf("Do you want to re-try\n");
            printf("Press 1 for yes \nPress 2 to exit\n");
            int op2;
            scanf("%d",&op2);
            if (op2==1)
            {
                printf("Command received!! \n");
                printf("Please wait\n");
                sleep(3);
                system("clear");
                return menu211();
            }
            else{
                printf("Thanks for your time see you again !!!\n");
                sleep(5);
                printf("MY BANK PLC>>>>>>>\n");
                exit(0);
            }

             break;
     }
 return 0;
}
int menu(){
     int pin,pin2,rel,a,b,choice;
     char fname[30], sname[30];
    FILE *fp;
    fp = fopen("Backenddata.txt","w");
    if (fp==NULL)
    {
        printf("ERROR CREATING CODE!!\n");
        exit(0);
    }
    int j;
printf("______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO JAY BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     printf("WELCOME DEAR USER\n");
        printf("PLEASE ENTER YOUR FIRST AND LAST NAME ONLY\n");
        scanf("%s %s",fname,sname);
         printf("WELCOME %s %s\n",fname,sname);
         printf("Input an amount you will like to start your account with: \n");
        scanf("%d",&j);
         printf("Please create your four digit pin below\n");
         scanf("%d",&pin);
          printf("Please create your four digit pin below\n");
         scanf("%d",&pin2);
         if(pin!=pin2)
         {
             printf("PIN DOES NOT MATCH\n");
         }
         printf("Congratulations your four digit pin is %d\n",pin);
         sleep(2);
         fprintf(fp,"%s %s\n",fname,sname);
         fprintf(fp,"%d\n",pin);
         fprintf(fp,"%d\n",j);
         fclose(fp);
         system("clear");
         printf("\n______________________________________________________________________________________\n");
         printf("              Thanks for submiting, saving !! please wait>>>>>>\n");
         printf("________________________________________________________________________________________\n");
         sleep(3);
         system("clear");
         return menu211();
         

}
int menu211(){
int choice;
     printf("______________________________________________________________________________________\n");
     printf("\t\t         WELCOME TO JAY BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
    printf("[1] Deposit\n");
    printf("[2] Withdraw\n");
    printf("[3] Display balance\n");
    printf("[4] Cancle transaction\n");
    printf("\nPlease choose your opration: \n\n");
    scanf("%d", &choice);
    switch (choice) {
            case 1:
            printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
            return deposit();
                break;
            case 2:
             printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
            return withdraw();
                break;
            case 3:
            printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
            return display();
                break;
            case 4:
             printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
            printf("Thank you for using BANK PLC");
                exit(0);
                break;
           default: 
           printf("invalid Choice");
            printf("Please wait>>>> while your transaction is processing\n");
            sleep(3);
            system("clear");
            printf("Do you want to re-try\n");
            printf("Press 1 for yes \nPress 2 to exit\n");
            int op2;
            scanf("%d",&op2);
            if (op2==1)
            {
                printf("Command received!! \n");
                printf("Please wait\n");
                sleep(3);
                system("clear");
                return menu211();
            }
            else{
                printf("Thanks for your time see you again !!!\n");
                sleep(5);
                printf("MY BANK PLC>>>>>>>\n");
                exit(0);
            }
                break;
     }
    return 0;
}
int deposit(){
    FILE *FP;
    FP = fopen("Backenddata.txt", "a");
    if (FP==NULL)
    {
        printf("Unable to fetch data\n");
        return menu();
    }
    int AMOUNT;
    printf("______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO  BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     printf("Hello, Welcom dear user!!\n");
     printf("Please enter Amount to save into the bank: \n");
     scanf("%d",&AMOUNT);
     fprintf(FP,"%d\n",AMOUNT);
     fclose(FP);
     printf("Amount received!!\nPlease wait>>>>>\n");
     sleep(3);
     printf("Amount Received Sucessfully\n");
     sleep(3);
     system("clear");
     return menu211();
}
int display(){
    char FIRST_NAME[30], LAST_NAME[30];
    int PIN;
    int AMT=0, AMT1=0, AMT2=0, AMT3=0, AMT4=0, AMT5=0;
    int SUM=0, SUM1=0, SUM2=0, SUM3=0, SUM4=0, SUM5=0;
    FILE *fp;
    fp = fopen("Backenddata.txt","r");
    if (fp==NULL)
    {
        printf("Unable to fetch data from database!!!\n");
    
    }
    fscanf(fp,"%s",&FIRST_NAME);
    fscanf(fp,"%s",&LAST_NAME);
    fscanf(fp,"%d",&AMT);
    fscanf(fp,"%d",&AMT1);
    fscanf(fp,"%d",&AMT2);
    fscanf(fp,"%d",&AMT3);
    fscanf(fp,"%d",&AMT4);
    fscanf(fp,"%d",&AMT5);
    fclose(fp);

    SUM = AMT1 + AMT2 + AMT3 + AMT4 + AMT5;
    printf("Your last name is %s\n",LAST_NAME);
        printf("Your First name is %s\n",FIRST_NAME);
    printf("Hello!!, Kindly Provide Your Pin!!: \n");
    scanf("%d",&PIN);

    if (AMT==PIN)
    {
        printf("Pin Correct!!!\n");
        sleep(3);
        system("clear");
        printf("Please wait>>>> while your transaction is processing\n");
        sleep(3);
        system("clear");
        printf("Dear %s %s This Is Your Account Summary\n", LAST_NAME, FIRST_NAME);
        printf("Your last name is %s\n",LAST_NAME);
        printf("Your First name is %s\n",FIRST_NAME);
        printf("This Is Your First Amount Depositied %d\n", AMT1);
        printf("This Is Your Second Amount Depositied %d\n", AMT2);
        printf("This Is Your Third Amount Depositied %d\n", AMT3);
        printf("This Is Your Fourth Amount Depositied %d\n", AMT4);
        printf("This Is Your Fifth Amount Depositied %d\n", AMT5);
        printf("Your Total is $%d\n",SUM);
        sleep(7);
        system("clear");
        SUM2 = reporter(SUM);
    }
    else{
        printf("Pin Not Correct!!\n");
        //Printf("Please wait>>>>> ");
        sleep(3);
        system("clear");
        return display();
    }

}
int withdraw(){
    int dum;
    int AMT, WITHDRAL;
    FILE *fp;
     fp = fopen("Records.txt", "r");
     if (fp==NULL)
     {
         printf("Unable to read database for your records\nPlease Contact The Support Team\n");
     }
     fscanf(fp,"%d",&AMT);
     fclose(fp);
    printf("______________________________________________________________________________________\n");
    printf("Dear User!!, Welcome.\n");
    printf("Your Current Balance is %d\n",AMT);
    printf("______________________________________________________________________________________\n");
    printf("Please Input amount to withdraw\n");
    scanf("%d",&WITHDRAL);
    printf("Amount Received>>>\n");
    //Printf("Please wait>> \n");
    sleep(2);
    printf("Validating Amount In Account>>>>>\n");
    if (WITHDRAL>AMT)
    {
        printf("Amount Not Sufficient\n");
        printf("Please choose Amount Lesser than %d\n",AMT);
        printf("Redirecting You Back\nPlease Wait\n");
        sleep(13);
        system("clear");
        return withdraw();
    }
    else{
        printf("Good To Go!!!\n");
        AMT-=WITHDRAL;
        dum = withdraw1(AMT);
    }
}
int withdraw1(int a){
    FILE *fp;
    fp = fopen("Backenddata.txt", "r");
     if (fp==NULL)
     {
         printf("Unable to read database for your records\nPlease Contact The Support Team\n");
     }
     char dum[30], dum1[30];
     int pini,poo;
     fscanf(fp,"%s",&dum);
     fscanf(fp,"%s",&dum1);
     fscanf(fp,"%d",&pini);
     fclose(fp);
     printf("______________________________________________________________________________________\n");
     printf("Dear User Please Provide your Pin\n");
    scanf("%d",&poo);
    if (poo==pini)
    {
        printf("Pin correct\n");
        printf("Withdrawal Sucessful!!\n");
        printf("Your current Balance is %d\n",a);
        sleep(10);
        return menu211();
    }
    else{
        printf("");
        printf("Pin Not Correct!!\n");
        //printf("Please wait>>>>> \n");
        sleep(3);
        system("clear");
        return withdraw();
    }
    return 0;
}
int reporter(int a){
    printf("______________________________________________________________________________________\n");
     printf("\t\t          THANKS FOR USING JAY BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     FILE *fp;
     fp = fopen("Records.txt", "w");
     if (fp==NULL)
     {
         printf("Unable to create database for your records\nPlease Contact The Support Team\n");

     }
     fprintf(fp,"%d\n",a);
     fclose(fp);
     system("clear");
     return menu211();
    return 0;
}