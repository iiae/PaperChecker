
#include <cstdio>
#include <io.h>

int main() {
    freopen("answer.txt", "r", stdin);
    int answerNumber, questionPoints;
    char *answer = new char[answerNumber + 1];
    scanf("%d", &answerNumber);
    scanf("%d", &questionPoints);
    scanf("%s", answer);
    long paperLength = filelength(open("paper.txt", 0x0100));
    char *paper = new char[paperLength + 1];
    freopen("paper.txt", "r", stdin);
    scanf("%s", paper);
    int i = 0;
    int score = 0;
    while (answer[i] != '\0') {
        if (paper[i] == answer[i] && i < paperLength) score += questionPoints;
        i++;
    }
    printf("%d", score);
}
