#include "ws2_string.h"

void TestStringLength(void);
void TestStrCmp(void);
void TestStrNcpy(void);
void TestStrNcmp(void);
void TestStrCpy(void);
void TestStrCasecmp(void);
void TestStrChr(void);
void TestStrDup(void);
void TestStrCat(void);
void TestStrNcat(void);
void TestStrStr(void);
void TestStrSpn(void);


int main () 
{   
	TestStringLength();
	printf("\n");	
	
	TestStrCmp();
	printf("\n");	
	
	TestStrCpy();
	
	printf("\n");	
    TestStrNcpy();
    
    printf("\n");
    TestStrNcmp();
    
    printf("\n");
    TestStrCasecmp();
    
    printf("\n");
    TestStrChr();
    
    printf("\n");
    TestStrDup();
    
    printf("\n");
    TestStrCat();
    
    printf("\n");
    TestStrNcat();
    
    printf("\n");
    TestStrStr();
    
    printf("\n");
    TestStrSpn();
    
    
    return (0);
}

void TestStrStr(void) 
{
	 char haystack [] = "world";
	 char needle [] = "orl";
	 
	 char *primary = strstr(haystack, needle);
	 char *mine = StrStr(haystack, needle);
	 
	 if(*mine == *primary)
	 {
	 	 printf("FROM TestStrStr\n");	
	 	 printf("SUBSTRING BEGINS WITH CHAR: %c\n", *mine);
	 }
	 else
	 {
	 	printf("TEST FAILEd FROM TestStrStr\n");
	 }
}
void TestStrNcat (void)
{
	char dest[100] = "Hello";
	char source[] = "World";

	char *first = strncat(dest, source, 3);
	char *second = StrNcat(dest, source, 3);
	
	printf("FROM TestStrNcat\n");
	printf("Original String: %s\n", first);
	printf("Copied String: %s\n", second);
	
}

void TestStrCat (void)
{
	char dest[100] = "Hello";
	char source[] = "World";

	char *first = strcat(dest, source);
	char *second = StrCat(dest, source);
	
	printf("FROM TestStrCat\n");
	printf("Original String: %s\n", first);
	printf("Copied String: %s\n", second);
	
}
void TestStrDup(void)
{
	char s[] = "Hello From TestSrDup";
	char *primary = strdup(s);
	char *mine = StrDup(s);
	
	if (*primary == *mine)
	{
		printf("COPIED STRING FROM StrDup\n");
		printf("%s\n", mine); 
		free(mine);
	}
	else
		printf("Something's wrong");
}
void TestStrChr(void)
{	char test [] = "Hello World";
	
	char *primary = strchr(test, 'H');
	char *mine = StrChr(test, 'H');
	
	if(primary == mine)
	{
		printf("FIRST MATCHING VALUE FROM TestStrChr: ");
		printf("%d\n",*mine);
	}
	else
	{
		printf("%c  ",*primary);
		printf("%c\n",*mine);
		printf("FAILED FROM TESTSTRCHR");
	}
}
/*STRCASECMP*/
void TestStrCasecmp (void)
{
	char s1[] = "Hello";
    char s2[] = "Xello";
    
    int primary = strcasecmp(s1, s2);
    int mine = StrCasecmp(s1, s2);
    
    if(mine == primary)
    {
    	printf("\nVALUE OF COMPARED STRINGS FROM STRCASECMP: %d\n", mine);
    	printf("\n");
    }
    else
    	printf("FAILED FROM TestCasecmp");
}

/*STRNCMP*/
void TestStrNcmp (void)
{
	char s1[] = "text";
    char s2[] = "tex";
    size_t n = 3;
    
    int primary = strncmp(s1, s2, n);
    int mine = StrNcmp(s1, s2, n);
    
    if(mine == primary)
    {
    	printf("\nVALUE OF COMPARED STRINGS FROM STRNCMP: %d\n", mine);
    	printf("\n");
    }
    else
    	printf("FAILED FROM TestStrNcmp");
}


void TestStrCpy (void)
{
	int i;
    char src [] = {"HELLO WORLD"};
    char *ptr_src = src;
    char *dest = (char*) malloc(12*sizeof(char));
    
    StrCpy(dest, ptr_src);
    printf("FROM TestStrCpy\n");
    printf("Original String: ");
    
    for(i = 0; i < 12; i++)
    	printf("%c", src[i]);

    printf("\nCOPIED STRING: ");
    
    for(i = 0; i < 12; i++)
    	printf("%c", dest[i]);
    printf("\n");
}


void TestStrNcpy (void)
{
	size_t i;
	size_t n = 10;
    char src [] = {"COPY ME PLEASE"};
    char *ptr_src = src;
    char *dest = (char*) malloc(100*sizeof(char));
    size_t length = strlen(src);
    
    StrNcpy(dest, ptr_src, n);
    printf("FROM TestStrNcpy\n");
	printf("Original String: ");
    
    for(i = 0; i < length; i++)
    	printf("%c",src[i]);
   
    printf("\nCOPIED STRING: ");
    
    for(i = 0; i < n; i++)
    	printf("%c", dest[i]);
    printf("\n");
    
}

void TestStringLength (void)
{
    char str[] = {"texty"};
    int primary = strlen(str);
    int mine = StrLen(str);
    
    
    if(mine == primary)
    {
    	printf("\nPASSED FROM TEST_STRING_LENGTH\n");
        printf("LENGTH OF STRING IS: %d\n", mine);
    }
    else
    	printf("\nFAILED FROM TestStringLength\n");

}

void TestStrCmp (void)
{
    char s1[] = {"texty"};
    char s2[] = {"tex"};
    int primary = strcmp(s1, s2);
    int mine = StrCmp(s1, s2);
    
    if(mine == primary)
    {	
    	printf("\nPASSED FROM TestStrCmp\n");
    	printf("VALUE OF COMPARED STRINGS IS: %d\n", mine);
    }
    else
    	printf("FAILED FROM TestStrCmp");

}

