// ==========================================
// STUDENT RESULT CARD SYSTEM
// USING ONLY IOSTREAM
// FOR VISUAL STUDIO 2022
// ==========================================

#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // VARIABLES
    // ==========================================

    string name;
    string rollNo;

    float english, math, physics, chemistry, computer;

    float total, percentage;

    char grade;

    int choice;

    bool valid;

    // ==========================================
    // MENU SYSTEM
    // ==========================================

    do
    {
        cout << "\n===================================";
        cout << "\n STUDENT RESULT CARD SYSTEM";
        cout << "\n===================================\n";

        cout << "1. Enter Student Information\n";
        cout << "2. Display Result Card\n";
        cout << "3. Predict Grade\n";
        cout << "4. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        // ==========================================
        // ENTER STUDENT INFORMATION
        // ==========================================

        if (choice == 1)
        {
            cout << "\n===== ENTER STUDENT INFORMATION =====\n";

            // ==========================================
            // NAME VALIDATION
            // ONLY ALPHABETS ALLOWED
            // ==========================================

            do
            {
                valid = true;

                cout << "Enter Student Name: ";
                cin >> name;

                for (int i = 0; i < name.length(); i++)
                {
                    if (!((name[i] >= 'A' && name[i] <= 'Z') ||
                        (name[i] >= 'a' && name[i] <= 'z')))
                    {
                        valid = false;
                    }
                }

                if (valid == false)
                {
                    cout << "Name should contain alphabets only.\n";
                }

            } while (valid == false);

            // ==========================================
            // ROLL NUMBER VALIDATION
            // ONLY NUMBERS ALLOWED
            // ==========================================

            do
            {
                valid = true;

                cout << "Enter Roll Number: ";
                cin >> rollNo;

                for (int i = 0; i < rollNo.length(); i++)
                {
                    if (!(rollNo[i] >= '0' && rollNo[i] <= '9'))
                    {
                        valid = false;
                    }
                }

                if (valid == false)
                {
                    cout << "Roll Number should contain numbers only.\n";
                }

            } while (valid == false);

            // ==========================================
            // SUBJECT MARKS
            // ==========================================

            cout << "Enter English Marks: ";
            cin >> english;

            cout << "Enter Math Marks: ";
            cin >> math;

            cout << "Enter Physics Marks: ";
            cin >> physics;

            cout << "Enter Chemistry Marks: ";
            cin >> chemistry;

            cout << "Enter Computer Marks: ";
            cin >> computer;

            // ==========================================
            // CALCULATIONS
            // ==========================================

            total =
                english +
                math +
                physics +
                chemistry +
                computer;

            percentage =
                (total / 500) * 100;

            // ==========================================
            // GRADE CALCULATION
            // ==========================================

            if (percentage >= 90)
            {
                grade = 'A';
            }

            else if (percentage >= 80)
            {
                grade = 'B';
            }

            else if (percentage >= 70)
            {
                grade = 'C';
            }

            else if (percentage >= 60)
            {
                grade = 'D';
            }

            else
            {
                grade = 'F';
            }

            cout << "\nStudent Data Saved Successfully!\n";
        }

        // ==========================================
        // DISPLAY RESULT CARD
        // ==========================================

        else if (choice == 2)
        {
            cout << "\n===================================";
            cout << "\n          RESULT CARD";
            cout << "\n===================================\n";

            cout << "Student Name : "
                << name << endl;

            cout << "Roll Number  : "
                << rollNo << endl;

            cout << "\n===== SUBJECT MARKS =====\n";

            cout << "English   : "
                << english << endl;

            cout << "Math      : "
                << math << endl;

            cout << "Physics   : "
                << physics << endl;

            cout << "Chemistry : "
                << chemistry << endl;

            cout << "Computer  : "
                << computer << endl;

            cout << "\nTotal Marks : "
                << total
                << " / 500\n";

            cout << "Percentage  : "
                << percentage
                << "%\n";

            cout << "Grade       : "
                << grade << endl;
        }

        // ==========================================
        // GRADE PREDICTION
        // ==========================================

        else if (choice == 3)
        {
            float expectedMarks;
            float predictedPercentage;

            cout << "\n===== GRADE PREDICTION =====\n";

            cout << "Enter Expected Total Marks out of 500: ";
            cin >> expectedMarks;

            predictedPercentage =
                (expectedMarks / 500) * 100;

            cout << "\nPredicted Percentage: "
                << predictedPercentage
                << "%\n";

            if (predictedPercentage >= 90)
            {
                cout << "Predicted Grade: A\n";
            }

            else if (predictedPercentage >= 80)
            {
                cout << "Predicted Grade: B\n";
            }

            else if (predictedPercentage >= 70)
            {
                cout << "Predicted Grade: C\n";
            }

            else if (predictedPercentage >= 60)
            {
                cout << "Predicted Grade: D\n";
            }

            else
            {
                cout << "Predicted Grade: F\n";
            }
        }

        // ==========================================
        // EXIT
        // ==========================================

        else if (choice == 4)
        {
            cout << "\nProgram Closed Successfully!\n";
        }

        // ==========================================
        // INVALID CHOICE
        // ==========================================

        else
        {
            cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}