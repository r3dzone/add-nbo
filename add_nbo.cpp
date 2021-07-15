#include <cstdio>
#include <stdint.h>
#include <netinet/in.h>

void add_nbo(uint32_t a, uint32_t b){
	uint32_t result = a + b;
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)",a,a,b,b,result,result);
}

int main(int argc, char *argv[]){

	FILE* first_file = fopen(argv[1],"rb");
	FILE* second_file = fopen(argv[2],"rb");
	int first;
	int second;
	
	fread(&first,1,4,first_file);
	fread(&second,1,4,second_file);
	fclose(first_file);
	fclose(second_file);
	
	uint32_t hfirst = ntohl(first);
	uint32_t hsecond = ntohl(second);
	
	add_nbo(hfirst,hsecond);
	
	return 0;
}
