#include <stdio.h>
int main() {
char name[50];
int ans, score = 0;
printf("EXAMINATION SYSTEM\n");
printf("Enter your name: ");
scanf("%s", name);
printf("\nHello %s\n", name);
printf("There are 10 MCQs. Each question = 1 mark\n\n");
// Question 1 - Science
printf("Question 1. Which gas do plants release during photosynthesis?\n");
printf("1. Oxygen 2. Nitrogen 3. Carbon dioxide 4. Hydrogen\n");
printf("Ans: ");
scanf("%d", &ans);
if(ans == 1) score++;
// Question 2 - Maths
printf("\nQuestion 2. Value of (7 x 6) ?\n");
printf("1. 36 2. 42 3. 48 4. 56\n");
printf("Ans: ");
scanf("%d", &ans);
if(ans == 2) score++;
// Question 3 - Computer
printf("\nQuestion 3. Who developed C programming language?\n");
printf("1. Dennis Ritchie 2. Bill Gates 3. James Gosling 4. Elon Musk\n");
printf("Ans: ");
scanf("%d", &ans);
if(ans == 1) score++;
// Question 4 - GK
printf("\nQuestion 4. Which planet is known as the Red Planet?\n");
printf("1. Earth 2. Mars 3. Venus 4. Jupiter\n");
printf("Ans: ");
scanf("%d", &ans);
if(ans == 2) score++;
// Question 5 - Sports
printf("\nQuestion 5. How many players are there in a cricket team on the field?\n");
printf("1. 10 2. 11 3. 9 4. 12\n");
printf("Ans: ");
scanf("%d", &ans);
if(ans == 2) score++;
// Question 6 - History
printf("\nQuestion 6. Who was the first Prime Minister of India?\n");
printf("1. Jawaharlal Nehru 2. Mahatma Gandhi 3. Dr. Ambedkar 4. Subhash Bose\n");
printf("Ans: ");
scanf("%d", &ans);
if(ans == 1) score++;
// Question 7 - English
printf("\nQuestion 7. Opposite of Hot is?\n");
printf("1. Cold 2. Heat 3. Cool 4. Fire\n");
printf("Ans: ");
scanf("%d", &ans);
if(ans == 1) score++;
// Question 8 - Science
printf("\nQuestion 8. The Sun is a ________.\n");
printf("1. Planet 2. Star 3. Moon 4. Comet\n");
printf("Ans: ");
scanf("%d", &ans);
if(ans == 2) score++;
// Question 9 - GK
printf("\nQuestion 9. Which is the largest ocean on Earth?\n");
printf("1. Indian 2. Atlantic 3. Pacific 4. Arctic\n");
printf("Ans: ");
scanf("%d", &ans);
if(ans == 3) score++;
// Question 10 - Computer
printf("\nQuestion 10. Which function is used to print output in C?\n");
printf("1. printf 2. cin 3. cout 4. scanf\n");
printf("Ans: ");
scanf("%d", &ans);
if(ans == 1) score++;
// Result
printf("\nRESULT\n");
printf("Name: %s\n", name);
printf("Your Score = %d / 10\n", score);
if(score == 10) {
printf("Outstanding Performance\n");
} else if(score >= 6) {
printf("Good You Passed\n");
} else {
printf("Fail Work Hard Next Time\n");
}
return 0;
}
