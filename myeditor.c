#include <stdio.h>

int main(int argc, char **argv){
	if (argc == 0) {
		char newfile[50];
		gets(newfile);
		fopen(newfile, "w");
		fclose(newfile);
	}
	else {
		char newfile[50] = argv[0];
	}
	fopen(newfile, "rw");

}
