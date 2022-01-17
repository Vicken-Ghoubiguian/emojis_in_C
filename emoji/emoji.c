//
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

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
    emoji->number = 0;
    emoji->code = NULL;
    emoji->name = NULL;
    emoji->category = NULL;
    emoji->subCategory = NULL;

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

//
char* toString(Emoji *emoji) {

    //
    return "";
}