#include "ws2_string.h"

/*StrnCmp*/
int StrNcmp(const char *str1, const char *str2, size_t n)
{
	assert(NULL != str1 && NULL != str2);
    
    if(0 == n)
    	return 0;
    	
    while(('\0' != *str1) && (*str1 == *str2) && n > 0)
    {
       str1++;
       str2++;
       --n;
    }
        
    return *str1 - *str2;
}

/*STRCPY*/
char *StrCpy(char *dest, const char *src)
{
    char *temp = dest;
    assert(NULL != dest && NULL != src);
   
    while('\0' != *src)
    {
    	*temp = *src;
    	++src;
    	++temp;
    }
    *temp = '\0';
    
    return dest;
}

/*STRNCPY*/
char *StrNcpy(char *dest, const char *src, size_t n)
{	
	size_t i = 0;
	char *temp = dest;
	assert(NULL != dest);
	assert(NULL != src);
	
	while(i < n)
	{
		*temp = *src;
		++temp;
		++src;
		++i;
	}
	
	dest = '\0';
	
	return (dest);
}

size_t StrLen (const char *s)
{
    size_t i = 0;
    
    assert(NULL != s);
    
    while(s[i] != '\0')
        i++;
    
    return i;
}

int StrCmp (const char *s1, const char *s2) /*Need to reset pointers*/
{   
    assert(NULL != s1 && NULL != s2);
    
    while(('\0' != *s1) && (*s1 == *s2))
    {
       s1++;
       s2++;
    }
        
    return *s1 - *s2;
}
/*STRNSPN*/
size_t StrSpn(const char *str1, const char *str2)
{
	const char *temp = str2;
	size_t counter = 0;
	int exists = 0;
	
	assert(NULL != str1);
	assert(NULL != str2);
	
	while('\0' != *str1)
	{
		while('\0' != *temp)
		{
			if(*str1 == *temp)
			{
				exists = 1;
				break;
			}
			
			++temp;
		}
		if(exists)
		{
			exists = 0;
			++counter;
			
			temp = str2;
			++str1;
		}
		else
		{
			break;
		}
	}
	
	return counter;
}

/*STRSTR*/
char *StrStr(const char *haystack, const char *needle)
{
	const char *temp = NULL;
	
	size_t counter = 0;
	
	assert(NULL != haystack);
	assert(NULL != needle);
	
	temp = needle;
	
	if ('\0' == *needle)
	{
		return (char*)haystack;
	}
	
	while('\0' != *haystack)
	{
		while(*temp == *haystack)
		{
			++counter;
			++haystack;
			++temp;
			
			if(*temp == '\0')
			{
				return (char*)(haystack - counter);
			}
		}
		counter = 0;
		temp = needle;
		++haystack;
	}
	
	return NULL;
}

/*STRNCAT*/
char *StrNcat(char *dest, const char *src, size_t n)
{
	char *temp = dest;
	size_t start = strlen(dest);
	assert(NULL != src);    
	temp += start;
    
    while( 0 < n )
    {
    	*temp = *src;
    	++temp;
    	++src;
    	--n;
    }
    *temp = '\0';

	return (temp);
}

/*STRCAT*/
char *StrCat(char *dest, const char *src)
{	
	char *temp = dest;
	size_t start = strlen(dest);

	assert(NULL != src);   

	temp += start;
	
    
    while('\0' != *src)
    {
    	*temp = *src;
    	++src;
    	++temp;
    }
    *temp = '\0';

	return (temp);
}
/*STRDUP*/
char *StrDup(const char *s)
{
	char *dest = (char*) malloc(sizeof(char) * strlen(s));
	
	strcpy(dest, s);
	
	return dest;
}

/*STRCHR*/
char *StrChr(const char *s, int c)
{	    
	if(NULL !=s)
	{
		assert(NULL != s);
	}

    while('\0' != *s)
    {
    	if(*s == c)
    	{	return (char*)s;

    	}
    	s++;
    }
    
    return NULL;
}

/*STRCASECMP*/
int StrCasecmp (const char *s1, const char *s2)
{   
    assert(NULL != s1 && NULL != s2);
    
    while( ('\0' != *s1) && (tolower(*s1) == tolower(*s2)))
    {
       s1++;
       s2++;
    }

    return tolower(*s1) - tolower(*s2);
}

