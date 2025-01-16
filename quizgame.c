#include <stdio.h>

void displayQuestion(int questionNumber) {
    // Display the question and options based on question number
    switch (questionNumber) {
        case 1:
            printf("Question 1: What is the capital of France?\n");
            printf("a) Berlin\n");
            printf("b) Madrid\n");
            printf("c) Paris\n");
            printf("d) Rome\n\n");
            break;
        case 2:
            printf("Question 2: Which planet is known as the Red Planet?\n");
            printf("a) Earth\n");
            printf("b) Mars\n");
            printf("c) Jupiter\n");
            printf("d) Venus\n\n");
            break;
        case 3:
            printf("Question 3: What is the largest mammal in the world?\n");
            printf("a) Elephant\n");
            printf("b) Whale Shark\n");
            printf("c) Blue Whale\n");
            printf("d) Giraffe\n\n");
            break;
        case 4:
            printf("Question 4: What is the chemical symbol for water?\n");
            printf("a) H2O\n");
            printf("b) CO2\n");
            printf("c) O2\n");
            printf("d) NaCl\n\n");
            break;
        case 5:
            printf("Question 5: Who wrote 'Romeo and Juliet'?\n");
            printf("a) William Shakespeare\n");
            printf("b) Mark Twain\n");
            printf("c) Jane Austen\n");
            printf("d) Charles Dickens\n\n");
            break;
        default:
            printf("Invalid question number!\n");
            break;
    }
}

int checkAnswer(int questionNumber, char answer) {
    // Check if the answer is correct
    switch (questionNumber) {
        case 1:
            if (answer == 'c') {
                printf("Correct! The capital of France is Paris.\n");
                return 1;
            } else {
                printf("Incorrect. The correct answer is c) Paris.\n");
                return 0;
            }
        case 2:
            if (answer == 'b') {
                printf("Correct! Mars is known as the Red Planet.\n");
                return 1; 
            } else {
                printf("Incorrect. The correct answer is b) Mars.\n");
                return 0;
            }
        case 3:
            if (answer == 'c') {
                printf("Correct! The largest mammal in the world is the Blue Whale.\n");
                return 1;
            } else {
                printf("Incorrect. The correct answer is c) Blue Whale.\n");
                return 0;
            }
        case 4:
            if (answer == 'a') {
                printf("Correct! The chemical symbol for water is H2O.\n");
                return 1;
            } else {
                printf("Incorrect. The correct answer is a) H2O.\n");
                return 0;
            }
        case 5:
            if (answer == 'a') {
                printf("Correct! 'Romeo and Juliet' was written by William Shakespeare.\n");
                return 1;
            } else {
                printf("Incorrect. The correct answer is a) William Shakespeare.\n");
                return 0;
            }
        default:
            printf("Invalid question number!\n");
            return 0;
    }
}

int main() {
    char answer;
    int score = 0;

    printf("Welcome to the Quiz Game!\n\n");

    // Loop through 5 questions
    for (int i = 1; i <= 5; i++) {
        // Display the question
        displayQuestion(i);

        // Get the user's answer
        printf("Enter your answer (a/b/c/d): ");
        scanf(" %c", &answer);

        // Check the user's answer
        if (checkAnswer(i, answer)) {
            score++;
        }
    }

    // Display the final score
    printf("\nYour final score is: %d out of 5\n", score);

    return 0;
}

