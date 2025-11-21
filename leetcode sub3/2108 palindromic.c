bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right])
            return 0;
        left++;
        right--;
    }
    //else
    return 1;
}

char* firstPalindrome(char** words, int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {
        if (isPalindrome(words[i]))
            return words[i];
    }
    //else
    return "";
}
