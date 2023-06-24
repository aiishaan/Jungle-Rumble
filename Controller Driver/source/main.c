//header files
#include "controller.h"
#include "uart.h"

//array to keep track of buttons pressed
unsigned int buttons[17] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

//array to keep track of the previous button sate
unsigned int previousState[17] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

//overide print method
void printf(char *str){
    uart_puts(str);
}
//method that prints the messages
void Print_Msg(){
    printf("Created by Aishan Irfan and Arian Safari\n");
    printf("Please press a button...\n");
    while(1){
        //calls the main snes subroutine
        SNES(buttons);

        //if the the particular button was previously not pressed and is now pressed, 
        //prints the button print message≥

        if (buttons[12]== 0 && previousState[12] == 0) {
        printf("You have pressed R\n");
        printf("Please press a button...\n");
        //sets the previous button pressed state to true
        previousState[12] = 1;
        }
     if (buttons[11] ==0 && previousState[11] == 0) {
        printf("You have pressed L\n");
        printf("Please press a button...\n");
        previousState[11] = 1;
    }  if (buttons[10] ==0 && previousState[10] == 0) {
        printf("You have pressed X\n");
        printf("Please press a button...\n");
        previousState[10] = 1;
    }  if (buttons[9]== 0 && previousState[9] == 0) {
        printf("You have pressed A\n");
        printf("Please press a button...\n");
        previousState[9] = 1;
    }  if (buttons[8]== 0 && previousState[8] == 0) {
        printf("You have pressed Joy-pad RIGHT\n");
        printf("Please press a button...\n");
        previousState[8] = 1;
    }  if(buttons[7]==0 && previousState[7] == 0){
        printf("You have pressed Joy-pad LEFT\n");
        printf("Please press a button...\n");
        previousState[7] = 1;
    }  if(buttons[6]==0 && previousState[6] == 0){
        printf("You have pressed Joy-pad DOWN\n");
        printf("Please press a button...\n");
        previousState[6] = 1;
    }  if(buttons[5]==0 && previousState[5] == 0){
        printf("You have pressed Joy-pad UP\n");
        printf("Please press a button...\n");
        previousState[5] = 1;
    }  if(buttons[3]==0 && previousState[3] == 0){
        printf("You have pressed Select\n");
        printf("Please press a button...\n");
        previousState[3] = 1;
    }
     if (buttons[2]==0 && previousState[2] == 0) {
        printf("You have pressed Y\n");
        printf("Please press a button...\n");
        previousState[2] = 1;
    }  if (buttons[1]==0 && previousState[1] == 0) {
        printf("You have pressed B\n");
        printf("Please press a button...\n");
        previousState[1] = 1;
    }  if (buttons[4]==0 && previousState[4] == 0) {
        printf("You have pressed START\n");
        previousState[4] = 1;
        //the start button is pressed, program ends
        break;
    }
    //resets the previous state
    for (int i = 1; i <= 16; i++){
        if (buttons[i] == 1){
            previousState[i] = 0;
        }
    }
    }
    //program termination message
    printf("Program is terminating..\n");
}

//main subroutine that calls the init_gpio method and print method
int main(){
    Init_GPIO();
    Print_Msg();
    return 0;
}