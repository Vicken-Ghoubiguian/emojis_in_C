//
#include <stdio.h>
#include "emojis_in_C.h"

// Definition of the main function of this file...
int main() {

	Emoji *currentEmoji;
	currentEmoji = emojiInitializer(13, "Hey 1", "Hey 2", "Hey 3", "Hey 4");

	int test = getEmojiNumber(currentEmoji);

	printf("%d\n", test);

	printf("\n---------------------------------------\n");

	// Display the unicorn emoji from its unicode...
	printf("\U0001F984");

	// Display the cat emoji from its unicode...
	printf("\U0001F431");

	// Display the crying cat emoji from its unicode...
	printf("\U0001F63F");

	// Execution without any error...
	return 0;
}
