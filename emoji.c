//
#include <stdio.h>

//
typedef struct Emoji {

    int number;
    char* code;
    char* name;
    char* category
    char* subCategory;

} Emoji;

//
Emoji emojiInitializer(int currentNumber, char* currentCode, char* currentName, char* currentCategory, char* currentSubCategory) {

    //
    Emoji emoji;

    //
    emoji.number = currentNumber;
    emoji.code = currentCode;
    emoji.name = currentName;
    emoji.category = currentCategory;
    emoji.subCategory = currentSubCategory;

    //
    return emoji;
}