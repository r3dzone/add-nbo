#include <cstdio>
#include <stdint.h>

int main(int argc, char *argv[]){
	char* first_fname = argv[1];
	char* second_fname = argv[2];

	FILE* first_file = fopen(argv[1],"rb");
	FILE* second_file = fopen(argv[2],"rb");
	int first;
	int second;
	
	fread(&first,1,4,first_file);
	fread(&second,1,4,second_file);
	fclose(first_file);
	fclose(second_file);
	
	printf("%x,%x",first,second);
	
	return 0;
}
