//Professor wrote this
int find_space(char s[]) {
    char *p;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            return 1;
        }
    }
    return 0;
}

int find_space_without_index(char *s) {
    char *p;
    for (p = s; *p != '\0'; p++) {
        if (*p == ' ') {
            return 1;
        }
    }
    return 0;
}