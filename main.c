//
#include <stdio.h>
#include "emoji/emoji.h"

// Definition of the main function of this file...
int main() {

	//
	Emoji *unicornEmoji;

	//
	unicornEmoji = emojiInitializer(550, "\U0001F984", "Hey 2", "Hey 3", "Hey 4");

	//
	char* test = getEmojiCode(unicornEmoji);

	// Display the unicorn emoji from its unicode...
	printf("%s", test);

	// Display the cat emoji from its unicode...
	printf("\U0001F431");

	// Display the crying cat emoji from its unicode...
	printf("\U0001F63F");

	// Execution without any error...
	return 0;
}
