/**************************
* Name:  OvadiaEsquenazi  *          
* Ex:    String.h         *
**************************/
#ifndef __OL134_STRING_H__
#define __OL134_STRING_H__

#include<stddef.h> /*For size_t*/
#include <stdlib.h> /*For malloc and free*/
#include <string.h> /*For strcpy and strlen*/
#include <stdio.h> /*For input and output*/
#include <assert.h> /*For asserts*/
#include <strings.h> /*For strcpy and strlen*/
#include <ctype.h> /*For case functions*/

size_t StrLen(const char *s);
int StrCmp(const char *s1, const char *s2);
int StrNcmp(const char *str1, const char *str2, size_t n);
int StrCasecmp(const char *s1, const char *s2);
char *StrCpy(char *dest, const char *src);
char *StrNcpy(char *dest, const char *src, size_t n);
char *StrChr(const char *s, int c);
char *StrDup(const char *s);
char *StrCat(char *dest, const char *src);
char *StrNcat(char *dest, const char *src, size_t n);
char *StrStr(const char *haystack, const char *needle);
size_t StrSpn(const char *s, const char *accept);
char *StrTok(char *str, const char *delim);

#endif /*__OL134_STRING_H__*/
