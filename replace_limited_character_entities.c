#include <stdint.h>
#include <stdlib.h>
#include <string.h>

size_t get_size_for_replacing_limited_character_entities(const char* input_string) {
    const char* character = input_string;
    int length = 0;
    while (1) {
        if (character[0] == '&') {
            switch (character[1]) {
                case 'a':
                    switch (character[2]) {
                        case 'm':
                            if (strncmp(character + 3, "p;", 2) == 0) {
                                // Character Entity: "&amp;" Char: "&"
                                // Name: AMPERSAND
                                character += 4;
                                length += -4;
                            }
                            break;
                        case 'p':
                            if (strncmp(character + 3, "os;", 3) == 0) {
                                // Character Entity: "&apos;" Char: "'"
                                // Name: APOSTROPHE
                                character += 5;
                                length += -5;
                            }
                            break;
                    }
                    break;
                case 'g':
                    if (strncmp(character + 2, "t;", 2) == 0) {
                        // Character Entity: "&gt;" Char: ">"
                        // Name: GREATER-THAN SIGN
                        character += 3;
                        length += -3;
                    }
                    break;
                case 'l':
                    if (strncmp(character + 2, "t;", 2) == 0) {
                        // Character Entity: "&lt;" Char: "<"
                        // Name: LESS-THAN SIGN
                        character += 3;
                        length += -3;
                    }
                    break;
                case 'q':
                    if (strncmp(character + 2, "uot;", 4) == 0) {
                        // Character Entity: "&quot;" Char: """
                        // Name: QUOTATION MARK
                        character += 5;
                        length += -5;
                    }
                    break;
            }
        }
        else if (*character == 0x00) {
            return character - input_string + length;
        }
        ++character;
    }
}

char* replace_limited_character_entities(const char* input_string) {
    size_t buffer_size = get_size_for_replacing_limited_character_entities(input_string);
    char* output = malloc(buffer_size + 1);
    // Null terminate the string.
    output[buffer_size] = 0x00;
    const char* character = input_string;
    const char* substitute_start = character;
    const char* input_copy_start = character;
    char* output_copy_start = output;
    size_t copy_size;
    while (1) {
        substitute_start = character;
        if (character[0] == '&') {
            switch (character[1]) {
                case 'a':
                    switch (character[2]) {
                        case 'm':
                            if (strncmp(character + 3, "p;", 2) == 0) {
                                // Character Entity: "&amp;" Char: "&"
                                // Name: AMPERSAND
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\x26", 1);
                                output_copy_start += 1;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'p':
                            if (strncmp(character + 3, "os;", 3) == 0) {
                                // Character Entity: "&apos;" Char: "'"
                                // Name: APOSTROPHE
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\x27", 1);
                                output_copy_start += 1;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'g':
                    if (strncmp(character + 2, "t;", 2) == 0) {
                        // Character Entity: "&gt;" Char: ">"
                        // Name: GREATER-THAN SIGN
                        character += 3;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\x3e", 1);
                        output_copy_start += 1;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'l':
                    if (strncmp(character + 2, "t;", 2) == 0) {
                        // Character Entity: "&lt;" Char: "<"
                        // Name: LESS-THAN SIGN
                        character += 3;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\x3c", 1);
                        output_copy_start += 1;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'q':
                    if (strncmp(character + 2, "uot;", 4) == 0) {
                        // Character Entity: "&quot;" Char: """
                        // Name: QUOTATION MARK
                        character += 5;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\x22", 1);
                        output_copy_start += 1;
                        input_copy_start = character + 1;
                    }
                    break;
            }
        }
        else if (*character == 0x00) {
            copy_size = character - input_copy_start;
            memcpy(output_copy_start, input_copy_start, copy_size);
            break;
        }
        ++character;
    }
    return output;
}
