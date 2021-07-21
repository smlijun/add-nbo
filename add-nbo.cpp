#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include <netinet/in.h>
int main() {
	uint32_t a;
	uint32_t b;

	FILE* fp1;
	FILE* fp2;

	fp1 = fopen("a.bin", "r");
	fp2 = fopen("b.bin", "r");

	fread(&a,32,1,fp1);
	fread(&b,32,1,fp2);	
 	printf("%u(%#x) + %u(%#x) = %u(%#x)",ntohl(a),ntohl(a),ntohl(b),ntohl(b),ntohl(a)+ntohl(b),ntohl(a)+ntohl(b));	

}
