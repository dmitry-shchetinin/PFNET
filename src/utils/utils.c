/** @file utils.c
 *  @brief This file defines utility functions.
 *
 * This file is part of PFNET.
 *
 * Copyright (c) 2015-2016, Tomas Tinoco De Rubira.
 *
 * PFNET is released under the BSD 2-clause license.
 */

#include <pfnet/utils.h>

int imin(int a, int b) {
  /* Returns minimum of two integers. */
  return (a < b) ? a : b;
}

char* trim(char* s) {
  /* Trims string inplace. */

  char* ptr;
  int len = strlen(s);
  if (!s)
    return NULL;   // handle NULL string
  if (!*s)
    return s;      // handle empty string
  for (ptr = s + len - 1; (ptr >= s) && isspace(*ptr); --ptr);
  ptr[1] = '\0';
  for (ptr = s; (ptr < s+len) && isspace(*ptr); ptr++);
  s = ptr;
    
  return s;
}

char* strtoupper(char s[]) {
  /* Replaces lowercase string chars with uppercase values. */
  int i = 0;
  while(s[i]) {
    s[i] = toupper(s[i]);
    i = i + 1;
  }
  return s;
}

char* strtolower(char s[]) {
  /* Replaces uppercase string chars with lowercase values. */
  int i = 0;
  while(s[i]) {
    s[i] = tolower(s[i]);
    i = i + 1;
  }
  return s;
}
