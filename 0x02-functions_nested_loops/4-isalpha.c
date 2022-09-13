#include "main.h"

/**
 * is_alpha - checks for alphabetic character
 * @c - the character to check
 * Returns: 1 if c is a letter, 0 otherwise
 */

int is_alpha(int c){
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
