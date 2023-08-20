// Learning C++ 
// Challenge 06_03
// Upgrade to work with files

#include <iostream>
#include <vector>
#include "records.cpp"
#include <fstream>

using namespace std;

void initialize();
void initialize_file();

StudentRecords SR;
int id;
ifstream inFile;

int main(){
    initialize_file();
	SR.report_card();
	return (0);
}

void initialize_file(){
    int count = 0;
    inFile.open("students.txt");
    if (inFile.fail())
    {
        cout << "Couldn't find students.txt" << endl;
    }
    else
    {
        while(!inFile.eof())
        {
            string stu_id, stu_name;
            getline(inFile, stu_id);
            getline(inFile, stu_name);
            SR.add_student(stoi(stu_id), stu_name);
            count++;
        }
        cout << count << " students found." << endl;
        inFile.close();
    }

    count = 0;
    inFile.open("courses.txt");
    if (inFile.fail())
    {
        cout << "Couldn't find courses.txt" << endl;
    }
    else
    {
        while(!inFile.eof())
        {
            string c_id, c_name, c_credits;
            getline(inFile, c_id);
            getline(inFile, c_name);
            getline(inFile, c_credits);
            SR.add_course(stoi(c_id), c_name, stoi(c_credits));
            count++;
        }
        cout << count << " courses found." << endl;
        inFile.close();
    }

    count = 0;
    inFile.open("grades.txt");
    if (inFile.fail())
    {
        cout << "Couldn't find students.txt" << endl;
    }
    else
    {
        while(!inFile.eof())
        {
            string s_id, c_id, s_c_grade;
            getline(inFile, s_id);
            getline(inFile, c_id);
            getline(inFile, s_c_grade);
            SR.add_grade(stoi(s_id), stoi(c_id), s_c_grade[0]);
            count++;
        }
        cout << count << " grades found." << endl;
        inFile.close();
    }
}

void initialize()
{
    SR.add_student(1, "George P. Burdell");
	SR.add_student(2,"Nancy Rhodes");

	SR.add_course(1, "Algebra", 5);
	SR.add_course(2, "Physics", 4);
	SR.add_course(3, "English", 3);
	SR.add_course(4,"Economics",4);

	SR.add_grade(1, 1, 'B');
	SR.add_grade(1, 2, 'A');
	SR.add_grade(1, 3, 'C');
	SR.add_grade(2, 1, 'A');
	SR.add_grade(2, 2, 'A'); 
	SR.add_grade(2, 4, 'B');
}
