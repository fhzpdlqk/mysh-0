#include <string.h>

#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;
  else{
 	 chdir(argv[1]);
  }
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  char buffer[100];
  getcwd(buffer,1024);
  printf("%s\n",buffer);
  return 0;
}

int validate_cd_argv(int argc, char** argv) {
	if(strcmp(argv[0],"cd")!=0)
		return 0;
	else if(argc<2)
		return 0;
	else if(argc>2)
		return 0;
  return 1;
}

int validate_pwd_argv(int argc, char** argv) {
	if(strcmp(argv[0],"pwd")!=0)
		return 0;
	else if(argc>1)
		return 0;
  return 1;
}
