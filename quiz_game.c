# include <stdlib.h>
# include <stdio.h>

// Created by Pathum Danthanarayana, 11/09/2021

float gradeCalc(correctNum)
{
	float gradePercentage = (correctNum / 10.0) * 100.0;
	return gradePercentage;
}

int main(void)
{

	// Instructions for the game
	printf("\n*** Welcome to the Hardest General Knowledge Quiz Ever ***\n\n");
	printf("----------------------------------------------------------\n");
	printf("\nInstructions: Simply type the number associated with the\nanswer you selected, and hit Enter to submit your answer.\nPlease enter numbers only and not characters.\n");
	printf("Enjoy and good luck!\n\n");
	printf("----------------------------------------------------------\n");

	// Question 1 choices
	const char *question1[] = { "Bamako", "Lagos", "Addis Ababa", "Accra"};

	// Question 2 choices
	const int question2[] = { 25, 10, 27, 19};

	// Question 3 choices
	const char *question3[] = { "Whoop", "Sloth", "Herd", "Goldilocks"};

	// Question 4 choices
	const int question4[] = { 5, 8, 2, 11};

	// Question 5 choices
	const char *question5[] = { "299,792,458 m/s", "67,000,000 mph", "38 mph", "407 mph"};

	// Question 6 choices
	const char *question6[] = { "A way of measuring 'thag', which means the density of steel",
			"A special kind of paint-drying gun",
			"A military laser that was briefly tested before being surpassed by superior technology",
			"The spike on a stegosaurus' tail"};

	// Question 7 choices
	const int question7[] = { 0, 1, 2, 3};

	// Question 8 choices
	const char *question8[] = { "Parrot", "Goat", "Ferret", "Reindeer"};

	// Question 9 choices
	const char *question9[] = { "Oxidized salty water", "Blood", "Acid rain", "Bauxite deposits"};

	// Question 10 choices
	const char *question10[] = { "J", "X", "Q", "B"};

	int i;
	int userInput = 0;
	int numCorrect = 0;
	int numWrong = 0;

	// Answer key
	const char *answerKey[] = { "Bamako", "27", "Sloth", "8", "38 mph", "The spike on a stegosaurus' tail", "3",
			"Reindeer", "Oxidized salty water", "J"};
	const int numAnswerKey[] = { 1, 3, 2, 2, 3, 4, 4, 4, 1, 1};

	// Question 1: What is the capital of Mali?
	printf("\nQuestion 1:\nWhat is the capital of Mali?\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d) ", i + 1);
		printf("%s\n", question1[i]);
	}
	scanf("%d", &userInput);

	if (userInput == numAnswerKey[0])
	{
		numCorrect += 1;
		printf("Correct! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[0], numCorrect, numWrong);
	}
	else
	{
		numWrong += 1;
		printf("Incorrect! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[0], numCorrect, numWrong);
	}

	// Question 2: How many amendments does the US Constitution have?
	printf("\n\nQuestion 2:\nHow many amendments does the US Constitution have?\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d) ", i + 1);
		printf("%d\n", question2[i]);
	}
	scanf("%d", &userInput);

	if (userInput == numAnswerKey[1])
	{
		numCorrect += 1;
		printf("Correct! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[1], numCorrect, numWrong);
	}
	else
	{
		numWrong += 1;
		printf("Incorrect! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[1], numCorrect, numWrong);
	}

	// Question 3: What is the collective noun for bears?
	printf("\n\nQuestion 3:\nWhat is the collective noun for bears?\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d) ", i + 1);
		printf("%s\n", question3[i]);
	}
	scanf("%d", &userInput);

	if (userInput == numAnswerKey[2])
	{
		numCorrect += 1;
		printf("Correct! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[2], numCorrect, numWrong);
	}
	else
	{
		numWrong += 1;
		printf("Incorrect! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[2], numCorrect, numWrong);
	}

	// Question 4: What is the maximum number of times you can fold any piece of paper?
	printf("\n\nQuestion 4:\nWhat is the maximum number of times you can fold any piece of paper?\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d) ", i + 1);
		printf("%d\n", question4[i]);
	}
	scanf("%d", &userInput);

	if (userInput == numAnswerKey[3])
	{
		numCorrect += 1;
		printf("Correct! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[3], numCorrect, numWrong);
	}
	else
	{
		numWrong += 1;
		printf("Incorrect! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[3], numCorrect, numWrong);
	}

	// Question 5: What is the lowest speed of light has ever gone?
	printf("\n\nQuestion 5:\nWhat is the lowest speed of light has ever gone?\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d) ", i + 1);
		printf("%s\n", question5[i]);
	}
	scanf("%d", &userInput);

	if (userInput == numAnswerKey[4])
	{
		numCorrect += 1;
		printf("Correct! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[4], numCorrect, numWrong);
	}
	else
	{
		numWrong += 1;
		printf("Incorrect! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[4], numCorrect, numWrong);
	}

	// Question 6: What is a thagomizer?
	printf("\n\nQuestion 6:\nWhat is a thagomizer?\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d) ", i + 1);
		printf("%s\n", question6[i]);
	}
	scanf("%d", &userInput);

	if (userInput == numAnswerKey[5])
	{
		numCorrect += 1;
		printf("Correct! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[5], numCorrect, numWrong);
	}
	else
	{
		numWrong += 1;
		printf("Incorrect! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[5], numCorrect, numWrong);
	}

	// Question 7: How many films did Monty Python make?
	printf("\n\nQuestion 7:\nHow many films did Monty Python make?\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d) ", i + 1);
		printf("%d\n", question7[i]);
	}
	scanf("%d", &userInput);

	if (userInput == numAnswerKey[6])
	{
		numCorrect += 1;
		printf("Correct! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[6], numCorrect, numWrong);
	}
	else
	{
		numWrong += 1;
		printf("Incorrect! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[6], numCorrect, numWrong);
	}

	// Question 8: What animal was Pollyanna, who lived on board a submarine for six weeks?
	printf("\n\nQuestion 8:\nWhat animal was Pollyanna, who lived on board a submarine for six weeks?\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d) ", i + 1);
		printf("%s\n", question8[i]);
	}
	scanf("%d", &userInput);

	if (userInput == numAnswerKey[7])
	{
		numCorrect += 1;
		printf("Correct! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[7], numCorrect, numWrong);
	}
	else
	{
		numWrong += 1;
		printf("Incorrect! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[7], numCorrect, numWrong);
	}

	// Question 9: What makes Antartica's "Blood Falls" red in colour?
	printf("\n\nQuestion 9:\nWhat makes Antartica's 'Blood Falls' red in colour?\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d) ", i + 1);
		printf("%s\n", question9[i]);
	}
	scanf("%d", &userInput);

	if (userInput == numAnswerKey[8])
	{
		numCorrect += 1;
		printf("Correct! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[8], numCorrect, numWrong);
	}
	else
	{
		numWrong += 1;
		printf("Incorrect! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[8], numCorrect, numWrong);
	}

	// Question 10: Which letter is the most recently added to the English alphabet?
	printf("\n\nQuestion 10:\nWhich letter is the most recently added to the English alphabet?\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d) ", i + 1);
		printf("%s\n", question10[i]);
	}
	scanf("%d", &userInput);

	if (userInput == numAnswerKey[9])
	{
		numCorrect += 1;
		printf("Correct! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[9], numCorrect, numWrong);
	}
	else
	{
		numWrong += 1;
		printf("Incorrect! %s is the right answer. You have gotten %d questions right and %d questions wrong.", answerKey[9], numCorrect, numWrong);
	}

	// Final Score Calculation
	float gradePercentage = gradeCalc(numCorrect);
	printf("\n\nThank you for playing! I hope you enjoyed! You got %d/10 correct (%d incorrect). Your score as a percentage is %.2f.\n\n", numCorrect, numWrong, gradePercentage);

	return 0;
}
