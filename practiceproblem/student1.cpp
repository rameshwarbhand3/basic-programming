#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll_no;
    int total_marks;
    float percentage;
    int marathi_marks;
    int math_marks;
    int science_marks;
    int socialscience_marks;
    int geography_marks;
    int hindi_marks;

public:
    void set_student();
    void calculate_total_marks();
    void calculate_percentage();
    void display_result();
};

void Student::set_student()
{
    cout << "Enter roll_no of student" << endl;
    cin >> roll_no;
    cout << "Enter name of student" << endl;
    cin >> name;
    cout << "Enter marathi marks of student" << endl;
    cin >> marathi_marks;
    cout << "Enter math marks of student" << endl;
    cin >> math_marks;
    cout << "Enter science marks of student" << endl;
    cin >> science_marks;
    cout << "Enter social science marks of student" << endl;
    cin >> socialscience_marks;
    cout << "Enter geography marks of student" << endl;
    cin >> geography_marks;
    cout << "Enter hindi marks of student" << endl;
    cin >> hindi_marks;
}
void Student::calculate_total_marks()
{
    total_marks = marathi_marks + hindi_marks + socialscience_marks + geography_marks + science_marks + math_marks;
}
void Student::calculate_percentage()
{
    int mul = total_marks * 100;
    percentage = (float)mul / 600;
}
void Student::display_result()
{
    cout << name << "\t" << roll_no << "\t" << marathi_marks << "\t" << hindi_marks << " \t" << science_marks << " \t  " << socialscience_marks << "\t   " << math_marks << " \t" << geography_marks << " \t  " << total_marks << " \t " << percentage << endl;
}
int main()
{
    do{
    Student s[5];
    int i;
    for (i = 0; i < 5; i++)
    {

        cout << "Enter details of " << i + 1 << " student" << endl;
        s[i].set_student();
        s[i].calculate_total_marks();
        s[i].calculate_percentage();
    }
    cout << "\t\t*******Student Result software********" << endl;
    cout << "Name  Roll_No  Marathi Hindi Science Social_science Math Geography Total_Marks Percentage  " << endl;

    for (i = 0; i < 3; i++)
    {
        s[i].display_result();
    }
    }while(s[5]>0);

    return (0);
}