#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  	char* copy = (char*)malloc(sizeof(char)*100);
	strcpy(copy,command);
	char* temp= (char*)malloc(sizeof(char)*100); 
	temp = strtok(copy," \n\t");
	*argc = 0;
	*argv = (char**)malloc(sizeof(char)*100);
	argv[0][0] = (char*)malloc(sizeof(char)*100);
	memset(argv[0][0],NULL,100);
	while(temp!=NULL){
		argv[0][*argc] = (char*)malloc(sizeof(char)*100);
		strcpy(argv[0][*argc],temp);
		(*argc)++;
		temp = strtok(NULL," \n\t");	
	}
	if(strcmp(argv[0][0],"")==0)
		*argc=1;
}
