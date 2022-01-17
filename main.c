//
#include <stdio.h>
#include "emoji/emoji.h"

// Definition of the main function of this file...
int main() {

	//
	Emoji *unicornEmoji;
	Emoji *catEmoji;
	Emoji *cryingCatEmoji;

	//
	unicornEmoji = emojiInitializer(550, "\U0001F984", "Hey 2", "Hey 3", "Hey 4");
	catEmoji = emojiInitializer(541, "\U0001F431", "Hey 2", "Hey 3", "Hey 4");
	cryingCatEmoji = emojiInitializer(122, "\U0001F63F", "Hey 2", "Hey 3", "Hey 4");

	//
	char* unicornEmojiCode = getEmojiCode(unicornEmoji);
	char* catEmojiCode = getEmojiCode(catEmoji);
	char* cryingCatEmojiCode = getEmojiCode(cryingCatEmoji);

	//
	printf("%s", unicornEmojiCode);
	printf("%s", catEmojiCode);
	printf("%s", cryingCatEmojiCode);

	// Execution without any error...
	return 0;
}
