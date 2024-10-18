#include <stdio.h>

int main(){
    //variables
    // int d = 5; //%d for int 
    // char c = 'C'; // %c for single character
    // char name[] = "Ismail";//%s for array of characters
    // float gpa = 2.013 ;//%f for float
    // printf("Hello world %d and %c \n", d,c);
    // printf("My name is %s",name);
   

    //scanf
    // int age;
    // char name[25];
    // printf("Who are you?");
    // fgets(name,25,stdin); //for arrays
    // name[strlen(name)-1] = '\0';
    // printf("How old are you?");
    // scanf("%d",&age);

    // printf("\n Hello %s", name);
    // printf("\n You are %d old", age);

    // if statements
    // int age;

    // printf("\nEnter your age: ");
    // scanf("%d", &age);

    // if(age >= 18){
    //     printf("You are now signed up!");
    // }else{
    //     printf("You are too young!");
    // }

    // SWITCH
    // char grade;

    // printf("\nEnter a letter grade: ");
    // scanf("%c", &grade);

    // switch (grade)
    // {
    // case 'A':
    //     printf("perfect");
    //     break;
    // case 'B':
    //     printf("Passable");
    //     break;
    // case 'C':
    //     printf("Null");
    //     break;
    // default:
    //     printf("Please enter a valid lettre");
    //     break;
    // }
    // return 0;

    //Calcul
    char syn;
    double num1;
    double num2;
    double result;

    printf("Enter a symbole for an operation:");
    scanf("%c", &syn);

    printf("Enter a number: ");
    scanf("%lf", &num1);
    
    printf("Enter another:");
    scanf("%lf", &num2);

    switch (syn)
    {
    case '+':
        result = num1 + num2;
        printf("RESULT : %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("RESULT : %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("RESULT : %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("RESULT : %lf", result);
        break;
    default:
        printf("Veuillez entez un valid operator");
        break;
    }

    return 0;
}