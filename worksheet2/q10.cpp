#include <iostream>
#include <cstring>
using namespace std;

void getStringArray(char str[], char strArray[][100], int &count) {
    int len = strlen(str);
    int wordIdx = 0, charIdx = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            strArray[wordIdx][charIdx++] = str[i];
        } else {
            if (charIdx > 0) {
                strArray[wordIdx][charIdx] = '\0'; 
                wordIdx++;
                charIdx = 0;
            }
        }
    }
    count = wordIdx;
}

void reverse(char str[]) {
    char strArray[100][100];
    int wordCount = 0;

    getStringArray(str, strArray, wordCount);

    for (int i = 0; i < wordCount / 2; i++) {
        char temp[100];
        strcpy(temp, strArray[i]);
        strcpy(strArray[i], strArray[wordCount - 1 - i]);
        strcpy(strArray[wordCount - 1 - i], temp);
    }

    str[0] = '\0';
    for (int i = 0; i < wordCount; i++) {
        strcat(str, strArray[i]);
        if (i != wordCount - 1)
            strcat(str, " ");
    }
}

int main() {
    char str[1000];
    cout << "Enter the string: ";
    cin.getline(str, 1000);

    reverse(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}
