//
#include <stdio.h>
#include <sqlite3.h>

//
#include "emojis_in_C.h"

// =================================== Definition of the 'Emoji' struct... ===================================

//
typedef struct Emoji {

    int number;
    char* code;
    char* name;
    char* category;
    char* subCategory;

} Emoji;

//
Emoji *emojiInitializer(int currentNumber, char* currentCode, char* currentName, char* currentCategory, char* currentSubCategory) {

    //
    Emoji *emoji;

    //
    emoji->number = currentNumber;
    emoji->code = currentCode;
    emoji->name = currentName;
    emoji->category = currentCategory;
    emoji->subCategory = currentSubCategory;

    //
    return emoji;
}

//
int getEmojiNumber(Emoji *emoji) {

    //
    return emoji->number;
}

//
char* getEmojiCode(Emoji *emoji) {

    //
    return emoji->code;
}

//
char* getEmojiName(Emoji *emoji) {

    //
    return emoji->name;
}

//
char* getEmojiCategory(Emoji *emoji) {

    //
    return emoji->category;
}

//
char* getEmojiSubCategory(Emoji *emoji) {

    //
    return emoji->subCategory;
}

// =================================== Definition of the emoji recovery functions... ===================================

