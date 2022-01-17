#ifndef EMOJI
#define EMOJI

//
typedef struct Emoji Emoji;

//
Emoji *emojiInitializer(int currentNumber, char* currentCode, char* currentName, char* currentCategory, char* currentSubCategory);

//
void emojiDeleter(Emoji *emoji);

//
int getEmojiNumber(Emoji *emoji);

//
char* getEmojiCode(Emoji *emoji);

//
char* getEmojiName(Emoji *emoji);

//
char* getEmojiCategory(Emoji *emoji);

//
char* getEmojiSubCategory(Emoji *emoji);

//
char* toString(Emoji *emoji);

#endif