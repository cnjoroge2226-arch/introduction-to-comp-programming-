#include  <iostream>
#include  <string>
#include  <iomanip>
using namespace std;
int main(){
 //=======================================
 // variable declaration
 //each variable is a storage box with a specific data type
 //=======================================
 string studentName; // variable to store the name of the student
 string course; //store the name of the course(bbit/bcs)

 int score1, score2, score3; // store the scores of the student
 int totalScore; // store the total score of the student
 double averageScore; // store the average score of the student
 double percentage; // store the percentage of the student
 //=======================================
 //constant declaration
 //a constant cannot be changed during the execution of the program
    //=======================================
    const int maxScore = 100; // maximum score for each subject
    //=======================================
    //welcome banner
    //cout is used to display the output on the screen
    //endl moves the cursor to the next line
    //=======================================
    cout << "======================================" << endl;
    cout << "Welcome to the Student Score Calculator" << endl;
    cout << "======================================" << endl;
    cout<<endl;
    //=======================================
    //question 1: ask the user to enter the name of the student
    //=======================================
    cout << "Enter the name of the student: ";
    getline(cin, studentName); // read the name of the student from the user(includes spaces)
    //=======================================
    //question 2: ask the user to enter the name of the course
    //=======================================
    cout << "Enter the name of the course (bbit/bcs): ";
    getline(cin, course); 
    //=======================================
    //question 3: ask the user to enter the scores of the student
    //cin>>
    //=======================================
    cout << "Enter the score of the student in subject 1: ";
    cin >> score1; // read the score of the student in subject 1 from the
    cout << "Enter the score of the student in subject 2: ";
    cin >> score2; // read the score of the student in subject 2 from the user
    cout << "Enter the score of the student in subject 3: ";
    cin >> score3; // read the score of the student in subject 3 from the user
    //=======================================
    //calculation 1 : calculate the total score of the student
    //the + operator adds the three scores
    //the = operator assigns the result to the totalScore variable
    //=======================================
    totalScore = score1 + score2 + score3; 
    //=======================================
    //calculation 2 : calculate the average score of the student
    //the / operator divides the total score by the number of subjects(3)
    //we use 3.0 (double)to get decimal division 
    //if we use 3 (int) the result would be truncated
    //=======================================
    averageScore = totalScore / 3.0;
    //=======================================
    //calculation 3 : calculate the percentage of the student
    //formula:(total score / maximum score) * 100
    //maximumpossible =3tests * 100 = 300
    //=======================================
    percentage = (totalScore /300.0) * 100;
    //=======================================
    //display report card
    //fixed << setprecision(2) is used to display the average score and percentage with 2 decimal places
    //=======================================
    cout << endl;
    cout << "======================================" << endl;
    cout << "Report Card  "<<endl;
    cout << "======================================" << endl;
    cout <<endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Course: " << course << endl;
    cout<< endl;
    cout << "Score in Subject 1: " << score1 << endl;
    cout << "Score in Subject 2: " << score2 << endl;
    cout << "Score in Subject 3: " << score3 << endl;
    cout << endl;
    cout << "Total Score: " << totalScore <<"/300" << endl;
    cout << "Average Score: " << fixed << setprecision(2) << averageScore << endl;
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
    cout << endl;
    //determine pass or fail
    if(percentage >= 50){
        cout << "Result: Pass" << endl;}
        else{
        cout << "Result: Fail" << endl;
    }
    cout << "======================================" << endl;
    
























    return 0;
}