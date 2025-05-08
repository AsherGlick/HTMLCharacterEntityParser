#include "output.c"
#include <stdio.h>
#include <string.h>


struct Testcase {
	char* test_name;
	size_t output_length;
	char* input_string;
	char* output_string;
};

int main() {
	struct Testcase testcases[] = {
		{"no replacemenets in string", 13, "Hello & World", "Hello & World"},
		{"amp replacement in string", 13, "Hello &amp; World", "Hello & World"},
		{"amp replacement without semicolon in string", 13, "Hello &amp World", "Hello & World"},
		{"multiple replacements in string", 13, "Hello &lt;World&gt;", "Hello <World>" }
	};
	size_t testcase_count = sizeof(testcases) / sizeof(struct Testcase);

	int all_tests_pass = 1;

	for (size_t i = 0; i < testcase_count; i++) {
		int test_passed = 1;
		size_t buffer_size = get_new_buffer_size(testcases[i].input_string);

		char* output_string = replace_html_escape_codes(testcases[i].input_string);

		if (buffer_size != testcases[i].output_length) {
			printf("FAIL '%s' failed because the buffer size was incorrect. Expected %zu and got %zu.\n", testcases[i].test_name, testcases[i].output_length, buffer_size);
			test_passed = 0;
		}

		if (strcmp(output_string, testcases[i].output_string) != 0) {
			printf("FAIL '%s' failed because the ouptut string was incorrect.\n  Expected '%s'\n  Got      '%s'\n", testcases[i].test_name, testcases[i].output_string, output_string);
			test_passed = 0;
		}

		free(output_string);
		if (test_passed) {
			printf("PASS '%s\n", testcases[i].test_name);
		}

		all_tests_pass &= test_passed;
	}

	return !all_tests_pass;
	// if (all_tests_pass) { return 0; }

	// size_t no_replacement = get_new_buffer_size("Hello & World");
	// size_t ampersand_replacement = get_new_buffer_size("Hello &amp; World");

	// printf("13\n");
	// printf("%zu\n", no_replacement);
	// printf("%zu\n", ampersand_replacement);

	// char* no_replacement_str = replace_html_escape_codes("Hello & World");
	// char* ampersand_replacement_str = replace_html_escape_codes("Hello &amp; World");
	// char* ampersand_replacement_str = replace_html_escape_codes("Hello &amp World");

	// printf("%s\n", no_replacement_str);
	// printf("%i\n", strcmp(no_replacement_str, "Hello & World"));
	// printf("%s\n", ampersand_replacement_str);
	// printf("%i\n", strcmp(ampersand_replacement_str, "Hello & World"));
}
