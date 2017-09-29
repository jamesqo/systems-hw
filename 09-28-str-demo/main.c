#include <stdio.h>
#include <string.h>

void print_value(char* c_ptr, char* c_ptr_name) {
	if (c_ptr) {
		printf("*%s: %c\n", c_ptr_name, *c_ptr);
	} else {
		printf("%s was null!\n", c_ptr_name);
	}
}

int main() {
	// strchr searches for a char inside a string.

	// strchr: found
	char* s_ptr = strchr("haystack", 's');
	print_value(s_ptr, "s_ptr");

	// strchr: not found
	char* null_ptr_1 = strchr("haystack", 'e');
	print_value(null_ptr_1, "null_ptr_1");

	// strstr searches for a string inside a string.
	
	// strstr: found
	char* hay_ptr = strstr("haystack", "hay");
	print_value(hay_ptr, "hay_ptr");

	// strstr: not found
	char* null_ptr_2 = strstr("haystack", "needle");
	print_value(null_ptr_2, "null_ptr_2");

	return 0;
}
