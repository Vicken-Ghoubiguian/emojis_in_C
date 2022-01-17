//
#include <stdio.h>
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
	char* grinningCatEmojiCode = getEmojiCode(grinningCatEmoji);
	char* grinningCatWithSmilingEyesEmojiCode = getEmojiCode(grinningCatWithSmilingEyesEmoji);
	char* catWithTearsOfJoyEmojiCode = getEmojiCode(catWithTearsOfJoyEmoji);
	char* smilingCatWithHeartEyesEmojiCode = getEmojiCode(smilingCatWithHeartEyesEmoji);
	char* catWithWrySmileEmojiCode = getEmojiCode(catWithWrySmileEmoji);
	char* kissingCatEmojiCode = getEmojiCode(kissingCatEmoji);
	char* wearyCatEmojiCode = getEmojiCode(wearyCatEmoji);
	char* cryingCatEmojiCode = getEmojiCode(cryingCatEmoji);
	char* poutingCatEmojiCode = getEmojiCode(poutingCatEmoji);
	char* unicornEmojiCode = getEmojiCode(unicornEmoji);

	//
	printf("%s", grinningCatEmojiCode);
	printf("%s", grinningCatWithSmilingEyesEmojiCode);
	printf("%s", catWithTearsOfJoyEmojiCode);
	printf("%s", smilingCatWithHeartEyesEmojiCode);
	printf("%s", catWithWrySmileEmojiCode);
	printf("%s", kissingCatEmojiCode);
	printf("%s", wearyCatEmojiCode);
	printf("%s", cryingCatEmojiCode);
	printf("%s", poutingCatEmojiCode);
	printf("%s", unicornEmojiCode);

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
