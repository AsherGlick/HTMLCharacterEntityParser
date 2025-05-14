#include <stdint.h>
#include <stdlib.h>
#include <string.h>

size_t get_size_for_replacing_common_character_entities(const char* input_string) {
    const char* character = input_string;
    int length = 0;
    while (1) {
        if (character[0] == '&') {
            switch (character[1]) {
                case 'A':
                    if (strncmp(character + 2, "lpha;", 5) == 0) {
                        // Character Entity: "&Alpha;" Char: "Α"
                        // Name: GREEK CAPITAL LETTER ALPHA
                        character += 6;
                        length += -5;
                    }
                    break;
                case 'B':
                    if (strncmp(character + 2, "eta;", 4) == 0) {
                        // Character Entity: "&Beta;" Char: "Β"
                        // Name: GREEK CAPITAL LETTER BETA
                        character += 5;
                        length += -4;
                    }
                    break;
                case 'C':
                    if (strncmp(character + 2, "hi;", 3) == 0) {
                        // Character Entity: "&Chi;" Char: "Χ"
                        // Name: GREEK CAPITAL LETTER CHI
                        character += 4;
                        length += -3;
                    }
                    break;
                case 'D':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "gger;", 5) == 0) {
                                // Character Entity: "&Dagger;" Char: "‡"
                                // Name: DOUBLE DAGGER
                                character += 7;
                                length += -5;
                            }
                            break;
                        case 'e':
                            if (strncmp(character + 3, "lta;", 4) == 0) {
                                // Character Entity: "&Delta;" Char: "Δ"
                                // Name: GREEK CAPITAL LETTER DELTA
                                character += 6;
                                length += -5;
                            }
                            break;
                    }
                    break;
                case 'E':
                    switch (character[2]) {
                        case 'p':
                            if (strncmp(character + 3, "silon;", 6) == 0) {
                                // Character Entity: "&Epsilon;" Char: "Ε"
                                // Name: GREEK CAPITAL LETTER EPSILON
                                character += 8;
                                length += -7;
                            }
                            break;
                        case 't':
                            if (strncmp(character + 3, "a;", 2) == 0) {
                                // Character Entity: "&Eta;" Char: "Η"
                                // Name: GREEK CAPITAL LETTER ETA
                                character += 4;
                                length += -3;
                            }
                            break;
                    }
                    break;
                case 'G':
                    if (strncmp(character + 2, "amma;", 5) == 0) {
                        // Character Entity: "&Gamma;" Char: "Γ"
                        // Name: GREEK CAPITAL LETTER GAMMA
                        character += 6;
                        length += -5;
                    }
                    break;
                case 'I':
                    if (strncmp(character + 2, "ota;", 4) == 0) {
                        // Character Entity: "&Iota;" Char: "Ι"
                        // Name: GREEK CAPITAL LETTER IOTA
                        character += 5;
                        length += -4;
                    }
                    break;
                case 'K':
                    if (strncmp(character + 2, "appa;", 5) == 0) {
                        // Character Entity: "&Kappa;" Char: "Κ"
                        // Name: GREEK CAPITAL LETTER KAPPA
                        character += 6;
                        length += -5;
                    }
                    break;
                case 'L':
                    if (strncmp(character + 2, "ambda;", 6) == 0) {
                        // Character Entity: "&Lambda;" Char: "Λ"
                        // Name: GREEK CAPITAL LETTER LAMDA
                        character += 7;
                        length += -6;
                    }
                    break;
                case 'M':
                    if (strncmp(character + 2, "u;", 2) == 0) {
                        // Character Entity: "&Mu;" Char: "Μ"
                        // Name: GREEK CAPITAL LETTER MU
                        character += 3;
                        length += -2;
                    }
                    break;
                case 'N':
                    if (strncmp(character + 2, "u;", 2) == 0) {
                        // Character Entity: "&Nu;" Char: "Ν"
                        // Name: GREEK CAPITAL LETTER NU
                        character += 3;
                        length += -2;
                    }
                    break;
                case 'O':
                    switch (character[2]) {
                        case 'E':
                            if (strncmp(character + 3, "lig;", 4) == 0) {
                                // Character Entity: "&OElig;" Char: "Œ"
                                // Name: LATIN CAPITAL LIGATURE OE
                                character += 6;
                                length += -5;
                            }
                            break;
                        case 'm':
                            switch (character[3]) {
                                case 'e':
                                    if (strncmp(character + 4, "ga;", 3) == 0) {
                                        // Character Entity: "&Omega;" Char: "Ω"
                                        // Name: GREEK CAPITAL LETTER OMEGA
                                        character += 6;
                                        length += -5;
                                    }
                                    break;
                                case 'i':
                                    if (strncmp(character + 4, "cron;", 5) == 0) {
                                        // Character Entity: "&Omicron;" Char: "Ο"
                                        // Name: GREEK CAPITAL LETTER OMICRON
                                        character += 8;
                                        length += -7;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 'P':
                    switch (character[2]) {
                        case 'h':
                            if (strncmp(character + 3, "i;", 2) == 0) {
                                // Character Entity: "&Phi;" Char: "Φ"
                                // Name: GREEK CAPITAL LETTER PHI
                                character += 4;
                                length += -3;
                            }
                            break;
                        case 'i':
                            if (character[3] == ';') {
                                // Character Entity: "&Pi;" Char: "Π"
                                // Name: GREEK CAPITAL LETTER PI
                                character += 3;
                                length += -2;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "ime;", 4) == 0) {
                                // Character Entity: "&Prime;" Char: "″"
                                // Name: DOUBLE PRIME
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 's':
                            if (strncmp(character + 3, "i;", 2) == 0) {
                                // Character Entity: "&Psi;" Char: "Ψ"
                                // Name: GREEK CAPITAL LETTER PSI
                                character += 4;
                                length += -3;
                            }
                            break;
                    }
                    break;
                case 'R':
                    if (strncmp(character + 2, "ho;", 3) == 0) {
                        // Character Entity: "&Rho;" Char: "Ρ"
                        // Name: GREEK CAPITAL LETTER RHO
                        character += 4;
                        length += -3;
                    }
                    break;
                case 'S':
                    switch (character[2]) {
                        case 'c':
                            if (strncmp(character + 3, "aron;", 5) == 0) {
                                // Character Entity: "&Scaron;" Char: "Š"
                                // Name: LATIN CAPITAL LETTER S WITH CARON
                                character += 7;
                                length += -6;
                            }
                            break;
                        case 'i':
                            if (strncmp(character + 3, "gma;", 4) == 0) {
                                // Character Entity: "&Sigma;" Char: "Σ"
                                // Name: GREEK CAPITAL LETTER SIGMA
                                character += 6;
                                length += -5;
                            }
                            break;
                    }
                    break;
                case 'T':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "u;", 2) == 0) {
                                // Character Entity: "&Tau;" Char: "Τ"
                                // Name: GREEK CAPITAL LETTER TAU
                                character += 4;
                                length += -3;
                            }
                            break;
                        case 'h':
                            if (strncmp(character + 3, "eta;", 4) == 0) {
                                // Character Entity: "&Theta;" Char: "Θ"
                                // Name: GREEK CAPITAL LETTER THETA
                                character += 6;
                                length += -5;
                            }
                            break;
                    }
                    break;
                case 'U':
                    if (strncmp(character + 2, "psilon;", 7) == 0) {
                        // Character Entity: "&Upsilon;" Char: "Υ"
                        // Name: GREEK CAPITAL LETTER UPSILON
                        character += 8;
                        length += -7;
                    }
                    break;
                case 'X':
                    if (strncmp(character + 2, "i;", 2) == 0) {
                        // Character Entity: "&Xi;" Char: "Ξ"
                        // Name: GREEK CAPITAL LETTER XI
                        character += 3;
                        length += -2;
                    }
                    break;
                case 'Y':
                    if (strncmp(character + 2, "uml;", 4) == 0) {
                        // Character Entity: "&Yuml;" Char: "Ÿ"
                        // Name: LATIN CAPITAL LETTER Y WITH DIAERESIS
                        character += 5;
                        length += -4;
                    }
                    break;
                case 'Z':
                    if (strncmp(character + 2, "eta;", 4) == 0) {
                        // Character Entity: "&Zeta;" Char: "Ζ"
                        // Name: GREEK CAPITAL LETTER ZETA
                        character += 5;
                        length += -4;
                    }
                    break;
                case 'a':
                    switch (character[2]) {
                        case 'c':
                            if (strncmp(character + 3, "ute;", 4) == 0) {
                                // Character Entity: "&acute;" Char: "´"
                                // Name: ACUTE ACCENT
                                character += 6;
                                length += -5;
                            }
                            break;
                        case 'l':
                            if (strncmp(character + 3, "pha;", 4) == 0) {
                                // Character Entity: "&alpha;" Char: "α"
                                // Name: GREEK SMALL LETTER ALPHA
                                character += 6;
                                length += -5;
                            }
                            break;
                        case 'm':
                            if (strncmp(character + 3, "p;", 2) == 0) {
                                // Character Entity: "&amp;" Char: "&"
                                // Name: AMPERSAND
                                character += 4;
                                length += -4;
                            }
                            break;
                        case 'n':
                            switch (character[3]) {
                                case 'd':
                                    if (character[4] == ';') {
                                        // Character Entity: "&and;" Char: "∧"
                                        // Name: LOGICAL AND
                                        character += 4;
                                        length += -2;
                                    }
                                    break;
                                case 'g':
                                    if (character[4] == ';') {
                                        // Character Entity: "&ang;" Char: "∠"
                                        // Name: ANGLE
                                        character += 4;
                                        length += -2;
                                    }
                                    break;
                            }
                            break;
                        case 's':
                            if (strncmp(character + 3, "ymp;", 4) == 0) {
                                // Character Entity: "&asymp;" Char: "≈"
                                // Name: ALMOST EQUAL TO
                                character += 6;
                                length += -4;
                            }
                            break;
                    }
                    break;
                case 'b':
                    switch (character[2]) {
                        case 'd':
                            if (strncmp(character + 3, "quo;", 4) == 0) {
                                // Character Entity: "&bdquo;" Char: "„"
                                // Name: DOUBLE LOW-9 QUOTATION MARK
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'e':
                            if (strncmp(character + 3, "ta;", 3) == 0) {
                                // Character Entity: "&beta;" Char: "β"
                                // Name: GREEK SMALL LETTER BETA
                                character += 5;
                                length += -4;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "vbar;", 5) == 0) {
                                // Character Entity: "&brvbar;" Char: "¦"
                                // Name: BROKEN BAR
                                character += 7;
                                length += -6;
                            }
                            break;
                        case 'u':
                            if (strncmp(character + 3, "ll;", 3) == 0) {
                                // Character Entity: "&bull;" Char: "•"
                                // Name: BULLET
                                character += 5;
                                length += -3;
                            }
                            break;
                    }
                    break;
                case 'c':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "p;", 2) == 0) {
                                // Character Entity: "&cap;" Char: "∩"
                                // Name: INTERSECTION
                                character += 4;
                                length += -2;
                            }
                            break;
                        case 'e':
                            switch (character[3]) {
                                case 'd':
                                    if (strncmp(character + 4, "il;", 3) == 0) {
                                        // Character Entity: "&cedil;" Char: "¸"
                                        // Name: CEDILLA
                                        character += 6;
                                        length += -5;
                                    }
                                    break;
                                case 'n':
                                    if (strncmp(character + 4, "t;", 2) == 0) {
                                        // Character Entity: "&cent;" Char: "¢"
                                        // Name: CENT SIGN
                                        character += 5;
                                        length += -4;
                                    }
                                    break;
                            }
                            break;
                        case 'h':
                            if (strncmp(character + 3, "i;", 2) == 0) {
                                // Character Entity: "&chi;" Char: "χ"
                                // Name: GREEK SMALL LETTER CHI
                                character += 4;
                                length += -3;
                            }
                            break;
                        case 'i':
                            if (strncmp(character + 3, "rc;", 3) == 0) {
                                // Character Entity: "&circ;" Char: "ˆ"
                                // Name: MODIFIER LETTER CIRCUMFLEX ACCENT
                                character += 5;
                                length += -4;
                            }
                            break;
                        case 'l':
                            if (strncmp(character + 3, "ubs;", 4) == 0) {
                                // Character Entity: "&clubs;" Char: "♣"
                                // Name: BLACK CLUB SUIT
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'o':
                            switch (character[3]) {
                                case 'n':
                                    if (strncmp(character + 4, "g;", 2) == 0) {
                                        // Character Entity: "&cong;" Char: "≅"
                                        // Name: APPROXIMATELY EQUAL TO
                                        character += 5;
                                        length += -3;
                                    }
                                    break;
                                case 'p':
                                    if (strncmp(character + 4, "y;", 2) == 0) {
                                        // Character Entity: "&copy;" Char: "©"
                                        // Name: COPYRIGHT SIGN
                                        character += 5;
                                        length += -4;
                                    }
                                    break;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "arr;", 4) == 0) {
                                // Character Entity: "&crarr;" Char: "↵"
                                // Name: DOWNWARDS ARROW WITH CORNER LEFTWARDS
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'u':
                            switch (character[3]) {
                                case 'p':
                                    if (character[4] == ';') {
                                        // Character Entity: "&cup;" Char: "∪"
                                        // Name: UNION
                                        character += 4;
                                        length += -2;
                                    }
                                    break;
                                case 'r':
                                    if (strncmp(character + 4, "ren;", 4) == 0) {
                                        // Character Entity: "&curren;" Char: "¤"
                                        // Name: CURRENCY SIGN
                                        character += 7;
                                        length += -6;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 'd':
                    switch (character[2]) {
                        case 'a':
                            switch (character[3]) {
                                case 'g':
                                    if (strncmp(character + 4, "ger;", 4) == 0) {
                                        // Character Entity: "&dagger;" Char: "†"
                                        // Name: DAGGER
                                        character += 7;
                                        length += -5;
                                    }
                                    break;
                                case 'r':
                                    if (strncmp(character + 4, "r;", 2) == 0) {
                                        // Character Entity: "&darr;" Char: "↓"
                                        // Name: DOWNWARDS ARROW
                                        character += 5;
                                        length += -3;
                                    }
                                    break;
                            }
                            break;
                        case 'e':
                            switch (character[3]) {
                                case 'g':
                                    if (character[4] == ';') {
                                        // Character Entity: "&deg;" Char: "°"
                                        // Name: DEGREE SIGN
                                        character += 4;
                                        length += -3;
                                    }
                                    break;
                                case 'l':
                                    if (strncmp(character + 4, "ta;", 3) == 0) {
                                        // Character Entity: "&delta;" Char: "δ"
                                        // Name: GREEK SMALL LETTER DELTA
                                        character += 6;
                                        length += -5;
                                    }
                                    break;
                            }
                            break;
                        case 'i':
                            switch (character[3]) {
                                case 'a':
                                    if (strncmp(character + 4, "ms;", 3) == 0) {
                                        // Character Entity: "&diams;" Char: "♦"
                                        // Name: BLACK DIAMOND SUIT
                                        character += 6;
                                        length += -4;
                                    }
                                    break;
                                case 'v':
                                    if (strncmp(character + 4, "ide;", 4) == 0) {
                                        // Character Entity: "&divide;" Char: "÷"
                                        // Name: DIVISION SIGN
                                        character += 7;
                                        length += -6;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 'e':
                    switch (character[2]) {
                        case 'm':
                            switch (character[3]) {
                                case 'p':
                                    if (strncmp(character + 4, "ty;", 3) == 0) {
                                        // Character Entity: "&empty;" Char: "∅"
                                        // Name: EMPTY SET
                                        character += 6;
                                        length += -4;
                                    }
                                    break;
                                case 's':
                                    if (strncmp(character + 4, "p;", 2) == 0) {
                                        // Character Entity: "&emsp;" Char: " "
                                        // Name: EM SPACE
                                        character += 5;
                                        length += -3;
                                    }
                                    break;
                            }
                            break;
                        case 'n':
                            if (strncmp(character + 3, "sp;", 3) == 0) {
                                // Character Entity: "&ensp;" Char: " "
                                // Name: EN SPACE
                                character += 5;
                                length += -3;
                            }
                            break;
                        case 'p':
                            if (strncmp(character + 3, "silon;", 6) == 0) {
                                // Character Entity: "&epsilon;" Char: "ε"
                                // Name: GREEK SMALL LETTER EPSILON
                                character += 8;
                                length += -7;
                            }
                            break;
                        case 'q':
                            if (strncmp(character + 3, "uiv;", 4) == 0) {
                                // Character Entity: "&equiv;" Char: "≡"
                                // Name: IDENTICAL TO
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 't':
                            if (strncmp(character + 3, "a;", 2) == 0) {
                                // Character Entity: "&eta;" Char: "η"
                                // Name: GREEK SMALL LETTER ETA
                                character += 4;
                                length += -3;
                            }
                            break;
                        case 'u':
                            if (strncmp(character + 3, "ro;", 3) == 0) {
                                // Character Entity: "&euro;" Char: "€"
                                // Name: EURO SIGN
                                character += 5;
                                length += -3;
                            }
                            break;
                        case 'x':
                            if (strncmp(character + 3, "ist;", 4) == 0) {
                                // Character Entity: "&exist;" Char: "∃"
                                // Name: THERE EXISTS
                                character += 6;
                                length += -4;
                            }
                            break;
                    }
                    break;
                case 'f':
                    switch (character[2]) {
                        case 'n':
                            if (strncmp(character + 3, "of;", 3) == 0) {
                                // Character Entity: "&fnof;" Char: "ƒ"
                                // Name: LATIN SMALL LETTER F WITH HOOK
                                character += 5;
                                length += -4;
                            }
                            break;
                        case 'o':
                            if (strncmp(character + 3, "rall;", 5) == 0) {
                                // Character Entity: "&forall;" Char: "∀"
                                // Name: FOR ALL
                                character += 7;
                                length += -5;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "ac", 2) == 0) {
                                switch (character[5]) {
                                    case '1':
                                        switch (character[6]) {
                                            case '2':
                                                if (character[7] == ';') {
                                                    // Character Entity: "&frac12;" Char: "½"
                                                    // Name: VULGAR FRACTION ONE HALF
                                                    character += 7;
                                                    length += -6;
                                                }
                                                break;
                                            case '4':
                                                if (character[7] == ';') {
                                                    // Character Entity: "&frac14;" Char: "¼"
                                                    // Name: VULGAR FRACTION ONE QUARTER
                                                    character += 7;
                                                    length += -6;
                                                }
                                                break;
                                        }
                                        break;
                                    case '3':
                                        if (strncmp(character + 6, "4;", 2) == 0) {
                                            // Character Entity: "&frac34;" Char: "¾"
                                            // Name: VULGAR FRACTION THREE QUARTERS
                                            character += 7;
                                            length += -6;
                                        }
                                        break;
                                }
                            }
                            break;
                    }
                    break;
                case 'g':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "mma;", 4) == 0) {
                                // Character Entity: "&gamma;" Char: "γ"
                                // Name: GREEK SMALL LETTER GAMMA
                                character += 6;
                                length += -5;
                            }
                            break;
                        case 'e':
                            if (character[3] == ';') {
                                // Character Entity: "&ge;" Char: "≥"
                                // Name: GREATER-THAN OR EQUAL TO
                                character += 3;
                                length += -1;
                            }
                            break;
                        case 't':
                            if (character[3] == ';') {
                                // Character Entity: "&gt;" Char: ">"
                                // Name: GREATER-THAN SIGN
                                character += 3;
                                length += -3;
                            }
                            break;
                    }
                    break;
                case 'h':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "rr;", 3) == 0) {
                                // Character Entity: "&harr;" Char: "↔"
                                // Name: LEFT RIGHT ARROW
                                character += 5;
                                length += -3;
                            }
                            break;
                        case 'e':
                            switch (character[3]) {
                                case 'a':
                                    if (strncmp(character + 4, "rts;", 4) == 0) {
                                        // Character Entity: "&hearts;" Char: "♥"
                                        // Name: BLACK HEART SUIT
                                        character += 7;
                                        length += -5;
                                    }
                                    break;
                                case 'l':
                                    if (strncmp(character + 4, "lip;", 4) == 0) {
                                        // Character Entity: "&hellip;" Char: "…"
                                        // Name: HORIZONTAL ELLIPSIS
                                        character += 7;
                                        length += -5;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 'i':
                    switch (character[2]) {
                        case 'e':
                            if (strncmp(character + 3, "xcl;", 4) == 0) {
                                // Character Entity: "&iexcl;" Char: "¡"
                                // Name: INVERTED EXCLAMATION MARK
                                character += 6;
                                length += -5;
                            }
                            break;
                        case 'n':
                            switch (character[3]) {
                                case 'f':
                                    if (strncmp(character + 4, "in;", 3) == 0) {
                                        // Character Entity: "&infin;" Char: "∞"
                                        // Name: INFINITY
                                        character += 6;
                                        length += -4;
                                    }
                                    break;
                                case 't':
                                    if (character[4] == ';') {
                                        // Character Entity: "&int;" Char: "∫"
                                        // Name: INTEGRAL
                                        character += 4;
                                        length += -2;
                                    }
                                    break;
                            }
                            break;
                        case 'o':
                            if (strncmp(character + 3, "ta;", 3) == 0) {
                                // Character Entity: "&iota;" Char: "ι"
                                // Name: GREEK SMALL LETTER IOTA
                                character += 5;
                                length += -4;
                            }
                            break;
                        case 'q':
                            if (strncmp(character + 3, "uest;", 5) == 0) {
                                // Character Entity: "&iquest;" Char: "¿"
                                // Name: INVERTED QUESTION MARK
                                character += 7;
                                length += -6;
                            }
                            break;
                        case 's':
                            if (strncmp(character + 3, "in;", 3) == 0) {
                                // Character Entity: "&isin;" Char: "∈"
                                // Name: ELEMENT OF
                                character += 5;
                                length += -3;
                            }
                            break;
                    }
                    break;
                case 'k':
                    if (strncmp(character + 2, "appa;", 5) == 0) {
                        // Character Entity: "&kappa;" Char: "κ"
                        // Name: GREEK SMALL LETTER KAPPA
                        character += 6;
                        length += -5;
                    }
                    break;
                case 'l':
                    switch (character[2]) {
                        case 'a':
                            switch (character[3]) {
                                case 'm':
                                    if (strncmp(character + 4, "bda;", 4) == 0) {
                                        // Character Entity: "&lambda;" Char: "λ"
                                        // Name: GREEK SMALL LETTER LAMDA
                                        character += 7;
                                        length += -6;
                                    }
                                    break;
                                case 'q':
                                    if (strncmp(character + 4, "uo;", 3) == 0) {
                                        // Character Entity: "&laquo;" Char: "«"
                                        // Name: LEFT-POINTING DOUBLE ANGLE QUOTATION MARK
                                        character += 6;
                                        length += -5;
                                    }
                                    break;
                                case 'r':
                                    if (strncmp(character + 4, "r;", 2) == 0) {
                                        // Character Entity: "&larr;" Char: "←"
                                        // Name: LEFTWARDS ARROW
                                        character += 5;
                                        length += -3;
                                    }
                                    break;
                            }
                            break;
                        case 'c':
                            if (strncmp(character + 3, "eil;", 4) == 0) {
                                // Character Entity: "&lceil;" Char: "⌈"
                                // Name: LEFT CEILING
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'd':
                            if (strncmp(character + 3, "quo;", 4) == 0) {
                                // Character Entity: "&ldquo;" Char: "“"
                                // Name: LEFT DOUBLE QUOTATION MARK
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'e':
                            if (character[3] == ';') {
                                // Character Entity: "&le;" Char: "≤"
                                // Name: LESS-THAN OR EQUAL TO
                                character += 3;
                                length += -1;
                            }
                            break;
                        case 'f':
                            if (strncmp(character + 3, "loor;", 5) == 0) {
                                // Character Entity: "&lfloor;" Char: "⌊"
                                // Name: LEFT FLOOR
                                character += 7;
                                length += -5;
                            }
                            break;
                        case 'o':
                            switch (character[3]) {
                                case 'w':
                                    if (strncmp(character + 4, "ast;", 4) == 0) {
                                        // Character Entity: "&lowast;" Char: "∗"
                                        // Name: ASTERISK OPERATOR
                                        character += 7;
                                        length += -5;
                                    }
                                    break;
                                case 'z':
                                    if (character[4] == ';') {
                                        // Character Entity: "&loz;" Char: "◊"
                                        // Name: LOZENGE
                                        character += 4;
                                        length += -2;
                                    }
                                    break;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "m;", 2) == 0) {
                                // Character Entity: "&lrm;" Char: "‎"
                                // Name: LEFT-TO-RIGHT MARK
                                character += 4;
                                length += -2;
                            }
                            break;
                        case 's':
                            switch (character[3]) {
                                case 'a':
                                    if (strncmp(character + 4, "quo;", 4) == 0) {
                                        // Character Entity: "&lsaquo;" Char: "‹"
                                        // Name: SINGLE LEFT-POINTING ANGLE QUOTATION MARK
                                        character += 7;
                                        length += -5;
                                    }
                                    break;
                                case 'q':
                                    if (strncmp(character + 4, "uo;", 3) == 0) {
                                        // Character Entity: "&lsquo;" Char: "‘"
                                        // Name: LEFT SINGLE QUOTATION MARK
                                        character += 6;
                                        length += -4;
                                    }
                                    break;
                            }
                            break;
                        case 't':
                            if (character[3] == ';') {
                                // Character Entity: "&lt;" Char: "<"
                                // Name: LESS-THAN SIGN
                                character += 3;
                                length += -3;
                            }
                            break;
                    }
                    break;
                case 'm':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "cr;", 3) == 0) {
                                // Character Entity: "&macr;" Char: "¯"
                                // Name: MACRON
                                character += 5;
                                length += -4;
                            }
                            break;
                        case 'd':
                            if (strncmp(character + 3, "ash;", 4) == 0) {
                                // Character Entity: "&mdash;" Char: "—"
                                // Name: EM DASH
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'i':
                            switch (character[3]) {
                                case 'c':
                                    if (strncmp(character + 4, "ro;", 3) == 0) {
                                        // Character Entity: "&micro;" Char: "µ"
                                        // Name: MICRO SIGN
                                        character += 6;
                                        length += -5;
                                    }
                                    break;
                                case 'n':
                                    if (strncmp(character + 4, "us;", 3) == 0) {
                                        // Character Entity: "&minus;" Char: "−"
                                        // Name: MINUS SIGN
                                        character += 6;
                                        length += -4;
                                    }
                                    break;
                            }
                            break;
                        case 'u':
                            if (character[3] == ';') {
                                // Character Entity: "&mu;" Char: "μ"
                                // Name: GREEK SMALL LETTER MU
                                character += 3;
                                length += -2;
                            }
                            break;
                    }
                    break;
                case 'n':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "bla;", 4) == 0) {
                                // Character Entity: "&nabla;" Char: "∇"
                                // Name: NABLA
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'b':
                            if (strncmp(character + 3, "sp;", 3) == 0) {
                                // Character Entity: "&nbsp;" Char: " "
                                // Name: NO-BREAK SPACE
                                character += 5;
                                length += -4;
                            }
                            break;
                        case 'd':
                            if (strncmp(character + 3, "ash;", 4) == 0) {
                                // Character Entity: "&ndash;" Char: "–"
                                // Name: EN DASH
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'e':
                            if (character[3] == ';') {
                                // Character Entity: "&ne;" Char: "≠"
                                // Name: NOT EQUAL TO
                                character += 3;
                                length += -1;
                            }
                            break;
                        case 'i':
                            if (character[3] == ';') {
                                // Character Entity: "&ni;" Char: "∋"
                                // Name: CONTAINS AS MEMBER
                                character += 3;
                                length += -1;
                            }
                            break;
                        case 'o':
                            if (character[3] == 't') {
                                switch (character[4]) {
                                    case ';':
                                        // Character Entity: "&not;" Char: "¬"
                                        // Name: NOT SIGN
                                        character += 4;
                                        length += -3;
                                        break;
                                    case 'i':
                                        if (strncmp(character + 5, "n;", 2) == 0) {
                                            // Character Entity: "&notin;" Char: "∉"
                                            // Name: NOT AN ELEMENT OF
                                            character += 6;
                                            length += -4;
                                        }
                                        break;
                                }
                            }
                            break;
                        case 's':
                            if (strncmp(character + 3, "ub;", 3) == 0) {
                                // Character Entity: "&nsub;" Char: "⊄"
                                // Name: NOT A SUBSET OF
                                character += 5;
                                length += -3;
                            }
                            break;
                        case 'u':
                            if (character[3] == ';') {
                                // Character Entity: "&nu;" Char: "ν"
                                // Name: GREEK SMALL LETTER NU
                                character += 3;
                                length += -2;
                            }
                            break;
                    }
                    break;
                case 'o':
                    switch (character[2]) {
                        case 'e':
                            if (strncmp(character + 3, "lig;", 4) == 0) {
                                // Character Entity: "&oelig;" Char: "œ"
                                // Name: LATIN SMALL LIGATURE OE
                                character += 6;
                                length += -5;
                            }
                            break;
                        case 'l':
                            if (strncmp(character + 3, "ine;", 4) == 0) {
                                // Character Entity: "&oline;" Char: "‾"
                                // Name: OVERLINE
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'm':
                            switch (character[3]) {
                                case 'e':
                                    if (strncmp(character + 4, "ga;", 3) == 0) {
                                        // Character Entity: "&omega;" Char: "ω"
                                        // Name: GREEK SMALL LETTER OMEGA
                                        character += 6;
                                        length += -5;
                                    }
                                    break;
                                case 'i':
                                    if (strncmp(character + 4, "cron;", 5) == 0) {
                                        // Character Entity: "&omicron;" Char: "ο"
                                        // Name: GREEK SMALL LETTER OMICRON
                                        character += 8;
                                        length += -7;
                                    }
                                    break;
                            }
                            break;
                        case 'p':
                            if (strncmp(character + 3, "lus;", 4) == 0) {
                                // Character Entity: "&oplus;" Char: "⊕"
                                // Name: CIRCLED PLUS
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'r':
                            switch (character[3]) {
                                case ';':
                                    // Character Entity: "&or;" Char: "∨"
                                    // Name: LOGICAL OR
                                    character += 3;
                                    length += -1;
                                    break;
                                case 'd':
                                    switch (character[4]) {
                                        case 'f':
                                            if (character[5] == ';') {
                                                // Character Entity: "&ordf;" Char: "ª"
                                                // Name: FEMININE ORDINAL INDICATOR
                                                character += 5;
                                                length += -4;
                                            }
                                            break;
                                        case 'm':
                                            if (character[5] == ';') {
                                                // Character Entity: "&ordm;" Char: "º"
                                                // Name: MASCULINE ORDINAL INDICATOR
                                                character += 5;
                                                length += -4;
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;
                        case 't':
                            if (strncmp(character + 3, "imes;", 5) == 0) {
                                // Character Entity: "&otimes;" Char: "⊗"
                                // Name: CIRCLED TIMES
                                character += 7;
                                length += -5;
                            }
                            break;
                    }
                    break;
                case 'p':
                    switch (character[2]) {
                        case 'a':
                            if (character[3] == 'r') {
                                switch (character[4]) {
                                    case 'a':
                                        if (character[5] == ';') {
                                            // Character Entity: "&para;" Char: "¶"
                                            // Name: PILCROW SIGN
                                            character += 5;
                                            length += -4;
                                        }
                                        break;
                                    case 't':
                                        if (character[5] == ';') {
                                            // Character Entity: "&part;" Char: "∂"
                                            // Name: PARTIAL DIFFERENTIAL
                                            character += 5;
                                            length += -3;
                                        }
                                        break;
                                }
                            }
                            break;
                        case 'e':
                            if (character[3] == 'r') {
                                switch (character[4]) {
                                    case 'm':
                                        if (strncmp(character + 5, "il;", 3) == 0) {
                                            // Character Entity: "&permil;" Char: "‰"
                                            // Name: PER MILLE SIGN
                                            character += 7;
                                            length += -5;
                                        }
                                        break;
                                    case 'p':
                                        if (character[5] == ';') {
                                            // Character Entity: "&perp;" Char: "⊥"
                                            // Name: UP TACK
                                            character += 5;
                                            length += -3;
                                        }
                                        break;
                                }
                            }
                            break;
                        case 'h':
                            if (strncmp(character + 3, "i;", 2) == 0) {
                                // Character Entity: "&phi;" Char: "φ"
                                // Name: GREEK SMALL LETTER PHI
                                character += 4;
                                length += -3;
                            }
                            break;
                        case 'i':
                            switch (character[3]) {
                                case ';':
                                    // Character Entity: "&pi;" Char: "π"
                                    // Name: GREEK SMALL LETTER PI
                                    character += 3;
                                    length += -2;
                                    break;
                                case 'v':
                                    if (character[4] == ';') {
                                        // Character Entity: "&piv;" Char: "ϖ"
                                        // Name: GREEK PI SYMBOL
                                        character += 4;
                                        length += -3;
                                    }
                                    break;
                            }
                            break;
                        case 'l':
                            if (strncmp(character + 3, "usmn;", 5) == 0) {
                                // Character Entity: "&plusmn;" Char: "±"
                                // Name: PLUS-MINUS SIGN
                                character += 7;
                                length += -6;
                            }
                            break;
                        case 'o':
                            if (strncmp(character + 3, "und;", 4) == 0) {
                                // Character Entity: "&pound;" Char: "£"
                                // Name: POUND SIGN
                                character += 6;
                                length += -5;
                            }
                            break;
                        case 'r':
                            switch (character[3]) {
                                case 'i':
                                    if (strncmp(character + 4, "me;", 3) == 0) {
                                        // Character Entity: "&prime;" Char: "′"
                                        // Name: PRIME
                                        character += 6;
                                        length += -4;
                                    }
                                    break;
                                case 'o':
                                    switch (character[4]) {
                                        case 'd':
                                            if (character[5] == ';') {
                                                // Character Entity: "&prod;" Char: "∏"
                                                // Name: N-ARY PRODUCT
                                                character += 5;
                                                length += -3;
                                            }
                                            break;
                                        case 'p':
                                            if (character[5] == ';') {
                                                // Character Entity: "&prop;" Char: "∝"
                                                // Name: PROPORTIONAL TO
                                                character += 5;
                                                length += -3;
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;
                        case 's':
                            if (strncmp(character + 3, "i;", 2) == 0) {
                                // Character Entity: "&psi;" Char: "ψ"
                                // Name: GREEK SMALL LETTER PSI
                                character += 4;
                                length += -3;
                            }
                            break;
                    }
                    break;
                case 'r':
                    switch (character[2]) {
                        case 'a':
                            switch (character[3]) {
                                case 'd':
                                    if (strncmp(character + 4, "ic;", 3) == 0) {
                                        // Character Entity: "&radic;" Char: "√"
                                        // Name: SQUARE ROOT
                                        character += 6;
                                        length += -4;
                                    }
                                    break;
                                case 'q':
                                    if (strncmp(character + 4, "uo;", 3) == 0) {
                                        // Character Entity: "&raquo;" Char: "»"
                                        // Name: RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK
                                        character += 6;
                                        length += -5;
                                    }
                                    break;
                                case 'r':
                                    if (strncmp(character + 4, "r;", 2) == 0) {
                                        // Character Entity: "&rarr;" Char: "→"
                                        // Name: RIGHTWARDS ARROW
                                        character += 5;
                                        length += -3;
                                    }
                                    break;
                            }
                            break;
                        case 'c':
                            if (strncmp(character + 3, "eil;", 4) == 0) {
                                // Character Entity: "&rceil;" Char: "⌉"
                                // Name: RIGHT CEILING
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'd':
                            if (strncmp(character + 3, "quo;", 4) == 0) {
                                // Character Entity: "&rdquo;" Char: "”"
                                // Name: RIGHT DOUBLE QUOTATION MARK
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'e':
                            if (strncmp(character + 3, "g;", 2) == 0) {
                                // Character Entity: "&reg;" Char: "®"
                                // Name: REGISTERED SIGN
                                character += 4;
                                length += -3;
                            }
                            break;
                        case 'f':
                            if (strncmp(character + 3, "loor;", 5) == 0) {
                                // Character Entity: "&rfloor;" Char: "⌋"
                                // Name: RIGHT FLOOR
                                character += 7;
                                length += -5;
                            }
                            break;
                        case 'h':
                            if (strncmp(character + 3, "o;", 2) == 0) {
                                // Character Entity: "&rho;" Char: "ρ"
                                // Name: GREEK SMALL LETTER RHO
                                character += 4;
                                length += -3;
                            }
                            break;
                        case 'l':
                            if (strncmp(character + 3, "m;", 2) == 0) {
                                // Character Entity: "&rlm;" Char: "‏"
                                // Name: RIGHT-TO-LEFT MARK
                                character += 4;
                                length += -2;
                            }
                            break;
                        case 's':
                            switch (character[3]) {
                                case 'a':
                                    if (strncmp(character + 4, "quo;", 4) == 0) {
                                        // Character Entity: "&rsaquo;" Char: "›"
                                        // Name: SINGLE RIGHT-POINTING ANGLE QUOTATION MARK
                                        character += 7;
                                        length += -5;
                                    }
                                    break;
                                case 'q':
                                    if (strncmp(character + 4, "uo;", 3) == 0) {
                                        // Character Entity: "&rsquo;" Char: "’"
                                        // Name: RIGHT SINGLE QUOTATION MARK
                                        character += 6;
                                        length += -4;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 's':
                    switch (character[2]) {
                        case 'b':
                            if (strncmp(character + 3, "quo;", 4) == 0) {
                                // Character Entity: "&sbquo;" Char: "‚"
                                // Name: SINGLE LOW-9 QUOTATION MARK
                                character += 6;
                                length += -4;
                            }
                            break;
                        case 'c':
                            if (strncmp(character + 3, "aron;", 5) == 0) {
                                // Character Entity: "&scaron;" Char: "š"
                                // Name: LATIN SMALL LETTER S WITH CARON
                                character += 7;
                                length += -6;
                            }
                            break;
                        case 'd':
                            if (strncmp(character + 3, "ot;", 3) == 0) {
                                // Character Entity: "&sdot;" Char: "⋅"
                                // Name: DOT OPERATOR
                                character += 5;
                                length += -3;
                            }
                            break;
                        case 'e':
                            if (strncmp(character + 3, "ct;", 3) == 0) {
                                // Character Entity: "&sect;" Char: "§"
                                // Name: SECTION SIGN
                                character += 5;
                                length += -4;
                            }
                            break;
                        case 'h':
                            if (strncmp(character + 3, "y;", 2) == 0) {
                                // Character Entity: "&shy;" Char: "­"
                                // Name: SOFT HYPHEN
                                character += 4;
                                length += -3;
                            }
                            break;
                        case 'i':
                            switch (character[3]) {
                                case 'g':
                                    if (strncmp(character + 4, "ma", 2) == 0) {
                                        switch (character[6]) {
                                            case ';':
                                                // Character Entity: "&sigma;" Char: "σ"
                                                // Name: GREEK SMALL LETTER SIGMA
                                                character += 6;
                                                length += -5;
                                                break;
                                            case 'f':
                                                if (character[7] == ';') {
                                                    // Character Entity: "&sigmaf;" Char: "ς"
                                                    // Name: GREEK SMALL LETTER FINAL SIGMA
                                                    character += 7;
                                                    length += -6;
                                                }
                                                break;
                                        }
                                    }
                                    break;
                                case 'm':
                                    if (character[4] == ';') {
                                        // Character Entity: "&sim;" Char: "∼"
                                        // Name: TILDE OPERATOR
                                        character += 4;
                                        length += -2;
                                    }
                                    break;
                            }
                            break;
                        case 'p':
                            if (strncmp(character + 3, "ades;", 5) == 0) {
                                // Character Entity: "&spades;" Char: "♠"
                                // Name: BLACK SPADE SUIT
                                character += 7;
                                length += -5;
                            }
                            break;
                        case 'u':
                            switch (character[3]) {
                                case 'b':
                                    switch (character[4]) {
                                        case ';':
                                            // Character Entity: "&sub;" Char: "⊂"
                                            // Name: SUBSET OF
                                            character += 4;
                                            length += -2;
                                            break;
                                        case 'e':
                                            if (character[5] == ';') {
                                                // Character Entity: "&sube;" Char: "⊆"
                                                // Name: SUBSET OF OR EQUAL TO
                                                character += 5;
                                                length += -3;
                                            }
                                            break;
                                    }
                                    break;
                                case 'm':
                                    if (character[4] == ';') {
                                        // Character Entity: "&sum;" Char: "∑"
                                        // Name: N-ARY SUMMATION
                                        character += 4;
                                        length += -2;
                                    }
                                    break;
                                case 'p':
                                    switch (character[4]) {
                                        case '1':
                                            if (character[5] == ';') {
                                                // Character Entity: "&sup1;" Char: "¹"
                                                // Name: SUPERSCRIPT ONE
                                                character += 5;
                                                length += -4;
                                            }
                                            break;
                                        case '2':
                                            if (character[5] == ';') {
                                                // Character Entity: "&sup2;" Char: "²"
                                                // Name: SUPERSCRIPT TWO
                                                character += 5;
                                                length += -4;
                                            }
                                            break;
                                        case '3':
                                            if (character[5] == ';') {
                                                // Character Entity: "&sup3;" Char: "³"
                                                // Name: SUPERSCRIPT THREE
                                                character += 5;
                                                length += -4;
                                            }
                                            break;
                                        case ';':
                                            // Character Entity: "&sup;" Char: "⊃"
                                            // Name: SUPERSET OF
                                            character += 4;
                                            length += -2;
                                            break;
                                        case 'e':
                                            if (character[5] == ';') {
                                                // Character Entity: "&supe;" Char: "⊇"
                                                // Name: SUPERSET OF OR EQUAL TO
                                                character += 5;
                                                length += -3;
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 't':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "u;", 2) == 0) {
                                // Character Entity: "&tau;" Char: "τ"
                                // Name: GREEK SMALL LETTER TAU
                                character += 4;
                                length += -3;
                            }
                            break;
                        case 'h':
                            switch (character[3]) {
                                case 'e':
                                    switch (character[4]) {
                                        case 'r':
                                            if (strncmp(character + 5, "e4;", 3) == 0) {
                                                // Character Entity: "&there4;" Char: "∴"
                                                // Name: THEREFORE
                                                character += 7;
                                                length += -5;
                                            }
                                            break;
                                        case 't':
                                            if (character[5] == 'a') {
                                                switch (character[6]) {
                                                    case ';':
                                                        // Character Entity: "&theta;" Char: "θ"
                                                        // Name: GREEK SMALL LETTER THETA
                                                        character += 6;
                                                        length += -5;
                                                        break;
                                                    case 's':
                                                        if (strncmp(character + 7, "ym;", 3) == 0) {
                                                            // Character Entity: "&thetasym;" Char: "ϑ"
                                                            // Name: GREEK THETA SYMBOL
                                                            character += 9;
                                                            length += -8;
                                                        }
                                                        break;
                                                }
                                            }
                                            break;
                                    }
                                    break;
                                case 'i':
                                    if (strncmp(character + 4, "nsp;", 4) == 0) {
                                        // Character Entity: "&thinsp;" Char: " "
                                        // Name: THIN SPACE
                                        character += 7;
                                        length += -5;
                                    }
                                    break;
                            }
                            break;
                        case 'i':
                            switch (character[3]) {
                                case 'l':
                                    if (strncmp(character + 4, "de;", 3) == 0) {
                                        // Character Entity: "&tilde;" Char: "˜"
                                        // Name: SMALL TILDE
                                        character += 6;
                                        length += -5;
                                    }
                                    break;
                                case 'm':
                                    if (strncmp(character + 4, "es;", 3) == 0) {
                                        // Character Entity: "&times;" Char: "×"
                                        // Name: MULTIPLICATION SIGN
                                        character += 6;
                                        length += -5;
                                    }
                                    break;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "ade;", 4) == 0) {
                                // Character Entity: "&trade;" Char: "™"
                                // Name: TRADE MARK SIGN
                                character += 6;
                                length += -4;
                            }
                            break;
                    }
                    break;
                case 'u':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "rr;", 3) == 0) {
                                // Character Entity: "&uarr;" Char: "↑"
                                // Name: UPWARDS ARROW
                                character += 5;
                                length += -3;
                            }
                            break;
                        case 'm':
                            if (strncmp(character + 3, "l;", 2) == 0) {
                                // Character Entity: "&uml;" Char: "¨"
                                // Name: DIAERESIS
                                character += 4;
                                length += -3;
                            }
                            break;
                        case 'p':
                            if (strncmp(character + 3, "si", 2) == 0) {
                                switch (character[5]) {
                                    case 'h':
                                        if (character[6] == ';') {
                                            // Character Entity: "&upsih;" Char: "ϒ"
                                            // Name: GREEK UPSILON WITH HOOK SYMBOL
                                            character += 6;
                                            length += -5;
                                        }
                                        break;
                                    case 'l':
                                        if (strncmp(character + 6, "on;", 3) == 0) {
                                            // Character Entity: "&upsilon;" Char: "υ"
                                            // Name: GREEK SMALL LETTER UPSILON
                                            character += 8;
                                            length += -7;
                                        }
                                        break;
                                }
                            }
                            break;
                    }
                    break;
                case 'x':
                    if (strncmp(character + 2, "i;", 2) == 0) {
                        // Character Entity: "&xi;" Char: "ξ"
                        // Name: GREEK SMALL LETTER XI
                        character += 3;
                        length += -2;
                    }
                    break;
                case 'y':
                    if (strncmp(character + 2, "en;", 3) == 0) {
                        // Character Entity: "&yen;" Char: "¥"
                        // Name: YEN SIGN
                        character += 4;
                        length += -3;
                    }
                    break;
                case 'z':
                    switch (character[2]) {
                        case 'e':
                            if (strncmp(character + 3, "ta;", 3) == 0) {
                                // Character Entity: "&zeta;" Char: "ζ"
                                // Name: GREEK SMALL LETTER ZETA
                                character += 5;
                                length += -4;
                            }
                            break;
                        case 'w':
                            switch (character[3]) {
                                case 'j':
                                    if (character[4] == ';') {
                                        // Character Entity: "&zwj;" Char: "‍"
                                        // Name: ZERO WIDTH JOINER
                                        character += 4;
                                        length += -2;
                                    }
                                    break;
                                case 'n':
                                    if (strncmp(character + 4, "j;", 2) == 0) {
                                        // Character Entity: "&zwnj;" Char: "‌"
                                        // Name: ZERO WIDTH NON-JOINER
                                        character += 5;
                                        length += -3;
                                    }
                                    break;
                            }
                            break;
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

char* replace_common_character_entities(const char* input_string) {
    size_t buffer_size = get_size_for_replacing_common_character_entities(input_string);
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
                case 'A':
                    if (strncmp(character + 2, "lpha;", 5) == 0) {
                        // Character Entity: "&Alpha;" Char: "Α"
                        // Name: GREEK CAPITAL LETTER ALPHA
                        character += 6;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\x91", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'B':
                    if (strncmp(character + 2, "eta;", 4) == 0) {
                        // Character Entity: "&Beta;" Char: "Β"
                        // Name: GREEK CAPITAL LETTER BETA
                        character += 5;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\x92", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'C':
                    if (strncmp(character + 2, "hi;", 3) == 0) {
                        // Character Entity: "&Chi;" Char: "Χ"
                        // Name: GREEK CAPITAL LETTER CHI
                        character += 4;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\xa7", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'D':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "gger;", 5) == 0) {
                                // Character Entity: "&Dagger;" Char: "‡"
                                // Name: DOUBLE DAGGER
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\xa1", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'e':
                            if (strncmp(character + 3, "lta;", 4) == 0) {
                                // Character Entity: "&Delta;" Char: "Δ"
                                // Name: GREEK CAPITAL LETTER DELTA
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\x94", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'E':
                    switch (character[2]) {
                        case 'p':
                            if (strncmp(character + 3, "silon;", 6) == 0) {
                                // Character Entity: "&Epsilon;" Char: "Ε"
                                // Name: GREEK CAPITAL LETTER EPSILON
                                character += 8;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\x95", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 't':
                            if (strncmp(character + 3, "a;", 2) == 0) {
                                // Character Entity: "&Eta;" Char: "Η"
                                // Name: GREEK CAPITAL LETTER ETA
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\x97", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'G':
                    if (strncmp(character + 2, "amma;", 5) == 0) {
                        // Character Entity: "&Gamma;" Char: "Γ"
                        // Name: GREEK CAPITAL LETTER GAMMA
                        character += 6;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\x93", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'I':
                    if (strncmp(character + 2, "ota;", 4) == 0) {
                        // Character Entity: "&Iota;" Char: "Ι"
                        // Name: GREEK CAPITAL LETTER IOTA
                        character += 5;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\x99", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'K':
                    if (strncmp(character + 2, "appa;", 5) == 0) {
                        // Character Entity: "&Kappa;" Char: "Κ"
                        // Name: GREEK CAPITAL LETTER KAPPA
                        character += 6;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\x9a", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'L':
                    if (strncmp(character + 2, "ambda;", 6) == 0) {
                        // Character Entity: "&Lambda;" Char: "Λ"
                        // Name: GREEK CAPITAL LETTER LAMDA
                        character += 7;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\x9b", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'M':
                    if (strncmp(character + 2, "u;", 2) == 0) {
                        // Character Entity: "&Mu;" Char: "Μ"
                        // Name: GREEK CAPITAL LETTER MU
                        character += 3;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\x9c", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'N':
                    if (strncmp(character + 2, "u;", 2) == 0) {
                        // Character Entity: "&Nu;" Char: "Ν"
                        // Name: GREEK CAPITAL LETTER NU
                        character += 3;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\x9d", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'O':
                    switch (character[2]) {
                        case 'E':
                            if (strncmp(character + 3, "lig;", 4) == 0) {
                                // Character Entity: "&OElig;" Char: "Œ"
                                // Name: LATIN CAPITAL LIGATURE OE
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc5\x92", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'm':
                            switch (character[3]) {
                                case 'e':
                                    if (strncmp(character + 4, "ga;", 3) == 0) {
                                        // Character Entity: "&Omega;" Char: "Ω"
                                        // Name: GREEK CAPITAL LETTER OMEGA
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xce\xa9", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'i':
                                    if (strncmp(character + 4, "cron;", 5) == 0) {
                                        // Character Entity: "&Omicron;" Char: "Ο"
                                        // Name: GREEK CAPITAL LETTER OMICRON
                                        character += 8;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xce\x9f", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 'P':
                    switch (character[2]) {
                        case 'h':
                            if (strncmp(character + 3, "i;", 2) == 0) {
                                // Character Entity: "&Phi;" Char: "Φ"
                                // Name: GREEK CAPITAL LETTER PHI
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xa6", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'i':
                            if (character[3] == ';') {
                                // Character Entity: "&Pi;" Char: "Π"
                                // Name: GREEK CAPITAL LETTER PI
                                character += 3;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xa0", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "ime;", 4) == 0) {
                                // Character Entity: "&Prime;" Char: "″"
                                // Name: DOUBLE PRIME
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\xb3", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 's':
                            if (strncmp(character + 3, "i;", 2) == 0) {
                                // Character Entity: "&Psi;" Char: "Ψ"
                                // Name: GREEK CAPITAL LETTER PSI
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xa8", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'R':
                    if (strncmp(character + 2, "ho;", 3) == 0) {
                        // Character Entity: "&Rho;" Char: "Ρ"
                        // Name: GREEK CAPITAL LETTER RHO
                        character += 4;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\xa1", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'S':
                    switch (character[2]) {
                        case 'c':
                            if (strncmp(character + 3, "aron;", 5) == 0) {
                                // Character Entity: "&Scaron;" Char: "Š"
                                // Name: LATIN CAPITAL LETTER S WITH CARON
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc5\xa0", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'i':
                            if (strncmp(character + 3, "gma;", 4) == 0) {
                                // Character Entity: "&Sigma;" Char: "Σ"
                                // Name: GREEK CAPITAL LETTER SIGMA
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xa3", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'T':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "u;", 2) == 0) {
                                // Character Entity: "&Tau;" Char: "Τ"
                                // Name: GREEK CAPITAL LETTER TAU
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xa4", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'h':
                            if (strncmp(character + 3, "eta;", 4) == 0) {
                                // Character Entity: "&Theta;" Char: "Θ"
                                // Name: GREEK CAPITAL LETTER THETA
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\x98", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'U':
                    if (strncmp(character + 2, "psilon;", 7) == 0) {
                        // Character Entity: "&Upsilon;" Char: "Υ"
                        // Name: GREEK CAPITAL LETTER UPSILON
                        character += 8;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\xa5", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'X':
                    if (strncmp(character + 2, "i;", 2) == 0) {
                        // Character Entity: "&Xi;" Char: "Ξ"
                        // Name: GREEK CAPITAL LETTER XI
                        character += 3;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\x9e", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'Y':
                    if (strncmp(character + 2, "uml;", 4) == 0) {
                        // Character Entity: "&Yuml;" Char: "Ÿ"
                        // Name: LATIN CAPITAL LETTER Y WITH DIAERESIS
                        character += 5;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xc5\xb8", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'Z':
                    if (strncmp(character + 2, "eta;", 4) == 0) {
                        // Character Entity: "&Zeta;" Char: "Ζ"
                        // Name: GREEK CAPITAL LETTER ZETA
                        character += 5;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\x96", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'a':
                    switch (character[2]) {
                        case 'c':
                            if (strncmp(character + 3, "ute;", 4) == 0) {
                                // Character Entity: "&acute;" Char: "´"
                                // Name: ACUTE ACCENT
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xb4", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'l':
                            if (strncmp(character + 3, "pha;", 4) == 0) {
                                // Character Entity: "&alpha;" Char: "α"
                                // Name: GREEK SMALL LETTER ALPHA
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xb1", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
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
                        case 'n':
                            switch (character[3]) {
                                case 'd':
                                    if (character[4] == ';') {
                                        // Character Entity: "&and;" Char: "∧"
                                        // Name: LOGICAL AND
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\xa7", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'g':
                                    if (character[4] == ';') {
                                        // Character Entity: "&ang;" Char: "∠"
                                        // Name: ANGLE
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\xa0", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 's':
                            if (strncmp(character + 3, "ymp;", 4) == 0) {
                                // Character Entity: "&asymp;" Char: "≈"
                                // Name: ALMOST EQUAL TO
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x89\x88", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'b':
                    switch (character[2]) {
                        case 'd':
                            if (strncmp(character + 3, "quo;", 4) == 0) {
                                // Character Entity: "&bdquo;" Char: "„"
                                // Name: DOUBLE LOW-9 QUOTATION MARK
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\x9e", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'e':
                            if (strncmp(character + 3, "ta;", 3) == 0) {
                                // Character Entity: "&beta;" Char: "β"
                                // Name: GREEK SMALL LETTER BETA
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xb2", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "vbar;", 5) == 0) {
                                // Character Entity: "&brvbar;" Char: "¦"
                                // Name: BROKEN BAR
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xa6", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'u':
                            if (strncmp(character + 3, "ll;", 3) == 0) {
                                // Character Entity: "&bull;" Char: "•"
                                // Name: BULLET
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\xa2", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'c':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "p;", 2) == 0) {
                                // Character Entity: "&cap;" Char: "∩"
                                // Name: INTERSECTION
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x88\xa9", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'e':
                            switch (character[3]) {
                                case 'd':
                                    if (strncmp(character + 4, "il;", 3) == 0) {
                                        // Character Entity: "&cedil;" Char: "¸"
                                        // Name: CEDILLA
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc2\xb8", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'n':
                                    if (strncmp(character + 4, "t;", 2) == 0) {
                                        // Character Entity: "&cent;" Char: "¢"
                                        // Name: CENT SIGN
                                        character += 5;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc2\xa2", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'h':
                            if (strncmp(character + 3, "i;", 2) == 0) {
                                // Character Entity: "&chi;" Char: "χ"
                                // Name: GREEK SMALL LETTER CHI
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xcf\x87", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'i':
                            if (strncmp(character + 3, "rc;", 3) == 0) {
                                // Character Entity: "&circ;" Char: "ˆ"
                                // Name: MODIFIER LETTER CIRCUMFLEX ACCENT
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xcb\x86", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'l':
                            if (strncmp(character + 3, "ubs;", 4) == 0) {
                                // Character Entity: "&clubs;" Char: "♣"
                                // Name: BLACK CLUB SUIT
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x99\xa3", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'o':
                            switch (character[3]) {
                                case 'n':
                                    if (strncmp(character + 4, "g;", 2) == 0) {
                                        // Character Entity: "&cong;" Char: "≅"
                                        // Name: APPROXIMATELY EQUAL TO
                                        character += 5;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x89\x85", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'p':
                                    if (strncmp(character + 4, "y;", 2) == 0) {
                                        // Character Entity: "&copy;" Char: "©"
                                        // Name: COPYRIGHT SIGN
                                        character += 5;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc2\xa9", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "arr;", 4) == 0) {
                                // Character Entity: "&crarr;" Char: "↵"
                                // Name: DOWNWARDS ARROW WITH CORNER LEFTWARDS
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x86\xb5", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'u':
                            switch (character[3]) {
                                case 'p':
                                    if (character[4] == ';') {
                                        // Character Entity: "&cup;" Char: "∪"
                                        // Name: UNION
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\xaa", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'r':
                                    if (strncmp(character + 4, "ren;", 4) == 0) {
                                        // Character Entity: "&curren;" Char: "¤"
                                        // Name: CURRENCY SIGN
                                        character += 7;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc2\xa4", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 'd':
                    switch (character[2]) {
                        case 'a':
                            switch (character[3]) {
                                case 'g':
                                    if (strncmp(character + 4, "ger;", 4) == 0) {
                                        // Character Entity: "&dagger;" Char: "†"
                                        // Name: DAGGER
                                        character += 7;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\xa0", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'r':
                                    if (strncmp(character + 4, "r;", 2) == 0) {
                                        // Character Entity: "&darr;" Char: "↓"
                                        // Name: DOWNWARDS ARROW
                                        character += 5;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x86\x93", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'e':
                            switch (character[3]) {
                                case 'g':
                                    if (character[4] == ';') {
                                        // Character Entity: "&deg;" Char: "°"
                                        // Name: DEGREE SIGN
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc2\xb0", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'l':
                                    if (strncmp(character + 4, "ta;", 3) == 0) {
                                        // Character Entity: "&delta;" Char: "δ"
                                        // Name: GREEK SMALL LETTER DELTA
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xce\xb4", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'i':
                            switch (character[3]) {
                                case 'a':
                                    if (strncmp(character + 4, "ms;", 3) == 0) {
                                        // Character Entity: "&diams;" Char: "♦"
                                        // Name: BLACK DIAMOND SUIT
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x99\xa6", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'v':
                                    if (strncmp(character + 4, "ide;", 4) == 0) {
                                        // Character Entity: "&divide;" Char: "÷"
                                        // Name: DIVISION SIGN
                                        character += 7;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc3\xb7", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 'e':
                    switch (character[2]) {
                        case 'm':
                            switch (character[3]) {
                                case 'p':
                                    if (strncmp(character + 4, "ty;", 3) == 0) {
                                        // Character Entity: "&empty;" Char: "∅"
                                        // Name: EMPTY SET
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\x85", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 's':
                                    if (strncmp(character + 4, "p;", 2) == 0) {
                                        // Character Entity: "&emsp;" Char: " "
                                        // Name: EM SPACE
                                        character += 5;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\x83", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'n':
                            if (strncmp(character + 3, "sp;", 3) == 0) {
                                // Character Entity: "&ensp;" Char: " "
                                // Name: EN SPACE
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\x82", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'p':
                            if (strncmp(character + 3, "silon;", 6) == 0) {
                                // Character Entity: "&epsilon;" Char: "ε"
                                // Name: GREEK SMALL LETTER EPSILON
                                character += 8;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xb5", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'q':
                            if (strncmp(character + 3, "uiv;", 4) == 0) {
                                // Character Entity: "&equiv;" Char: "≡"
                                // Name: IDENTICAL TO
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x89\xa1", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 't':
                            if (strncmp(character + 3, "a;", 2) == 0) {
                                // Character Entity: "&eta;" Char: "η"
                                // Name: GREEK SMALL LETTER ETA
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xb7", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'u':
                            if (strncmp(character + 3, "ro;", 3) == 0) {
                                // Character Entity: "&euro;" Char: "€"
                                // Name: EURO SIGN
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x82\xac", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'x':
                            if (strncmp(character + 3, "ist;", 4) == 0) {
                                // Character Entity: "&exist;" Char: "∃"
                                // Name: THERE EXISTS
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x88\x83", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'f':
                    switch (character[2]) {
                        case 'n':
                            if (strncmp(character + 3, "of;", 3) == 0) {
                                // Character Entity: "&fnof;" Char: "ƒ"
                                // Name: LATIN SMALL LETTER F WITH HOOK
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc6\x92", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'o':
                            if (strncmp(character + 3, "rall;", 5) == 0) {
                                // Character Entity: "&forall;" Char: "∀"
                                // Name: FOR ALL
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x88\x80", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "ac", 2) == 0) {
                                switch (character[5]) {
                                    case '1':
                                        switch (character[6]) {
                                            case '2':
                                                if (character[7] == ';') {
                                                    // Character Entity: "&frac12;" Char: "½"
                                                    // Name: VULGAR FRACTION ONE HALF
                                                    character += 7;

                                                    // Copy the string up to the start of the token
                                                    copy_size = substitute_start - input_copy_start;
                                                    memcpy(output_copy_start, input_copy_start, copy_size);
                                                    output_copy_start += copy_size;
                                                    memcpy(output_copy_start, "\xc2\xbd", 2);
                                                    output_copy_start += 2;
                                                    input_copy_start = character + 1;
                                                }
                                                break;
                                            case '4':
                                                if (character[7] == ';') {
                                                    // Character Entity: "&frac14;" Char: "¼"
                                                    // Name: VULGAR FRACTION ONE QUARTER
                                                    character += 7;

                                                    // Copy the string up to the start of the token
                                                    copy_size = substitute_start - input_copy_start;
                                                    memcpy(output_copy_start, input_copy_start, copy_size);
                                                    output_copy_start += copy_size;
                                                    memcpy(output_copy_start, "\xc2\xbc", 2);
                                                    output_copy_start += 2;
                                                    input_copy_start = character + 1;
                                                }
                                                break;
                                        }
                                        break;
                                    case '3':
                                        if (strncmp(character + 6, "4;", 2) == 0) {
                                            // Character Entity: "&frac34;" Char: "¾"
                                            // Name: VULGAR FRACTION THREE QUARTERS
                                            character += 7;

                                            // Copy the string up to the start of the token
                                            copy_size = substitute_start - input_copy_start;
                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                            output_copy_start += copy_size;
                                            memcpy(output_copy_start, "\xc2\xbe", 2);
                                            output_copy_start += 2;
                                            input_copy_start = character + 1;
                                        }
                                        break;
                                }
                            }
                            break;
                    }
                    break;
                case 'g':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "mma;", 4) == 0) {
                                // Character Entity: "&gamma;" Char: "γ"
                                // Name: GREEK SMALL LETTER GAMMA
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xb3", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'e':
                            if (character[3] == ';') {
                                // Character Entity: "&ge;" Char: "≥"
                                // Name: GREATER-THAN OR EQUAL TO
                                character += 3;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x89\xa5", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 't':
                            if (character[3] == ';') {
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
                    }
                    break;
                case 'h':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "rr;", 3) == 0) {
                                // Character Entity: "&harr;" Char: "↔"
                                // Name: LEFT RIGHT ARROW
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x86\x94", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'e':
                            switch (character[3]) {
                                case 'a':
                                    if (strncmp(character + 4, "rts;", 4) == 0) {
                                        // Character Entity: "&hearts;" Char: "♥"
                                        // Name: BLACK HEART SUIT
                                        character += 7;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x99\xa5", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'l':
                                    if (strncmp(character + 4, "lip;", 4) == 0) {
                                        // Character Entity: "&hellip;" Char: "…"
                                        // Name: HORIZONTAL ELLIPSIS
                                        character += 7;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\xa6", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 'i':
                    switch (character[2]) {
                        case 'e':
                            if (strncmp(character + 3, "xcl;", 4) == 0) {
                                // Character Entity: "&iexcl;" Char: "¡"
                                // Name: INVERTED EXCLAMATION MARK
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xa1", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'n':
                            switch (character[3]) {
                                case 'f':
                                    if (strncmp(character + 4, "in;", 3) == 0) {
                                        // Character Entity: "&infin;" Char: "∞"
                                        // Name: INFINITY
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\x9e", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 't':
                                    if (character[4] == ';') {
                                        // Character Entity: "&int;" Char: "∫"
                                        // Name: INTEGRAL
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\xab", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'o':
                            if (strncmp(character + 3, "ta;", 3) == 0) {
                                // Character Entity: "&iota;" Char: "ι"
                                // Name: GREEK SMALL LETTER IOTA
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xb9", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'q':
                            if (strncmp(character + 3, "uest;", 5) == 0) {
                                // Character Entity: "&iquest;" Char: "¿"
                                // Name: INVERTED QUESTION MARK
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xbf", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 's':
                            if (strncmp(character + 3, "in;", 3) == 0) {
                                // Character Entity: "&isin;" Char: "∈"
                                // Name: ELEMENT OF
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x88\x88", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'k':
                    if (strncmp(character + 2, "appa;", 5) == 0) {
                        // Character Entity: "&kappa;" Char: "κ"
                        // Name: GREEK SMALL LETTER KAPPA
                        character += 6;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\xba", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'l':
                    switch (character[2]) {
                        case 'a':
                            switch (character[3]) {
                                case 'm':
                                    if (strncmp(character + 4, "bda;", 4) == 0) {
                                        // Character Entity: "&lambda;" Char: "λ"
                                        // Name: GREEK SMALL LETTER LAMDA
                                        character += 7;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xce\xbb", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'q':
                                    if (strncmp(character + 4, "uo;", 3) == 0) {
                                        // Character Entity: "&laquo;" Char: "«"
                                        // Name: LEFT-POINTING DOUBLE ANGLE QUOTATION MARK
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc2\xab", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'r':
                                    if (strncmp(character + 4, "r;", 2) == 0) {
                                        // Character Entity: "&larr;" Char: "←"
                                        // Name: LEFTWARDS ARROW
                                        character += 5;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x86\x90", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'c':
                            if (strncmp(character + 3, "eil;", 4) == 0) {
                                // Character Entity: "&lceil;" Char: "⌈"
                                // Name: LEFT CEILING
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x8c\x88", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'd':
                            if (strncmp(character + 3, "quo;", 4) == 0) {
                                // Character Entity: "&ldquo;" Char: "“"
                                // Name: LEFT DOUBLE QUOTATION MARK
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\x9c", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'e':
                            if (character[3] == ';') {
                                // Character Entity: "&le;" Char: "≤"
                                // Name: LESS-THAN OR EQUAL TO
                                character += 3;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x89\xa4", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'f':
                            if (strncmp(character + 3, "loor;", 5) == 0) {
                                // Character Entity: "&lfloor;" Char: "⌊"
                                // Name: LEFT FLOOR
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x8c\x8a", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'o':
                            switch (character[3]) {
                                case 'w':
                                    if (strncmp(character + 4, "ast;", 4) == 0) {
                                        // Character Entity: "&lowast;" Char: "∗"
                                        // Name: ASTERISK OPERATOR
                                        character += 7;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\x97", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'z':
                                    if (character[4] == ';') {
                                        // Character Entity: "&loz;" Char: "◊"
                                        // Name: LOZENGE
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x97\x8a", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "m;", 2) == 0) {
                                // Character Entity: "&lrm;" Char: "‎"
                                // Name: LEFT-TO-RIGHT MARK
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\x8e", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 's':
                            switch (character[3]) {
                                case 'a':
                                    if (strncmp(character + 4, "quo;", 4) == 0) {
                                        // Character Entity: "&lsaquo;" Char: "‹"
                                        // Name: SINGLE LEFT-POINTING ANGLE QUOTATION MARK
                                        character += 7;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\xb9", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'q':
                                    if (strncmp(character + 4, "uo;", 3) == 0) {
                                        // Character Entity: "&lsquo;" Char: "‘"
                                        // Name: LEFT SINGLE QUOTATION MARK
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\x98", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 't':
                            if (character[3] == ';') {
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
                    }
                    break;
                case 'm':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "cr;", 3) == 0) {
                                // Character Entity: "&macr;" Char: "¯"
                                // Name: MACRON
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xaf", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'd':
                            if (strncmp(character + 3, "ash;", 4) == 0) {
                                // Character Entity: "&mdash;" Char: "—"
                                // Name: EM DASH
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\x94", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'i':
                            switch (character[3]) {
                                case 'c':
                                    if (strncmp(character + 4, "ro;", 3) == 0) {
                                        // Character Entity: "&micro;" Char: "µ"
                                        // Name: MICRO SIGN
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc2\xb5", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'n':
                                    if (strncmp(character + 4, "us;", 3) == 0) {
                                        // Character Entity: "&minus;" Char: "−"
                                        // Name: MINUS SIGN
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\x92", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'u':
                            if (character[3] == ';') {
                                // Character Entity: "&mu;" Char: "μ"
                                // Name: GREEK SMALL LETTER MU
                                character += 3;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xbc", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'n':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "bla;", 4) == 0) {
                                // Character Entity: "&nabla;" Char: "∇"
                                // Name: NABLA
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x88\x87", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'b':
                            if (strncmp(character + 3, "sp;", 3) == 0) {
                                // Character Entity: "&nbsp;" Char: " "
                                // Name: NO-BREAK SPACE
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xa0", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'd':
                            if (strncmp(character + 3, "ash;", 4) == 0) {
                                // Character Entity: "&ndash;" Char: "–"
                                // Name: EN DASH
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\x93", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'e':
                            if (character[3] == ';') {
                                // Character Entity: "&ne;" Char: "≠"
                                // Name: NOT EQUAL TO
                                character += 3;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x89\xa0", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'i':
                            if (character[3] == ';') {
                                // Character Entity: "&ni;" Char: "∋"
                                // Name: CONTAINS AS MEMBER
                                character += 3;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x88\x8b", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'o':
                            if (character[3] == 't') {
                                switch (character[4]) {
                                    case ';':
                                        // Character Entity: "&not;" Char: "¬"
                                        // Name: NOT SIGN
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc2\xac", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                        break;
                                    case 'i':
                                        if (strncmp(character + 5, "n;", 2) == 0) {
                                            // Character Entity: "&notin;" Char: "∉"
                                            // Name: NOT AN ELEMENT OF
                                            character += 6;

                                            // Copy the string up to the start of the token
                                            copy_size = substitute_start - input_copy_start;
                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                            output_copy_start += copy_size;
                                            memcpy(output_copy_start, "\xe2\x88\x89", 3);
                                            output_copy_start += 3;
                                            input_copy_start = character + 1;
                                        }
                                        break;
                                }
                            }
                            break;
                        case 's':
                            if (strncmp(character + 3, "ub;", 3) == 0) {
                                // Character Entity: "&nsub;" Char: "⊄"
                                // Name: NOT A SUBSET OF
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x8a\x84", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'u':
                            if (character[3] == ';') {
                                // Character Entity: "&nu;" Char: "ν"
                                // Name: GREEK SMALL LETTER NU
                                character += 3;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xbd", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'o':
                    switch (character[2]) {
                        case 'e':
                            if (strncmp(character + 3, "lig;", 4) == 0) {
                                // Character Entity: "&oelig;" Char: "œ"
                                // Name: LATIN SMALL LIGATURE OE
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc5\x93", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'l':
                            if (strncmp(character + 3, "ine;", 4) == 0) {
                                // Character Entity: "&oline;" Char: "‾"
                                // Name: OVERLINE
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\xbe", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'm':
                            switch (character[3]) {
                                case 'e':
                                    if (strncmp(character + 4, "ga;", 3) == 0) {
                                        // Character Entity: "&omega;" Char: "ω"
                                        // Name: GREEK SMALL LETTER OMEGA
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xcf\x89", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'i':
                                    if (strncmp(character + 4, "cron;", 5) == 0) {
                                        // Character Entity: "&omicron;" Char: "ο"
                                        // Name: GREEK SMALL LETTER OMICRON
                                        character += 8;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xce\xbf", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'p':
                            if (strncmp(character + 3, "lus;", 4) == 0) {
                                // Character Entity: "&oplus;" Char: "⊕"
                                // Name: CIRCLED PLUS
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x8a\x95", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'r':
                            switch (character[3]) {
                                case ';':
                                    // Character Entity: "&or;" Char: "∨"
                                    // Name: LOGICAL OR
                                    character += 3;

                                    // Copy the string up to the start of the token
                                    copy_size = substitute_start - input_copy_start;
                                    memcpy(output_copy_start, input_copy_start, copy_size);
                                    output_copy_start += copy_size;
                                    memcpy(output_copy_start, "\xe2\x88\xa8", 3);
                                    output_copy_start += 3;
                                    input_copy_start = character + 1;
                                    break;
                                case 'd':
                                    switch (character[4]) {
                                        case 'f':
                                            if (character[5] == ';') {
                                                // Character Entity: "&ordf;" Char: "ª"
                                                // Name: FEMININE ORDINAL INDICATOR
                                                character += 5;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xc2\xaa", 2);
                                                output_copy_start += 2;
                                                input_copy_start = character + 1;
                                            }
                                            break;
                                        case 'm':
                                            if (character[5] == ';') {
                                                // Character Entity: "&ordm;" Char: "º"
                                                // Name: MASCULINE ORDINAL INDICATOR
                                                character += 5;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xc2\xba", 2);
                                                output_copy_start += 2;
                                                input_copy_start = character + 1;
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;
                        case 't':
                            if (strncmp(character + 3, "imes;", 5) == 0) {
                                // Character Entity: "&otimes;" Char: "⊗"
                                // Name: CIRCLED TIMES
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x8a\x97", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'p':
                    switch (character[2]) {
                        case 'a':
                            if (character[3] == 'r') {
                                switch (character[4]) {
                                    case 'a':
                                        if (character[5] == ';') {
                                            // Character Entity: "&para;" Char: "¶"
                                            // Name: PILCROW SIGN
                                            character += 5;

                                            // Copy the string up to the start of the token
                                            copy_size = substitute_start - input_copy_start;
                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                            output_copy_start += copy_size;
                                            memcpy(output_copy_start, "\xc2\xb6", 2);
                                            output_copy_start += 2;
                                            input_copy_start = character + 1;
                                        }
                                        break;
                                    case 't':
                                        if (character[5] == ';') {
                                            // Character Entity: "&part;" Char: "∂"
                                            // Name: PARTIAL DIFFERENTIAL
                                            character += 5;

                                            // Copy the string up to the start of the token
                                            copy_size = substitute_start - input_copy_start;
                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                            output_copy_start += copy_size;
                                            memcpy(output_copy_start, "\xe2\x88\x82", 3);
                                            output_copy_start += 3;
                                            input_copy_start = character + 1;
                                        }
                                        break;
                                }
                            }
                            break;
                        case 'e':
                            if (character[3] == 'r') {
                                switch (character[4]) {
                                    case 'm':
                                        if (strncmp(character + 5, "il;", 3) == 0) {
                                            // Character Entity: "&permil;" Char: "‰"
                                            // Name: PER MILLE SIGN
                                            character += 7;

                                            // Copy the string up to the start of the token
                                            copy_size = substitute_start - input_copy_start;
                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                            output_copy_start += copy_size;
                                            memcpy(output_copy_start, "\xe2\x80\xb0", 3);
                                            output_copy_start += 3;
                                            input_copy_start = character + 1;
                                        }
                                        break;
                                    case 'p':
                                        if (character[5] == ';') {
                                            // Character Entity: "&perp;" Char: "⊥"
                                            // Name: UP TACK
                                            character += 5;

                                            // Copy the string up to the start of the token
                                            copy_size = substitute_start - input_copy_start;
                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                            output_copy_start += copy_size;
                                            memcpy(output_copy_start, "\xe2\x8a\xa5", 3);
                                            output_copy_start += 3;
                                            input_copy_start = character + 1;
                                        }
                                        break;
                                }
                            }
                            break;
                        case 'h':
                            if (strncmp(character + 3, "i;", 2) == 0) {
                                // Character Entity: "&phi;" Char: "φ"
                                // Name: GREEK SMALL LETTER PHI
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xcf\x86", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'i':
                            switch (character[3]) {
                                case ';':
                                    // Character Entity: "&pi;" Char: "π"
                                    // Name: GREEK SMALL LETTER PI
                                    character += 3;

                                    // Copy the string up to the start of the token
                                    copy_size = substitute_start - input_copy_start;
                                    memcpy(output_copy_start, input_copy_start, copy_size);
                                    output_copy_start += copy_size;
                                    memcpy(output_copy_start, "\xcf\x80", 2);
                                    output_copy_start += 2;
                                    input_copy_start = character + 1;
                                    break;
                                case 'v':
                                    if (character[4] == ';') {
                                        // Character Entity: "&piv;" Char: "ϖ"
                                        // Name: GREEK PI SYMBOL
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xcf\x96", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'l':
                            if (strncmp(character + 3, "usmn;", 5) == 0) {
                                // Character Entity: "&plusmn;" Char: "±"
                                // Name: PLUS-MINUS SIGN
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xb1", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'o':
                            if (strncmp(character + 3, "und;", 4) == 0) {
                                // Character Entity: "&pound;" Char: "£"
                                // Name: POUND SIGN
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xa3", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'r':
                            switch (character[3]) {
                                case 'i':
                                    if (strncmp(character + 4, "me;", 3) == 0) {
                                        // Character Entity: "&prime;" Char: "′"
                                        // Name: PRIME
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\xb2", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'o':
                                    switch (character[4]) {
                                        case 'd':
                                            if (character[5] == ';') {
                                                // Character Entity: "&prod;" Char: "∏"
                                                // Name: N-ARY PRODUCT
                                                character += 5;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xe2\x88\x8f", 3);
                                                output_copy_start += 3;
                                                input_copy_start = character + 1;
                                            }
                                            break;
                                        case 'p':
                                            if (character[5] == ';') {
                                                // Character Entity: "&prop;" Char: "∝"
                                                // Name: PROPORTIONAL TO
                                                character += 5;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xe2\x88\x9d", 3);
                                                output_copy_start += 3;
                                                input_copy_start = character + 1;
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;
                        case 's':
                            if (strncmp(character + 3, "i;", 2) == 0) {
                                // Character Entity: "&psi;" Char: "ψ"
                                // Name: GREEK SMALL LETTER PSI
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xcf\x88", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'r':
                    switch (character[2]) {
                        case 'a':
                            switch (character[3]) {
                                case 'd':
                                    if (strncmp(character + 4, "ic;", 3) == 0) {
                                        // Character Entity: "&radic;" Char: "√"
                                        // Name: SQUARE ROOT
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\x9a", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'q':
                                    if (strncmp(character + 4, "uo;", 3) == 0) {
                                        // Character Entity: "&raquo;" Char: "»"
                                        // Name: RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc2\xbb", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'r':
                                    if (strncmp(character + 4, "r;", 2) == 0) {
                                        // Character Entity: "&rarr;" Char: "→"
                                        // Name: RIGHTWARDS ARROW
                                        character += 5;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x86\x92", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'c':
                            if (strncmp(character + 3, "eil;", 4) == 0) {
                                // Character Entity: "&rceil;" Char: "⌉"
                                // Name: RIGHT CEILING
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x8c\x89", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'd':
                            if (strncmp(character + 3, "quo;", 4) == 0) {
                                // Character Entity: "&rdquo;" Char: "”"
                                // Name: RIGHT DOUBLE QUOTATION MARK
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\x9d", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'e':
                            if (strncmp(character + 3, "g;", 2) == 0) {
                                // Character Entity: "&reg;" Char: "®"
                                // Name: REGISTERED SIGN
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xae", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'f':
                            if (strncmp(character + 3, "loor;", 5) == 0) {
                                // Character Entity: "&rfloor;" Char: "⌋"
                                // Name: RIGHT FLOOR
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x8c\x8b", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'h':
                            if (strncmp(character + 3, "o;", 2) == 0) {
                                // Character Entity: "&rho;" Char: "ρ"
                                // Name: GREEK SMALL LETTER RHO
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xcf\x81", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'l':
                            if (strncmp(character + 3, "m;", 2) == 0) {
                                // Character Entity: "&rlm;" Char: "‏"
                                // Name: RIGHT-TO-LEFT MARK
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\x8f", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 's':
                            switch (character[3]) {
                                case 'a':
                                    if (strncmp(character + 4, "quo;", 4) == 0) {
                                        // Character Entity: "&rsaquo;" Char: "›"
                                        // Name: SINGLE RIGHT-POINTING ANGLE QUOTATION MARK
                                        character += 7;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\xba", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'q':
                                    if (strncmp(character + 4, "uo;", 3) == 0) {
                                        // Character Entity: "&rsquo;" Char: "’"
                                        // Name: RIGHT SINGLE QUOTATION MARK
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\x99", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 's':
                    switch (character[2]) {
                        case 'b':
                            if (strncmp(character + 3, "quo;", 4) == 0) {
                                // Character Entity: "&sbquo;" Char: "‚"
                                // Name: SINGLE LOW-9 QUOTATION MARK
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x80\x9a", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'c':
                            if (strncmp(character + 3, "aron;", 5) == 0) {
                                // Character Entity: "&scaron;" Char: "š"
                                // Name: LATIN SMALL LETTER S WITH CARON
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc5\xa1", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'd':
                            if (strncmp(character + 3, "ot;", 3) == 0) {
                                // Character Entity: "&sdot;" Char: "⋅"
                                // Name: DOT OPERATOR
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x8b\x85", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'e':
                            if (strncmp(character + 3, "ct;", 3) == 0) {
                                // Character Entity: "&sect;" Char: "§"
                                // Name: SECTION SIGN
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xa7", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'h':
                            if (strncmp(character + 3, "y;", 2) == 0) {
                                // Character Entity: "&shy;" Char: "­"
                                // Name: SOFT HYPHEN
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xad", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'i':
                            switch (character[3]) {
                                case 'g':
                                    if (strncmp(character + 4, "ma", 2) == 0) {
                                        switch (character[6]) {
                                            case ';':
                                                // Character Entity: "&sigma;" Char: "σ"
                                                // Name: GREEK SMALL LETTER SIGMA
                                                character += 6;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xcf\x83", 2);
                                                output_copy_start += 2;
                                                input_copy_start = character + 1;
                                                break;
                                            case 'f':
                                                if (character[7] == ';') {
                                                    // Character Entity: "&sigmaf;" Char: "ς"
                                                    // Name: GREEK SMALL LETTER FINAL SIGMA
                                                    character += 7;

                                                    // Copy the string up to the start of the token
                                                    copy_size = substitute_start - input_copy_start;
                                                    memcpy(output_copy_start, input_copy_start, copy_size);
                                                    output_copy_start += copy_size;
                                                    memcpy(output_copy_start, "\xcf\x82", 2);
                                                    output_copy_start += 2;
                                                    input_copy_start = character + 1;
                                                }
                                                break;
                                        }
                                    }
                                    break;
                                case 'm':
                                    if (character[4] == ';') {
                                        // Character Entity: "&sim;" Char: "∼"
                                        // Name: TILDE OPERATOR
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\xbc", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'p':
                            if (strncmp(character + 3, "ades;", 5) == 0) {
                                // Character Entity: "&spades;" Char: "♠"
                                // Name: BLACK SPADE SUIT
                                character += 7;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x99\xa0", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'u':
                            switch (character[3]) {
                                case 'b':
                                    switch (character[4]) {
                                        case ';':
                                            // Character Entity: "&sub;" Char: "⊂"
                                            // Name: SUBSET OF
                                            character += 4;

                                            // Copy the string up to the start of the token
                                            copy_size = substitute_start - input_copy_start;
                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                            output_copy_start += copy_size;
                                            memcpy(output_copy_start, "\xe2\x8a\x82", 3);
                                            output_copy_start += 3;
                                            input_copy_start = character + 1;
                                            break;
                                        case 'e':
                                            if (character[5] == ';') {
                                                // Character Entity: "&sube;" Char: "⊆"
                                                // Name: SUBSET OF OR EQUAL TO
                                                character += 5;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xe2\x8a\x86", 3);
                                                output_copy_start += 3;
                                                input_copy_start = character + 1;
                                            }
                                            break;
                                    }
                                    break;
                                case 'm':
                                    if (character[4] == ';') {
                                        // Character Entity: "&sum;" Char: "∑"
                                        // Name: N-ARY SUMMATION
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x88\x91", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'p':
                                    switch (character[4]) {
                                        case '1':
                                            if (character[5] == ';') {
                                                // Character Entity: "&sup1;" Char: "¹"
                                                // Name: SUPERSCRIPT ONE
                                                character += 5;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xc2\xb9", 2);
                                                output_copy_start += 2;
                                                input_copy_start = character + 1;
                                            }
                                            break;
                                        case '2':
                                            if (character[5] == ';') {
                                                // Character Entity: "&sup2;" Char: "²"
                                                // Name: SUPERSCRIPT TWO
                                                character += 5;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xc2\xb2", 2);
                                                output_copy_start += 2;
                                                input_copy_start = character + 1;
                                            }
                                            break;
                                        case '3':
                                            if (character[5] == ';') {
                                                // Character Entity: "&sup3;" Char: "³"
                                                // Name: SUPERSCRIPT THREE
                                                character += 5;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xc2\xb3", 2);
                                                output_copy_start += 2;
                                                input_copy_start = character + 1;
                                            }
                                            break;
                                        case ';':
                                            // Character Entity: "&sup;" Char: "⊃"
                                            // Name: SUPERSET OF
                                            character += 4;

                                            // Copy the string up to the start of the token
                                            copy_size = substitute_start - input_copy_start;
                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                            output_copy_start += copy_size;
                                            memcpy(output_copy_start, "\xe2\x8a\x83", 3);
                                            output_copy_start += 3;
                                            input_copy_start = character + 1;
                                            break;
                                        case 'e':
                                            if (character[5] == ';') {
                                                // Character Entity: "&supe;" Char: "⊇"
                                                // Name: SUPERSET OF OR EQUAL TO
                                                character += 5;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xe2\x8a\x87", 3);
                                                output_copy_start += 3;
                                                input_copy_start = character + 1;
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case 't':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "u;", 2) == 0) {
                                // Character Entity: "&tau;" Char: "τ"
                                // Name: GREEK SMALL LETTER TAU
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xcf\x84", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'h':
                            switch (character[3]) {
                                case 'e':
                                    switch (character[4]) {
                                        case 'r':
                                            if (strncmp(character + 5, "e4;", 3) == 0) {
                                                // Character Entity: "&there4;" Char: "∴"
                                                // Name: THEREFORE
                                                character += 7;

                                                // Copy the string up to the start of the token
                                                copy_size = substitute_start - input_copy_start;
                                                memcpy(output_copy_start, input_copy_start, copy_size);
                                                output_copy_start += copy_size;
                                                memcpy(output_copy_start, "\xe2\x88\xb4", 3);
                                                output_copy_start += 3;
                                                input_copy_start = character + 1;
                                            }
                                            break;
                                        case 't':
                                            if (character[5] == 'a') {
                                                switch (character[6]) {
                                                    case ';':
                                                        // Character Entity: "&theta;" Char: "θ"
                                                        // Name: GREEK SMALL LETTER THETA
                                                        character += 6;

                                                        // Copy the string up to the start of the token
                                                        copy_size = substitute_start - input_copy_start;
                                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                                        output_copy_start += copy_size;
                                                        memcpy(output_copy_start, "\xce\xb8", 2);
                                                        output_copy_start += 2;
                                                        input_copy_start = character + 1;
                                                        break;
                                                    case 's':
                                                        if (strncmp(character + 7, "ym;", 3) == 0) {
                                                            // Character Entity: "&thetasym;" Char: "ϑ"
                                                            // Name: GREEK THETA SYMBOL
                                                            character += 9;

                                                            // Copy the string up to the start of the token
                                                            copy_size = substitute_start - input_copy_start;
                                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                                            output_copy_start += copy_size;
                                                            memcpy(output_copy_start, "\xcf\x91", 2);
                                                            output_copy_start += 2;
                                                            input_copy_start = character + 1;
                                                        }
                                                        break;
                                                }
                                            }
                                            break;
                                    }
                                    break;
                                case 'i':
                                    if (strncmp(character + 4, "nsp;", 4) == 0) {
                                        // Character Entity: "&thinsp;" Char: " "
                                        // Name: THIN SPACE
                                        character += 7;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\x89", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'i':
                            switch (character[3]) {
                                case 'l':
                                    if (strncmp(character + 4, "de;", 3) == 0) {
                                        // Character Entity: "&tilde;" Char: "˜"
                                        // Name: SMALL TILDE
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xcb\x9c", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'm':
                                    if (strncmp(character + 4, "es;", 3) == 0) {
                                        // Character Entity: "&times;" Char: "×"
                                        // Name: MULTIPLICATION SIGN
                                        character += 6;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xc3\x97", 2);
                                        output_copy_start += 2;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
                        case 'r':
                            if (strncmp(character + 3, "ade;", 4) == 0) {
                                // Character Entity: "&trade;" Char: "™"
                                // Name: TRADE MARK SIGN
                                character += 6;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x84\xa2", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                    }
                    break;
                case 'u':
                    switch (character[2]) {
                        case 'a':
                            if (strncmp(character + 3, "rr;", 3) == 0) {
                                // Character Entity: "&uarr;" Char: "↑"
                                // Name: UPWARDS ARROW
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xe2\x86\x91", 3);
                                output_copy_start += 3;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'm':
                            if (strncmp(character + 3, "l;", 2) == 0) {
                                // Character Entity: "&uml;" Char: "¨"
                                // Name: DIAERESIS
                                character += 4;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xc2\xa8", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'p':
                            if (strncmp(character + 3, "si", 2) == 0) {
                                switch (character[5]) {
                                    case 'h':
                                        if (character[6] == ';') {
                                            // Character Entity: "&upsih;" Char: "ϒ"
                                            // Name: GREEK UPSILON WITH HOOK SYMBOL
                                            character += 6;

                                            // Copy the string up to the start of the token
                                            copy_size = substitute_start - input_copy_start;
                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                            output_copy_start += copy_size;
                                            memcpy(output_copy_start, "\xcf\x92", 2);
                                            output_copy_start += 2;
                                            input_copy_start = character + 1;
                                        }
                                        break;
                                    case 'l':
                                        if (strncmp(character + 6, "on;", 3) == 0) {
                                            // Character Entity: "&upsilon;" Char: "υ"
                                            // Name: GREEK SMALL LETTER UPSILON
                                            character += 8;

                                            // Copy the string up to the start of the token
                                            copy_size = substitute_start - input_copy_start;
                                            memcpy(output_copy_start, input_copy_start, copy_size);
                                            output_copy_start += copy_size;
                                            memcpy(output_copy_start, "\xcf\x85", 2);
                                            output_copy_start += 2;
                                            input_copy_start = character + 1;
                                        }
                                        break;
                                }
                            }
                            break;
                    }
                    break;
                case 'x':
                    if (strncmp(character + 2, "i;", 2) == 0) {
                        // Character Entity: "&xi;" Char: "ξ"
                        // Name: GREEK SMALL LETTER XI
                        character += 3;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xce\xbe", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'y':
                    if (strncmp(character + 2, "en;", 3) == 0) {
                        // Character Entity: "&yen;" Char: "¥"
                        // Name: YEN SIGN
                        character += 4;

                        // Copy the string up to the start of the token
                        copy_size = substitute_start - input_copy_start;
                        memcpy(output_copy_start, input_copy_start, copy_size);
                        output_copy_start += copy_size;
                        memcpy(output_copy_start, "\xc2\xa5", 2);
                        output_copy_start += 2;
                        input_copy_start = character + 1;
                    }
                    break;
                case 'z':
                    switch (character[2]) {
                        case 'e':
                            if (strncmp(character + 3, "ta;", 3) == 0) {
                                // Character Entity: "&zeta;" Char: "ζ"
                                // Name: GREEK SMALL LETTER ZETA
                                character += 5;

                                // Copy the string up to the start of the token
                                copy_size = substitute_start - input_copy_start;
                                memcpy(output_copy_start, input_copy_start, copy_size);
                                output_copy_start += copy_size;
                                memcpy(output_copy_start, "\xce\xb6", 2);
                                output_copy_start += 2;
                                input_copy_start = character + 1;
                            }
                            break;
                        case 'w':
                            switch (character[3]) {
                                case 'j':
                                    if (character[4] == ';') {
                                        // Character Entity: "&zwj;" Char: "‍"
                                        // Name: ZERO WIDTH JOINER
                                        character += 4;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\x8d", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                                case 'n':
                                    if (strncmp(character + 4, "j;", 2) == 0) {
                                        // Character Entity: "&zwnj;" Char: "‌"
                                        // Name: ZERO WIDTH NON-JOINER
                                        character += 5;

                                        // Copy the string up to the start of the token
                                        copy_size = substitute_start - input_copy_start;
                                        memcpy(output_copy_start, input_copy_start, copy_size);
                                        output_copy_start += copy_size;
                                        memcpy(output_copy_start, "\xe2\x80\x8c", 3);
                                        output_copy_start += 3;
                                        input_copy_start = character + 1;
                                    }
                                    break;
                            }
                            break;
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
