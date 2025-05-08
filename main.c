#include "output.c"
#include <stdio.h>
#include <string.h>

int main() {
	size_t no_replacement = get_new_buffer_size("Hello & World");
	size_t ampersand_replacement = get_new_buffer_size("Hello &amp; World");

	printf("13\n");
	printf("%zu\n", no_replacement);
	printf("%zu\n", ampersand_replacement);

	char* no_replacement_str = replace_html_escape_codes("Hello & World");
	char* ampersand_replacement_str = replace_html_escape_codes("Hello &amp; World");

	printf("%s\n", no_replacement_str);
	printf("%i\n", strcmp(no_replacement_str, "Hello & World"));
	printf("%i\n", strcmp(ampersand_replacement_str, "Hello & World"));

}