#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Variable initialization
 char name[] = ""; 
 char password[] = ""; 
 char *students[] = {"Jim","Tom","Ben","Alice","Ruby"};
 char grades[] = "ACCDF";

void DisplayStudentInformation(){
    //Loop 5 times to display student name and grade
    for(int i =0; i <= 4; i++){
        printf("%s  %c \n",students[i],grades[i]);
    }
}

int CheckUserPermissionAccess(){    
    char pass[] = "123";   //Initialize variable
    char nam[] = "";  //Initialize nam with “    
    //compare strings, 0 means the strings are equal
    if(strcmp(password, pass) == 0){
        return 1; //Return 1 if values are equal
    }else{
        return 0; //Return 0 if values are not equal
    }
}

void ReadUserInfo(){    
    printf("Enter Name:\n");   //Print string on the screen
    scanf(" %s",&name);  //Pause for user to enter value    
    printf("Enter Password:\n"); //Print value on the screen
    scanf(" %s",&password);   //Take in value through standard input stream
}

int main(int argc, char** argv) {
    ReadUserInfo(); //Call method ReadUserInfo
    int value = CheckUserPermissionAccess();  //Call function and store its value
    if(value == 1){  //Check if value is equal to 1       
        DisplayStudentInformation();  //Call function to display student data        
        printf("Adjust grades for students?");  //Print string on screen        
        char choice;
        char value = 'Y';       
        scanf(" %c",&choice); //Take user choice through the standard input stream        
        if(choice == value){
            printf("Enter the GPA for students one at a time \n");
 			//loop to enter new grade for each student
            for(int i = 0; i <= 4; i++){
                printf("%s",students[i]);
                scanf(" %c",&grades[i]);
            }
          }
          printf("You have successfully updated class grades. The grades are now as follows:\n");
          DisplayStudentInformation(); //Display updated grades for students
    }else{
        return (0);
    }
    return (EXIT_SUCCESS);
}
