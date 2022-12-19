#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 *  using +1 for null terminator
 *  Seed the random number generator with the current time
 *  Generate a random password
 *  Generate a random ASCII character between 33 and 126
 *  Null-terminate the password string
 *  Print the password
 */


int main(void) 

{
	  char password[PASSWORD_LENGTH + 1];

	  srand(time(NULL));

	  for (int i = 0; i < PASSWORD_LENGTH; i++) 
	  {
		  password[i] = (char)(rand() % (126 - 33 + 1) + 33);
		    
	  }
	  
	  password[PASSWORD_LENGTH] = '\0';

	  printf("Random password: %s\n", password);

	  return 0;
}
