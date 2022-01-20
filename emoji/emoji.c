// Calling the used C libraries...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>

// Definition of the 'Emoji' type to represent an emoji with all of its characteristics...
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
    Emoji *emoji = malloc(sizeof(int) + (4 * sizeof(char*)));

    //
    emoji->number = currentNumber;
    emoji->code = currentCode;
    emoji->name = currentName;
    emoji->category = currentCategory;
    emoji->subCategory = currentSubCategory;

    // Returning the newly created emoji...
    return emoji;
}

//
void emojiDeleter(Emoji *emoji) {

    //
    free(emoji);
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

//
int isEqual(Emoji *emoji) {

    //
    return 0;
}