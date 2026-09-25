    /*
 * Full Name:     [Preston Ng]
 * Student ID:    [002096670]
 * Course:        EECE 2140 - Computing Fundamentals for Engineers
 * Section:       [05]
 * Semester:      Fall 2026
 * Assignment:    Homework 1 - Quiz Grade Analyzer
 * Compilation:   g++ -std=c++11 main.cpp -o main
 * Description:   Reads an unknown number of quiz scores from standard
 *                input and reports the count, sum, minimum, maximum,
 *                average, and letter grade for the quiz.
 */

#include <iostream>

int main(){
    double count = 0;
    double sum = 0;
    int minimum = 101;
    int maximum = -1;
    int score = 0;
     double average = 0;
    char letterGrade;
    const double A_CUTOFF = 90;
    const double B_CUTOFF = 80;
    const double C_CUTOFF = 70;
    const double D_CUTOFF = 60;


    std::cout << "Enter quiz scores (Ctrl+D / Ctrl+Z to end):";
    while (std::cin >> score){
        sum += score;
        count++;
        if (score < minimum){
            minimum = score;
            }
            if (score > maximum){
                maximum = score;
            }
            }
    if (count == 0){
    std::cout << "No scores were entered.";
    return 0;
        }
        
    average = sum/count;
    if (average >= A_CUTOFF){
        letterGrade = 'A';
    }else if(average >= B_CUTOFF){
        letterGrade = 'B';
}else if(average >= C_CUTOFF){
        letterGrade = 'C';
}else if(average >= D_CUTOFF){
        letterGrade = 'D';
}else {
        letterGrade = 'F';}

        
    
std::cout << " --- Quiz Summary --- "<<std::endl;
std::cout << "Scores entered: "<<count<< std::endl;
std::cout << "Sum: "<<sum<< std::endl;
std::cout << "Minimum: "<<minimum<< std::endl;
std::cout << "Maximum: "<<maximum<< std::endl;
std::cout << "Average: "<<average<< std::endl;
std::cout << "Letter grade: "<<letterGrade<< std::endl;

    }


        

    // TODO 1: Declare and initialize the variables you will need to keep
    //         a running count, sum, minimum, and maximum of the scores
    //         entered so far. Give each one a starting value that will
    //         not produce an incorrect result before any score has been
    //         read.

    // TODO 2: Print this prompt exactly once, before reading any input:
    //         "Enter quiz scores (Ctrl+D / Ctrl+Z to end):"

    // TODO 3: Read scores one at a time, for as many scores as the user
    //         enters, updating your count/sum/min/max variables for each
    //         score read. You do not know in advance how many scores
    //         will be entered, so the number of times you read a score
    //         must not be fixed or asked from the user.

    // TODO 4: If no scores were entered, print exactly:
    //         "No scores were entered."
    //         and end the program without doing anything else below.

    // TODO 5: Compute the class average as a value that can represent a
    //         fraction (not truncated to a whole number).

    // TODO 6: Declare named const variables for the five grade cutoffs
    //         described in the assignment (90, 80, 70, 60), then use
    //         them (not the raw numbers) to determine the correct letter
    //         grade for the average.

    // TODO 7: Print the final summary in the exact format described in
    //         the assignment:
    //         --- Quiz Summary ---
    //         Scores entered: <count>
    //         Sum: <sum>
    //         Minimum: <minimum>
    //         Maximum: <maximum>
    //         Average: <average>
    //         Letter grade: <letter>



