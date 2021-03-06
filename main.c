//
#include <stdio.h>
#include <stdbool.h>
#include "emoji/emoji.h"

// Definition of the main function of this file...
int main() {

	//
	Emoji *grinningCatEmoji;
	Emoji *grinningCatWithSmilingEyesEmoji;
	Emoji *catWithTearsOfJoyEmoji;
	Emoji *smilingCatWithHeartEyesEmoji;
	Emoji *catWithWrySmileEmoji;
	Emoji *kissingCatEmoji;
	Emoji *wearyCatEmoji;
	Emoji *cryingCatEmoji;
	Emoji *poutingCatEmoji;
	Emoji *unicornEmoji;

	//
	grinningCatEmoji = emojiInitializer(115, "\U0001F63A", "Hey 2", "Hey 3", "Hey 4");
	grinningCatWithSmilingEyesEmoji = emojiInitializer(116, "\U0001F638", "Hey 2", "Hey 3", "Hey 4");
	catWithTearsOfJoyEmoji = emojiInitializer(117, "\U0001F639", "Hey 2", "Hey 3", "Hey 4");
	smilingCatWithHeartEyesEmoji = emojiInitializer(118, "\U0001F63B", "Hey 2", "Hey 3", "Hey 4");
	catWithWrySmileEmoji = emojiInitializer(119, "\U0001F63C", "Hey 2", "Hey 3", "Hey 4");
	kissingCatEmoji = emojiInitializer(120, "\U0001F63D", "Hey 2", "Hey 3", "Hey 4");
	wearyCatEmoji = emojiInitializer(121, "\U0001F640", "Hey 2", "Hey 3", "Hey 4");
	cryingCatEmoji = emojiInitializer(122, "\U0001F63F", "Hey 2", "Hey 3", "Hey 4");
	poutingCatEmoji = emojiInitializer(123, "\U0001F63E", "Hey 2", "Hey 3", "Hey 4");
	unicornEmoji = emojiInitializer(550, "\U0001F984", "Hey 2", "Hey 3", "Hey 4");

	//
	char* catWithTearsOfJoyEmojiAsString = emojiToString(catWithTearsOfJoyEmoji);
	char* smilingCatWithHeartEyesEmojiAsString = emojiToString(smilingCatWithHeartEyesEmoji);
	char* catWithWrySmileEmojiAsString = emojiToString(catWithWrySmileEmoji);
	char* kissingCatEmojiAsString = emojiToString(kissingCatEmoji);
	char* wearyCatEmojiAsString = emojiToString(wearyCatEmoji);
	char* cryingCatEmojiAsString = emojiToString(cryingCatEmoji);
	char* poutingCatEmojiAsString = emojiToString(poutingCatEmoji);
	char* unicornEmojiAsString = emojiToString(unicornEmoji);

	//
	printf("%s", catWithTearsOfJoyEmojiAsString);
	printf("%s", smilingCatWithHeartEyesEmojiAsString);
	printf("%s", catWithWrySmileEmojiAsString);
	printf("%s", kissingCatEmojiAsString);
	printf("%s", wearyCatEmojiAsString);
	printf("%s", cryingCatEmojiAsString);
	printf("%s", poutingCatEmojiAsString);
	printf("%s", unicornEmojiAsString);

	//
	bool firstEqualityTest = isEqual(grinningCatEmoji, grinningCatWithSmilingEyesEmoji);
	bool test2 = isEqual(grinningCatEmoji, grinningCatEmoji);

	//
	print("\n");

	//
	printf("Grinning cat emoji is equal to grinning cat with smiling eyes emoji ? %s\n", firstEqualityTest ? "true" : "false");
	printf("Grinning cat emoji is equal to grinning cat emoji ? %s\n", test2 ? "true" : "false");

	//
	emojiDeleter(grinningCatEmoji);
	emojiDeleter(grinningCatWithSmilingEyesEmoji);
	emojiDeleter(catWithTearsOfJoyEmoji);
	emojiDeleter(smilingCatWithHeartEyesEmoji);
	emojiDeleter(catWithWrySmileEmoji);
	emojiDeleter(kissingCatEmoji);
	emojiDeleter(wearyCatEmoji);
	emojiDeleter(cryingCatEmoji);
	emojiDeleter(poutingCatEmoji);
	emojiDeleter(unicornEmoji);

	// Execution without any error...
	return 0;
}
