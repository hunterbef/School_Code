#include <stdio.h>

#define MAX_STUDENTS 10
#define MAX_EXAMS 4

void load_default(int st_no, int exam_no, int scores[][MAX_EXAMS]);
void print_table(int st_no, int exam_no, int scores[][MAX_EXAMS]);
void print_student(int stID, int st_no, int exam_no, int scores[][MAX_EXAMS]);
void print_exam(int examID, int st_no, int exam_no, int scores[][MAX_EXAMS]);
void grade_alert_all(int exam_ID, int st_no, int exam_no, int scores[][MAX_EXAMS]);
void add_value(int exam_ID, int value, int st_no, int exam_no, int scores[][MAX_EXAMS]);
void replace(int st_ID, int exam_ID, int new_grade, int st_no, int exam_no, int scores[][MAX_EXAMS]);

int main(){
	int scores[MAX_STUDENTS][MAX_EXAMS];
    int num_st = MAX_STUDENTS;
    int num_exams = MAX_EXAMS;
    int choice=-1, st_ID=-1; 
    int examNum = -1, addValue = -1, newValue = -1;

    printf("This program simulates a grade roster for 10 students with 4 exams.\n");
    do{
        printf("\n0-exit\n");
        printf("1-load\n");
        printf("2-print all\n");
        printf("3-print student info (given studentID, prints all exam grades and average exam grade)\n");
        // print the remaining options (see sample output
        printf("4-print by exam(give Exam ID, prints all grades for this exam)");
        printf("5-low grade alert (give exam ID, prints all students who have below 60 in this exam)\n");
        printf("6-add value (given exam ID and value to be added, adds that value to that exam for all students)\n");
        printf("7-replace (given exam ID, student ID and new grade, replaces the old grade with the new one)\n");

        printf("\n---Enter your choice: ");
        scanf("%d", &choice);
        switch (choice){
        case 0: 
            break; // exit the switch, wile exit the loop because of condition.
        case 1:
            load_default(num_st, num_exams, scores);
            printf("The data was successfully loaded.\n");
            break;
        case 2:
            print_table(num_st, num_exams, scores);
            break;
        case 3:
            printf("Please enter the student ID (0-%d): ", num_st-1);
            scanf("%d", &st_ID);
            print_student(st_ID, num_st, num_exams, scores);
            break;
        // continue to implement the other cases
        case 4:
            printf("Please enter the exam ID (1-4): ");
            scanf("%d", &examNum);
            print_exam(examNum, num_st, num_exams, scores);
            break;
        case 5:
            printf("Please enter the exam ID (1-4): ");
            scanf("%d", &examNum);
            grade_alert_all(examNum, num_st, num_exams, scores);
            break;
        case 6:
            printf("Please enter the exam ID and the value to be added: ");
            scanf("%d%d", &examNum, &addValue);
            add_value(examNum, addValue, num_st, num_exams, scores);
            break;
        case 7:
            printf("Please enter studentID, examID and new grade (in this order): ");
            scanf("%d%d%d", &st_ID, &examNum, &newValue);
            replace(st_ID, examNum, newValue, num_st, num_exams, scores);
            break;
        default:
            printf("Invalid choice.\n");        //default for wrong input
        }
    } while (choice!=0);
    printf("\nGood bye!\n");
    return 0;
}

void load_default(int st_no, int exam_no, int scores[][MAX_EXAMS]){
    int hardcoded[MAX_STUDENTS][MAX_EXAMS] = {
                            {58, 67, 0,	0},
                            {72, 67, 56, 65},
                            {65, 50, 20, 30},
                            {62, 48, 80, 32},
                            {35, 0,	0, 0},
                            {89, 60, 90, 86},
                            {67, 70, 96, 100},
                            {100, 90, 66, 100},
                            {100, 59, 100, 97},
                            {70, 89, 34, 79}
                            };
    int st, exam;
    for(st=0; st<st_no; st++){
        for(exam=0; exam<exam_no; exam++){
            scores[st][exam] = hardcoded[st][exam];
        }
    }
}

//functions coded by student
void print_table(int st_no, int exam_no, int scores[][MAX_EXAMS]) {
    printf("---------------------------------------\n");
    printf("|stID | Exam1 | Exam2 | Exam3 | Exam4 |\n");
    for (int i = 0; i < st_no; i++) {
        printf("---------------------------------------\n");
        printf("|%4d ", i);
        for (int x = 0; x < exam_no; x++) {
            printf("| %5d ", scores[i][x]);
        }
        printf("|\n");
    }
    printf("---------------------------------------\n");        //prints out all scores for all students in a formatted table
}

void print_student(int stID, int st_no, int exam_no, int scores[][MAX_EXAMS]) {
    float total = 0, average = 0;
    printf("---------------------------------------\n");
    printf("|stID | Exam1 | Exam2 | Exam3 | Exam4 |\n");
    printf("---------------------------------------\n");
    printf("|%4d ", stID);
    for (int x = 0; x < exam_no; x++) {
        printf("| %5d ", scores[stID][x]);
        total += scores[stID][x];                               //prints out all exam scores for a specific student as given by user input
    }
    printf("|\n");
    printf("---------------------------------------\n");

    average = (total / 4);
    printf("Average exam score: %.2f\n", average);              //prints out average exam score for the student
}

void print_exam(int examID, int st_no, int exam_no, int scores[][MAX_EXAMS]) {
    printf("Exam %d grades:\n", examID);
    printf("|stID | Exam%d |\n", examID);
    for(int x = 0; x < st_no; x++) {
        printf("|%4d | %5d |\n", x, scores[x][examID - 1]);             //prints out all students scores for a specific exam as given by user input
    }
}

void grade_alert_all(int exam_ID, int st_no, int exam_no, int scores[][MAX_EXAMS]) {
    printf("Exam %d ALERT grades lower than 60:\n", exam_ID);
    printf("|stID | Exam%d |\n", exam_ID);
    for(int x = 0; x < st_no; x++) {
        if ((scores[x][exam_ID - 1]) < 60) {
            printf("|%4d | %5d |\n", x, scores[x][exam_ID - 1]);        //alerts students who made less than a 60 on a certain exam given by user input
        }
    }
}

void add_value(int exam_ID, int value, int st_no, int exam_no, int scores[][MAX_EXAMS]) {
    printf("Exam%d change all grades by adding %d:\n", exam_ID, value);
    printf("|stID |  old  |  new  |\n");
    for (int i = 0; i < st_no; i++) {
        printf("|%4d |%6d |%6d |\n", i, scores[i][exam_ID - 1], (scores[i][exam_ID - 1] + value));      //adds user inputted value to each score on a certain exam given by user input
    }
}

void replace(int st_ID, int exam_ID, int new_grade, int st_no, int exam_no, int scores[][MAX_EXAMS]) {
    scores[st_ID][exam_ID - 1] = new_grade;             //simply sets a new value for a certain student's certain exam as given by user input
}