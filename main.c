//
#include <stdio.h>
#include "emoji/emoji.h"

// Definition of the main function of this file...
int main() {

	//
	Emoji *unicornEmoji;
	//Emoji *catEmoji;
	//Emoji *cryingCatEmoji;

	//
	unicornEmoji = emojiInitializer(550, "\U0001F984", "Hey 2", "Hey 3", "Hey 4");
	//catEmoji = emojiInitializer(541, "\U0001F431", "Hey 2", "Hey 3", "Hey 4");

	//
	//char* unicornEmojiCode = (char*) malloc(sizeof(getEmojiCode(unicornEmoji)));
	//char* catEmojiCode = getEmojiCode(catEmoji);

	//
	char* unicornEmojiCode = getEmojiCode(unicornEmoji);

	//
	printf("%s", unicornEmojiCode);
	//printf("%s", catEmojiCode);

	// Display the crying cat emoji from its unicode...
	//printf("\U0001F63F");

	// Execution without any error...
	return 0;
}
