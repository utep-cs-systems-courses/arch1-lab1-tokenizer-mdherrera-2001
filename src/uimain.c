#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main(){

  char input[100];
  //allows the program to run forever
  char sentence[100];

  while(1){
    printf("\nEnter one of the following:\n");
    printf("1.'q'to quit\n 2. 'w' to type a sentence\n 3.'!' followed by how far you would like to go back\n 4. 'h' for the history of the program\n");
    printf("$");
    fgets(input,100,stdin);
    if(input[0] == 'q'){
      printf("exiting now\n");
      return 0;//exits the while loop

    }
    else if(input[0] == 'w'){//for the sentence
      printf("Please enter your sentence:\n$");
      fgets(input,100,stdin);
    }
    else if(input[0] == '!'){

    }
    else if(input[0] == 'h'){

    }
    else{
      printf("enter a valid answer\n");
    }
  }
} 
