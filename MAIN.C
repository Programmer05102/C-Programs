#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

typedef struct
{
    char *question;
    int option1Score;
    int option2Score;
    int option3Score;
    int option4Score;
    int option5Score;
    char *type;
} question;

void calculateScore(char *, int *, int *, int *, int *);
void invokeMainMenu();
void showMenu();
void playGame();
void readCsvFile();
void printQuestions();

question questions[30];
int totalQuestions = 0;
int totalAmbivertedQuestions = 0;
int totalFlexibleQuestions = 0;
int totalReactiveQuestions = 0;

void printQuestions()
{
    int i;
    clrscr();
    for (i=0;i<totalQuestions;i++)
    {
	printf("------------------------------------\n");
	printf("Question No: %d\n\nQuestion: '%s'\nStrongyly Agree Score: '%d',\tAgree Score: '%d',\tNeurtal Score: '%d',\tDisagree Score: '%d',\tDisagree Score: '%d'\nType of Question: '%s'\n", (i + 1), questions[i].question, questions[i].option1Score, questions[i].option2Score, questions[i].option3Score, questions[i].option4Score, questions[i].option5Score, questions[i].type);
	printf("------------------------------------\n\n");
    }
    invokeMainMenu();
}

void calculateScore(char *type, int *selectedScore, int *ambivertedScore, int *flexibleScore, int *reactiveScore)
{
    if (strcmp(type, "ambiverted") == 0)
    {
	*ambivertedScore = *ambivertedScore + *selectedScore;
	totalAmbivertedQuestions++;
    }
    if (strcmp(type, "flexible") == 0)
    {
	*flexibleScore = *flexibleScore + *selectedScore;
	totalFlexibleQuestions++;
    }
    if (strcmp(type, "reactive") == 0)
    {
	*reactiveScore = *reactiveScore + *selectedScore;
	totalReactiveQuestions++;
    }
}

void playGame()
{
    if(totalQuestions > 0)
    {

	int failed, choice, isNumber,
	ambivertedScore = 0, flexibleScore = 0, reactiveScore = 0, i;

	for (i = 0; i < totalQuestions; i++)
	{
	   clrscr();
	   failed = 0;
	   printf("------------------------------------\nQuestion No: '%d'\nCurrent Question: '%s?'\nSelect your option from bellow \n1. Strongly Agree\t2. Agree\t3. Neutral\t4. Disagree\t5. Strongly Disagree\n------------------------------------\n", i + 1, questions[i].question);
	   printf("Your Selection: ");
	   do
	   {

		if (failed == 1)
		{
		    printf("Please re-enter correct option: ");
		}
		failed = 0;
		choice;
		isNumber = scanf("%d", &choice);
		if (isNumber != 1)
		{
		    failed = 1;
		    scanf("%*[^\n]");
		}
		else
		{
		    switch (choice)
		    {
		    case 1:
		       calculateScore(questions[i].type, &questions[i].option1Score, &ambivertedScore, &flexibleScore, &reactiveScore);
		       break;
		    case 2:
		       calculateScore(questions[i].type, &questions[i].option2Score, &ambivertedScore, &flexibleScore, &reactiveScore);
		       break;
		    case 3:
		       calculateScore(questions[i].type, &questions[i].option3Score, &ambivertedScore, &flexibleScore, &reactiveScore);
		       break;
		    case 4:
		       calculateScore(questions[i].type, &questions[i].option4Score, &ambivertedScore, &flexibleScore, &reactiveScore);
		       break;
		    case 5:
		       calculateScore(questions[i].type, &questions[i].option5Score, &ambivertedScore, &flexibleScore, &reactiveScore);
		       break;
		    default:
		       failed = 1;
		       break;
		    }
		}
	    } while (failed == 1);
	    printf("------------------------------------\n\n");
	}
	clrscr();


	printf("------------------------------------\nYour Scores Are As Follows\n");
	printf("Ambiverted Score: %f\n", (ambivertedScore / (totalAmbivertedQuestions * 50.0)) * 100);
	printf("Flexible Score: %f\n",(flexibleScore / (totalFlexibleQuestions * 50.0)) * 100);
	printf("Reactive Score: %f\n------------------------------------\n",(reactiveScore / (totalReactiveQuestions * 50.0)) * 100);
    }
    else
    {
	printf("No Questions Found!!!\n");
    }
    invokeMainMenu();
}

void readCsvFile()
{
    char *filePath = "file.txt";
    FILE *file = fopen(filePath, "r");
    if (!file)
    {
	fprintf(stderr,"Can't open %s: %s\n",filePath,strerror(errno));
	getch();
	exit(1);
    }
    else
    {

	int row = 0;
	int read;
	char buffer[1024];
	fgets(buffer, 1024, file);
	do
	{
	    questions[row].question = (char *)malloc(1024 * sizeof(char));
	    questions[row].type = (char *)malloc(50 * sizeof(char));
	    read = fscanf(file, "%[^,],%d,%d,%d,%d,%d,%[^\n]\n", questions[row].question, &questions[row].option1Score, &questions[row].option2Score, &questions[row].option3Score, &questions[row].option4Score, &questions[row].option5Score, questions[row].type);

	    if (read == 7)
		totalQuestions++;

	    if (read != 7 && !feof(file))
	    {
		printf("File format incorrect!.");
		return;
	    }

	    if (ferror(file))
	    {
		printf("Error while reading file.");
		return;
	    }

	    row++;
	} while (!feof(file));

	fclose(file);
    }
    return;
}

void showMenu()
{
    int failed = 0, choice, isNumber;
    clrscr();
    printf("Welcome to Personality Test!!!\n");
    printf("------------------------------------\n");
    printf("Please select from following options to proceed...\n\n");
    printf("1. Start Test\t2. See All Questions\t3. Exit\n");
    printf("------------------------------------\n");


    printf("Please select option: ");
    do
    {
	if (failed == 1)
	{
	    printf("Please re-enter correct option: ");
	}
	failed = 0;

	isNumber = scanf("%d", &choice);
	if (isNumber != 1)
	{
	    failed = 1;
	    scanf("%*[^\n]");
	}
	else
	{
	    switch (choice)
	    {
	    case 1:
		playGame();
		break;
	    case 2:
		printQuestions();
		break;
	    case 3:
		exit(1);
		break;
	    default:
		failed = 1;
		break;
	    }
	}
    } while (failed == 1);
}

void invokeMainMenu()
{
    int failed = 0, choice, isNumber;
    printf("Want to go back to main menu or exit?\n");
    printf("1. Main Menu\t2. Exit\n");

    printf("Please select option: ");
    do
    {
	if (failed == 1)
	{
	    printf("Please re-enter correct option: ");
	}
	failed = 0;
	choice;
	isNumber = scanf("%d", &choice);
	if (isNumber != 1)
	{
	    failed = 1;
	    scanf("%*[^\n]");
	}
	else
	{
	    switch (choice)
	    {
	    case 1:
		showMenu();
		break;
	    case 2:
		exit(1);
		break;
	    default:
		failed = 1;
		break;
	    }
	}
    } while (failed == 1);
}

int main()
{
    errno = 0;
    clrscr();
    readCsvFile();
    showMenu();
    printf("\n");
    return 0;
}