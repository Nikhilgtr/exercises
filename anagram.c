#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void anagram_case(char *s1, char *s2, size_t s1_len, size_t s2_len)
{
	int i;
	bool anagram_flag = true;

	if(s1_len != s2_len) {
		printf("Not anagram\n");
		return;
	}

	for( i = 0; i < s1_len;i++)
	{
		if(s1[i] != s2[i]) {
			anagram_flag = false;
			break;
		}
	}
	if(anagram_flag == true)
		printf("Case Specific strings are anagram  \"%s\" and \"%s\"\n", s1,s2);
	else
		printf("Case Specific strings are not anagram  \"%s\" and \"%s\"\n", s1,s2);
	return;
}

void anagram_no_case(char *s1, char *s2, size_t s1_len, size_t s2_len)
{
	int i;
	bool anagram_flag = true;

	if(s1_len != s2_len) {
		printf("Not anagram\n");
		return;
	}

	for( i = 0; i < s1_len;i++)
	{
		if(isupper(s1[i]))
			s1[i] = tolower(s1[i]);
		
		if(isupper(s2[i]))
			s2[i] = tolower(s2[i]);
		
		if(s1[i] != s2[i]) {
			anagram_flag = false;
			break;
		}
	}
	if(anagram_flag == true)
		printf("No Case Specific strings are anagram\n");
	else
		printf("No Case Specific strings are not anagram\n");
	return;
}

bool sort_str(char *str, int len) 
{
	int i, j;
	char temp;

	for (i = 0; i < len-1; i++) {
		for (j = i+1; j < len; j++) {	//getting next index
			if (str[i] > str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}


int main()
{
	char str1[100] = "CATOA";
	char str2[100] = "TACO";

	//sort strings
	sort_str(str1, strlen(str1));
	sort_str(str2, strlen(str2));
	
	//case specific
	anagram_case(str1,str2,strlen(str1),strlen(str2));

	//no case specific
	anagram_no_case(str1,str2,strlen(str1),strlen(str2));

	return 0;
}
