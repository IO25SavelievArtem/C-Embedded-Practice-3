#include <stdio.h>

// Actually, my number in group is 26.
// But variants are only provided till 20,
// so I've done variant 6 instead.

int main() {
	char str1[64], str2[64];
	char *ptr1 = str1, *ptr2 = str2;
	
	printf("Enter first string:\n");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter second string:\n");
	fgets(str2, sizeof(str2), stdin);
	
	while(1) {
		char char1 = *ptr1, char2 = *ptr2;
		if (char1 != char2) {
			printf("Provided strings are different\n");
			break;;
		}
		if (char1 == '\0' || char2 == '\0') {
			printf("Provided strings are equal\n");
			break;
		}
		ptr1++;
		ptr2++;
	}
	
	return 0;
}