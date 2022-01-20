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
char* emojiToString(Emoji *emoji) {

    //
    char* comma = ",";
    char* openingParenthesis = "(";
    char* closingParenthesis = ")";

    //
    char* emojiString = malloc(11 * sizeof(char*));

    //
    char* numberBuffer;
    sprintf(numberBuffer, "%d", emoji->number);

    //
    strcat(emojiString, openingParenthesis);
    strcat(emojiString, numberBuffer);
    strcat(emojiString, comma);
    strcat(emojiString, emoji->code);
    strcat(emojiString, comma);
    strcat(emojiString, emoji->name);
    strcat(emojiString, comma);
    strcat(emojiString, emoji->category);
    strcat(emojiString, comma);
    strcat(emojiString, emoji->subCategory);
    strcat(emojiString, closingParenthesis);

    //
    return emojiString;
}

//
int isEqual(Emoji *emoji) {

    //
    return 0;
}