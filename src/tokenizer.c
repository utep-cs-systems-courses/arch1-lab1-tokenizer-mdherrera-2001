#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"


int space_char(char c){
  if((c == '\t' || c == ' ') && c != 0){    //returns a digit due to return type
    return 1; // returns if char is a space or c
  }
  return 0;
}

int non_space_char(char c){
  if((c != '\t' || c != ' ') && c != 0){//basically the opposite of space_char
    return 1;
  }
  return 0;
}

char *word_start(char *s){
  
}

char *word_terminator(char *word){

}

int count_words(char *s){

}

char *copy_str(char *inStr, short len){

}

char **tokenize(char* str){

}

void print_tokens(char **tokens){

}

void free_tokens(char **tokens){
  
}
