#include <stdio.h>
#include <string.h>

// Structure to hold the quiz question and answer
struct Question {
    char question[100];
    char answer[20];
};

// Function to check if the user's answer is correct
int isCorrectAnswer(const char* userAnswer, const char* correctAnswer) {
    return strcmp(userAnswer, correctAnswer) == 0;
}

int main() {
    // Array of quiz questions and answers
    struct Question questions[] = {
        {"What is the capital of France?", "Paris"},
        {"What is 2 + 2?", "4"},
        {"Which planet is closest to the Sun?", "Mercury"},
        {"What is the chemical symbol for water?", "H2O"},
        {"Who painted the Mona Lisa?", "Leonardo da Vinci"}
    };

    int totalQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;

    printf("Welcome to the Quiz Game!\n");
    printf("You will be asked %d questions. Answer each question correctly to score points.\n", totalQuestions);

    // Loop through the questions
    for (int i = 0; i < totalQuestions; i++) {
        printf("\nQuestion %d: %s\n", i + 1, questions[i].question);

        char userAnswer[20];
        printf("Your answer: ");
        scanf("%s", userAnswer);

        // Convert the user's answer to lowercase (to make the comparison case-insensitive)
        for (int j = 0; userAnswer[j]; j++) {
            userAnswer[j] = tolower(userAnswer[j]);
        }

        // Check if the answer is correct
        if (isCorrectAnswer(userAnswer, questions[i].answer)) {
            printf("Correct answer! You scored a point!\n");
            score++;
        } else {
            printf("Wrong answer! The correct answer is: %s\n", questions[i].answer);
        }
    }

    printf("\nQuiz Completed! You scored %d out of %d.\n", score, totalQuestions);

    return 0;
}
