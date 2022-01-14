#ifndef EMOJIS_IN_C
#define EMOJIS_IN_C

// =================================== Definition of the 'Emoji' struct... ===================================

//
typedef struct Emoji Emoji;

//
Emoji *emojiInitializer(int currentNumber, char* currentCode, char* currentName, char* currentCategory, char* currentSubCategory);

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

// =================================== Definition of the emoji recovery functions... ===================================

#endif