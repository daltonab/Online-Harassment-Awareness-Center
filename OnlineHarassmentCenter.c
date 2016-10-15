/* Dalton Burge
 * prevention of hack harassment */

//inlcude libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//define globalconstants
#define MAX 300
#define REPORT 301

//function prototypes and global variables
void printMenu( void );
void learn( void );
void takeTest( void );
char name[MAX];
char name1[MAX] = { "NONE" };
float percentage;
void reportIncident( void );
int passwordCheck( int userPassword, int adminPassword );
void adminStation( void );
int counterReport = 0;
int counterTest = 0;
char aOFName[50];
char aOFName1[50];
char aOFReports[50];
float aOFTests[50];
char incident[REPORT];

//main function
int main ( void )
{
    //opening message
    printf( "\n******Welcome to the Online Harassment Awareness Center******\n" );
    
    //how to exit the while/switch loop
    int ender = 1;
    int selection = 0;
    
    //begining of while loop that runs basically the whole program
    while( ender == 1 )
    {
        //switch inside while allows for multiple choices in menu
        switch( selection )
        {   
            //auto case to print main menu
            case 0:
            {
                printMenu();
                printf( "\nPlease select an option: " );
                scanf( "%d", &selection );
                break;
            }

            //call the informational function
            case 1:
            {
                learn();
                selection = 0;
                break;
            }

            //test
            case 2:
            {
                takeTest();
                printf( "\nThank you for taking our test!\n" );
                printf( "\nBe sure to check out our other features or take the test again!\n" );
                selection = 0;
                break;
            }

            //report an incident
            case 3:
            {
                reportIncident();
                selection = 0;
                break;
            }

            //admin mode
            case 4:
            {
                int userPassword;
                int adminPassword = 12345;

                printf( "\nEnter Admin Password: " );
                scanf( "%d", &userPassword );
                if(passwordCheck( userPassword, adminPassword ) == 1 )
                {
                    adminStation();
                    selection = 0;
                    break;
                }
                else
                {
                    printf( "\nIncorrect password. Please try again\n" );
                    selection = 4;
                    break;
                }
            }
            
            //end program
            case 5:
            {
                printf( "\nThank you! Have a nice day!\n" );
                ender = 0;
                break;
            }

        
            //catch all incorrect menu inputs
            default:
            {
                printf( "\nNot a valid selection. Please try again.\n" );
                selection = 0;
                break;
            }
        }
    }
        
//indicates succesful termination
return 0;

}

//function for printing main menu
void printMenu( void )
{
    printf( "\nMAIN MENU\n" );
    printf( "\n1. Learn about online harassment\n" );
    printf( "\n2. Test your knowledge\n" );
    printf( "\n3. Report an incident\n" );
    printf( "\n4. Admin Login\n" );
    printf( "\n5. Exit\n" );
}

//function that holds the interactive educational portion
void learn( void )
{
    //declare variables
    int q1ans;
    int q2ans;
    int q3ans;

    //begin info session
    printf( "\n******Welcome to the informational session!******\n" );
    printf( "\nOnline harassment is a very real and serious problem\nand we are glad that you have taken the first step\nto raise awareness.\n" );
    printf( "Online harassment affects more people than you may expect\n" );
    printf( "\n(FOR ENTIRE SESSION ENTER NUMBER OF SELECTION NOT THE ANSWER ITSELF)\n" );
    printf( "What percentage of people do you think are affected by online harassment?\n" );
    printf( "\n1. 35 percent" );
    printf( "\n2. 40 percent" );
    printf( "\n3. 45 percent" );
    printf( "\n4. 50 percent" );
    printf( "\nAnswer: " );
    scanf( "%d", &q1ans );
    
    while( q1ans>4 || q1ans<1 )
    {
        printf( "\nInvalid answer please try again\n" );
        printf( "\nWhat percentage of people do you think are affected by online harassment?\n" );
        printf( "\n1. 35 percent" );
        printf( "\n2. 40 percent" );
        printf( "\n3. 45 percent" );
        printf( "\n4. 50 percent" );
        printf( "\nAnswer: " );
        scanf( "%d", &q1ans );
    }
    
    //right answer
    if( q1ans == 2 )
    {
        printf( "\nCorrect!\n" );
    }
    //catch all incorrect answers
    else
    {
        printf( "\nUnfortunately your answer was incorrect.\n" );
    }

    printf( "\n40 percent of people have personally experienced online harassment at some point.\n" );
    printf( "But what is online harassment?\n" );
    printf( "\nWhich of these answers do you think would be considered online harassment?\n" );
    printf( "\n1. Name-calling" );
    printf( "\n2. Efforts to purposely embarrass someone" );
    printf( "\n3. Physical threats" );
    printf( "\n4. All of the above" );
    printf( "\nAnswer: " );
    scanf( "%d", &q2ans );

    while( q2ans>4 || q2ans<1 )
    {
        printf( "\nInvalid answer please try again\n" );
        printf( "\nWhich of these answers do you think would be considered online harassment?\n" );
        printf( "\n1. Name-calling" );
        printf( "\n2. Efforts to purposely embarrass someone" );
        printf( "\n3. Physical threats" );
        printf( "\n4. All of the above" );
        printf( "\nAnswer: " );
        scanf( "%d", &q2ans );
    }
    
    //right answer
    if( q2ans == 4 )
    {
        printf( "\nCorrect!\n" );
    }
    //catch all incorrect answers
    else
    {
        printf( "\nYes this answer is correct but all of them were so 4 was the correct answer.\n" );
    }

    printf( "\nOnline harasment is considered to be all of those things plus\nsexual harassment, stalking, and harassment over a sustained period of time.\n" );
    printf( "\nThese kinds of behavior should not be tolerated any longer.\n" );
    printf( "\nIn this portion of the session we will talk about what kinds of people experience online harassment.\n" );
    printf( "\nThe young adult demographic is most likely to experience online harassment.\n" );
    printf( "This is not ok. The young users of the internet should feel safe so they\ncan learn to use the web as a resource not a source of negativity.\n" );
    printf( "Men are more likely to experience online harassment on a daily basis than women.\n" );
    printf( "However women are more likely to experience a more severe form of harassment\n" );
    printf( "No matter your gender or race all people should be able to use the internet\n without worrying about experiencing harassment.\n" );

    printf( "\nWhat do you think is the most common platform for online harassment?\n" );
    printf( "1. Social Media\n" );
    printf( "2. Comment sections\n" );
    printf( "3. Video Games\n" );
    printf( "4. Discussion Websites\n" );
    printf( "Answer: " );
    scanf( "%d", &q3ans );
    
    while( q3ans>4 || q3ans<1 )
    {
        printf( "\nInvalid answer please try again.\n" );
        printf( "\nWhat do you think is the most common platform for online harassment?\n" );
        printf( "1. Social Media\n" );
        printf( "2. Comment sections\n" );
        printf( "3. Video Games\n" );
        printf( "4. Discussion Websites\n" );
        printf( "Answer: " );
        scanf( "%d", &q3ans );
    }
    
    //right answer
    if( q3ans == 1 )
    {
        printf( "\nCorrect!\n" );
    }
    //catch all incorrect answers
    else
    {
        printf( "\nYes this is a platform for online harassment however it is not the correct answer.\n" );
    }

    printf( "\n66 percent of people have said that when they experienced online harassment\n it was on some sort of social media website.\n" );
    printf( "All of these answers do experience problems but social media is the largest source.\n" );
    printf( "\nRaising awareness is the first step to ending online harassment.\n" );
    printf( "Thank you for starting your journey towards making the internet a more friendly place\n" );
    printf( "For more information about online harassment be sure to check out these websites\n" );
    printf( "\nwww.pewresearch.org/fact-tank/2014/10/30/5-facts-about-online-harrasment/\n" );
    printf( "www.dosomething.org/us/facts/11-facts-about-cyber-bullying\n" );
    printf( "\nIf you would like to test your knowledge be sure to check out our test!\n" );
    printf( "\nIf you would like to join us in the fight against online harasment check out\nwww.hackharassment.com\n" );
    printf( "\nIf you would like to report an instance of online harassment go to our Report an Incident\npaige in the main menu.\n" );
    printf( "\nThank you for taking steps to make the internet a safer place for all users!\n" );

    
    

}

//function for the test portion
void takeTest( void )
{   
    //if loop with counter at bottom to make sure i dont store and infinite number of arrays and blow the server
    if( counterTest<50 )
    {
        //declare variables
        float correctAnswers = 0;
        float incorrectAnswers = 0;
        float totalAnswers = 5;
        int q1ans;
        int q2ans;
        int q3ans;
        int q4ans;
        int q5ans;


        printf( "\n******Welcome to the Online Harassment Knowledge Test!******\n" );
        printf( "Enter your first name: " );
        scanf( "%s", name1 );
        printf( "\nWelcome %s! Good Luck!\n", name1 );
        printf( "\nRemember just like in the previous portion enter the answer number not the answer itself.\n" );
        printf( "\nQUESTION NUMBER ONE\n" );
        printf( "\nWhat age demographic is most likely to experience online harassment?\n" );
        printf( "\n1. Elderly" );
        printf( "\n2. Middle aged" );
        printf( "\n3. Young Adults" );
        printf( "\n4. Children" );
        printf( "\nAnswer: " );
        scanf( "%d", &q1ans );
    
        while( q1ans>4 || q1ans<1 )
        {
            printf( "\nInvalid answer try again.\n" );
            printf( "\nWhat age demographic is most likely to experience online harassment?\n" );
            printf( "\n1. Elderly" );
            printf( "\n2. Middle aged" );
            printf( "\n3. Young Adults" );
            printf( "\n4. Children" );
            printf( "\nAnswer: " );
            scanf( "%d", &q1ans );
        }
    
        //correct answer
        if( q1ans == 3 )
        {
            printf( "\nCorrect!\n" );
            correctAnswers += 1;
        }
        //catch all incorrect answers
        else
        {
            printf( "\nIncorrect. The correct answer is 3: Young Adults.\n" );
            incorrectAnswers += 1;
        }

        printf( "\nQUESTION NUMBER TWO\n" );
        printf( "\nWhat percentage of people have experienced online harassmant?\n" );
        printf( "1. 100 percent\n" );
        printf( "2. 50 percent\n" );
        printf( "3. 15 percent\n" );
        printf( "4. 40 percent\n" );
        printf( "Answer: " );
        scanf( "%d", &q2ans );

        while( q2ans>4 || q2ans<1 )
        {
            printf( "\nInvalid answer try again\n" );
            printf( "\nWhat percentage of people have experienced online harassmant?\n" );
            printf( "1. 100 percent\n" );
            printf( "2. 50 percent\n" );
            printf( "3. 15 percent\n" );
            printf( "4. 40 percent\n" );
            printf( "Answer: " );
            scanf( "%d", &q2ans );
        }

        //correct answer
        if( q2ans == 4 )
        {
            printf( "\nCorrect!\n" );
            correctAnswers+=1;
        }
        //catch all incorrect answers
        else
        {
            printf( "\nIncorrect. The correct answer is 4: 40 percent\n" );
            incorrectAnswers+=1;
        }

        printf( "\nQUESTION NUMBER THREE\n" );
        printf( "\nAre boys or girls more likely to experience online harassment?\n" );
        printf( "1. Boys\n" );
        printf( "2. Girls\n" );
        printf( "Answer: " );
        scanf( "%d", &q3ans );

        while( q3ans>2 || q3ans<1 )
        {
            printf( "\nInvalid answer please try again\n" );
            printf( "\nQUESTION NUMBER THREE\n" );
            printf( "\nAre boys or girls more likely to experience online harassment?\n" );
            printf( "1. Boys\n" );
            printf( "2. Girls\n" );
            printf( "Answer: " );
            scanf( "%d", &q3ans );
        }
        
        //correct answer
        if( q3ans == 1 )
        {
            printf( "\nCorrect!\n" );
            correctAnswers+=1;
        }
        //catch all incorrect answers
        else
        {
            printf( "\nIncorrect. The correct answer is 1: Boys.\n" );
            incorrectAnswers+=1;
        }

        printf( "\nQUESTION NUMER FOUR\n" );
        printf( "\nWhere are people most likely to encounter online harassment?\n" );
        printf( "1. Social Media\n" );
        printf( "2. Online Gaming\n" );
        printf( "3. Comment Sections\n" );
        printf( "4. Chat Sites\n" );
        printf( "Answer: " );
        scanf( "%d", &q4ans );

        while( q4ans>4 || q4ans<1 )
        {
            printf( "\nInvalid answer please try again\n" );
            printf( "\nQUESTION NUMER FOUR\n" );
            printf( "\nWhere are people most likely to encounter online harassment?\n" );
            printf( "1. Social Media\n" );
            printf( "2. Online Gaming\n" );
            printf( "3. Comment Sections\n" );
            printf( "4. Chat Sites\n" );
            printf( "Answer: " );
            scanf( "%d", &q4ans );
        }

        //correct answer
        if( q4ans == 1 )
        {
            printf( "\nCorrect!\n" );
            correctAnswers+=1;
        }
        //catch all incorrect answers
        else
        {
            printf( "\nIncorrect. The correct answer is 1: Social media.\n" );
            incorrectAnswers+=1;
        }
    
        printf( "\nFINAL QUESTION\n" );
        printf( "\nWhat should you do if you or someone around you experiences online harassment?\n" );
        printf( "1. Ignore it\n" );
        printf( "2. Insult them back\n" );
        printf( "3. Report the offender\n" );
        printf( "Answer: " );
        scanf( "%d", &q5ans );

        while( q5ans>3 || q5ans<1 )
        {
            printf( "\nInvalid answer please try again.\n" );
            printf( "\nWhat should you do if you or someone around you experiences online harassment?\n" );
            printf( "1. Ignore it\n" );
            printf( "2. Insult them back\n" );
            printf( "3. Report the offender\n" );
            printf( "Answer: " );
            scanf( "%d", &q5ans );
        }

        //correct answer
        if( q5ans == 3 )
        {
            printf( "\nCorrect!\n" );
            correctAnswers+=1;
        }
        //catch all incorrect answers
        else
        {
            printf( "\nIncorrect. The correct answer is 3: Report the offender.\n" );
            incorrectAnswers+=1;
        }

        printf( "\nCongrats %s you have completed the test!\n", name1 );

        printf( "\nYou got %.2f correct and %.2f incorrect\n", correctAnswers, incorrectAnswers );

        percentage = ( correctAnswers / totalAnswers ) * 100;

        printf( "\nYour percentage correct is %.2f\n", percentage );

    
        //IMPORTANT creates array of arrays to store info to be printed later in admin mode also ++counter
        aOFTests[counterTest] = percentage;
        //aOFName1[counterTest] = {{name1}};
        strncpy(aOFName1, name1, MAX );
        ++counterTest;
    }

    //if array of tests is already full you can not add more
   // if( counterTest>= 50 )
    //{
       // printf( "\nWe are sorry but there are too many tests saved in our system at this time.\n" );
       // printf( "\nPlease contact an administrator to resolve this problem\n" );
   // }


}

//function for user to write an incident report
void reportIncident( void )
{
    //counter to control global arrays and counter
    //if( counterReport<50 )
    //{
        //begin incident report
        printf( "\n******Welcome to our incident report.*******\n" );
        printf( "\nIf you would like to enter your first name for out records you can\nif not enter ANONYMOUS\n" );
        printf( "Name: " );
        scanf( "%s%*c", name );
        printf( "Please type your report in 300 characters or less\n" );
        printf( "Please include the following information\n" );
        printf( "\nPlatform you experienced it on. (Game, Social Media, Website, Comments, etc.... )\n" );
        printf( "Name of offender if known\n" );
        printf( "And a short description of the incident\n" );
        printf( "Type here. Press Enter when finished: \n" );
        fgets( incident,REPORT,stdin );
        
        //assigns items to global arrays to be printed later in admin mode
        //aOFReports[counterReport] = {{incident}};
        strncpy( aOFReports, incident, REPORT );
        //aOFName[counterReport] = {{name}};
        strncpy( aOFName, name, MAX );
        ++counterReport;
    //}

    //array can only store up to 50 reports
    //if( counterReport>=50 )
    //{
       // printf( "\nWe are sorry but there are too many reports saved in our system at this time.\n" );
        //printf( "\nPlease contact an administrator to resolve this problem\n" );
   // }


}

//function to check if passwords match
int passwordCheck( int userPassword, int adminPassword )
{
    if( userPassword == adminPassword )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//function to run admin mode
void adminStation( void )
{   
    //selects which
    int selection = 0;
    int whilelooper = 1;
    while( whilelooper == 1 )
    {
        //switch to allow access back to the menu
        switch( selection )
        {
            //case 0 is main menu
            case 0:
            {
                printf( "\n******Welcome to the admin station******\n" );
                printf( "\nWhat would you like to look at?\n" );
                printf( "\n1. Test Scores" );
                printf( "\n2. Incident Reports" );
                printf( "\n3. Log Out" );
                printf( "\nAnswer: " );
                scanf( "%d", &selection );
                break;
            }
            
            //default catches incorrect menu inputs
            default:
            {
                printf( "\nInvalid input. Please try again.\n" );
                printf( "\nWhat would you like to look at?\n" );
                printf( "\n1. Test Scores" );
                printf( "\n2. Incident Reports" );
                printf( "\n3. Log Out" );
                printf( "\nAnswer: " );
                scanf( "%d", &selection );
                break;
            }
            
            //case 1 allows user to see test results
            case 1:
            {   
                printf( "\nThe last user to take the test is %s\n", aOFName1 );
                printf( "\nTheir score was %.2f percent.\n", *aOFTests );
                //loop allows user to search more than once, test selection selects what test to look at
                //int loop = 1;
                //int testSelection;
                
                //menu for test selection
                //while( loop == 1 )
                /*{
                    printf( "\nWhich test score would you like to see?\n" );
                    printf( "\nOptions are 0-49\n" );
                    printf( "\nEnter -1 to see all answers\n" );
                    printf( "\nEnter number of test to see one specific test\n" );
                    printf( "\nAnswer: " );
                    scanf( "%d", &testSelection );
                    
                    //catch incorrect inputs
                    while( testSelection<-1 || testSelection>49 )
                    {
                        printf( "\nAcceptable inputs are -1 to 49\n" );
                        printf( "\nEnter -1 to see all answers\n" );
                        printf( "\nEnter number of test to see one specific test\n" );
                        printf( "\nAnswer: " );
                        scanf( "%d", &testSelection );
                    }
                    
                    //for all instances that you print one at a time
                    if( testSelection != -1 )
                    {
                        //if user inputs an array number that doesnt have a value
                        while( testSelection>counterTest )
                        {
                            printf( "\nThere have not been this many tests taken\n" );
                            printf( "\nSelect new test: " );
                            scanf( "%d", &testSelection );
                        }

                        printf( "\nSelected test was taken by user %s\n", &aOFName1[testSelection] );
                        printf( "\nUser scored %.2f percent\n", aOFTests[testSelection] );
                        selection = 0;
                    }
                    
                    //when user asks to see every test result
                    if( testSelection == -1 )
                   */ {
                        //int printCounter;
                        
                        //prints every score and name
                        //printf( "\nThere were %d tests taken\n", counterTest );
                        //printf( "\nThe results of the last are as follows:\n" );
                        /*for( printCounter = 0; printCounter<=counterTest; ++printCounter )
                        {
                            printf( "\nName: %s\n", &aOFName1[testSelection] );
                            printf( "\nScore: %.2f percent", aOFTests[testSelection] );
                        }

                        //finds highes score and name assigned to it
                        float highestScore = 0.00;
                        float aOFHighestScore[50];
                        char aOFHighestScoreName[50];
                        int i;
                        int j = 0;
                       //asdfasdf 
                        //create new highes score
                        for( i = 0; i<counterTest; ++i )
                        {
                            if( aOFTests[i]>highestScore )
                            {
                                aOFHighestScore[j] = aOFTests[i];
                                aOFHighestScoreName[j] = aOFName1[i];

                                ++j;
                            }
                            if( aOFTests[i]==highestScore )
                            {
                                aOFHighestScore[j] = aOFTests[i];
                                aOFHighestScoreName[j] = aOFName1[i];

                                ++j;
                            }   
                        }
                
                        int printHighestScoreCounter;
                        
                        //print highest score(s)
                        for( printHighestScoreCounter = 0; printHighestScoreCounter<j; ++printHighestScoreCounter )
                        {
                            printf( "\nHighest score was by %s with a score of %.2f\n", &aOFHighestScoreName[j], aOFHighestScore[j] );
                        }   
                   */ }
                    
                    //allows user to run again
                    /*printf( "\nWould you like to view more tests? 1 for yes 2 for no.\n" );
                    printf( "\nAnswer: " );
                    scanf( "%d", &loop );*/

               // }
                selection = 0;
                break;
            }
            
            //user prints incident reports
            case 2:
            {
                printf( "\nPrinting Report\n" );

                int x;

                for( x = 0; x<1; ++x )
                {
                    printf( "\nName: %s ", &aOFName[x] );
                    printf( "\nReport: %s ", &aOFReports[x] );
                }
                selection = 0;
                break;
            }

            case 3:
            {
                printf( "\nGoodbye\n" );
                whilelooper = 0;
                break;
            }
        }
    }

}
