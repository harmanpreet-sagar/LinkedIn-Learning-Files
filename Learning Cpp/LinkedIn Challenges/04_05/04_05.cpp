// Learning C++ 
// Challenge 04_05
// Calculate a GPA

#include <iostream>
#include <vector>
#include "records.cpp"

using namespace std;

vector<Student> students = {Student(1,"George P. Burdell"),
							Student(2,"Nancy Rhodes")};

vector<Course> courses = {Course(1,"Algebra",5),
						  Course(2,"Physics",4),
						  Course(3,"English",3),
						  Course(4,"Economics",4)};

vector<Grade> grades = {Grade(1,1,'B'),	Grade(1,2,'A'),	Grade(1,3,'C'),
						Grade(2,1,'A'),	Grade(2,2,'A'), Grade(2,4,'B')};

float GPA = 0.0f;
int id;
int credits = 0;
float total_pts = 0.0f;
int course_id;

int main(){
	cout << "Enter a student ID: ";
	cin >> id;

    // ? Calculate the GPA for the selected student.
    // GPA = Total Points / Total Credits
    // A = 4.0 ; B = 3.0 ; C = 2.0 ; D = 1.0; F = 0.0
    // Total points = sum of gpa * credits for each course.
    // Write your code here

    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i].get_student_id() != id)
            continue;

        course_id = grades[i].get_course_id();

        for (int j = 0; j < courses.size(); j++)
        {
            if (courses[j].get_id() == course_id)
            {
                credits += courses[j].get_credits();
                switch (grades[i].get_grade())
                {
                    case 'A':
                        total_pts += 4.0f * courses[j].get_credits();
                        break;
                    case 'B':
                        total_pts += 3.0f * courses[j].get_credits();
                        break;
                    case 'C':
                        total_pts += 2.0f * courses[j].get_credits();
                        break;
                    case 'D':
                        total_pts += 1.0f * courses[j].get_credits();
                        break;
                    default:
                        total_pts += 0.0f;
                        break;
                }
                break;
            }
        }
    }

    string student_str;
    
    for (int k = 0; k < students.size(); k++)
    {
        if (students[k].get_id() == id)
        {
            student_str = students[k].get_name(); // Change this to the selected student's name
            break;
        }
    }

    GPA = total_pts / credits;

    cout << "The GPA for " << student_str << " is " << GPA << endl;
	return (0);
}




