#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  	char* copy = (char*)malloc(sizeof(char)*100);
	strcpy(copy,command);
	char* temp= (char*)malloc(sizeof(char)*100); 
	temp = strtok(copy," \n");
	*argc = 0;
	printf("1");
	*argv = (char**)malloc(sizeof(char)*100);
	printf("2");
	while(temp!=NULL){
		argv[0][*argc] = (char*)malloc(sizeof(char)*100);
		strcpy(argv[0][*argc],temp);
		(*argc)++;
		temp = strtok(NULL," \n");	
	}
}
