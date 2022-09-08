#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cstring>
using namespace std;
class Employee
{
private:
    int id;
    string name;
    float salary;
    string department;
    string profession;
    string city;
    string company;

public:
    int getId()
    {
        return id;
    }
    void setId(int id)
    {
        this->id = id;
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    float getSalary()
    {
        return salary;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    string getDepartment()
    {
        return department;
    }
    void setDepartment(string department)
    {
        this->department = department;
    }
    string getProfession()
    {
        return profession;
    }
    void setProfession(string profession)
    {
        this->profession = profession;
    }
    string getCity()
    {
        return city;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    string getCompany()
    {
        return company;
    }
    void setCompany(string company)
    {
        this->company = company;
    }
};
int main()
{
    // Employee {id, name, salary, dept, designation, city, college}
    string EMP_RECORDS = R"(10,paikrao,12000.00,computer,professor,sangamner,AVCOE,\n,)"
                         R"(12,walkchuare,13000.00,civil,professor,pune,AVCOE,\n,)"
                         R"(9,bhonde,9000.00,computer,professor,nashik,AVCOE,\n,)"
                         R"(8,sonkar,9000.00,computer,professor,delhi,AVCOE,\n,)";

    char *writable = new char[EMP_RECORDS.size() + 1];
    std::copy(EMP_RECORDS.begin(), EMP_RECORDS.end(), writable);
    writable[EMP_RECORDS.size()] = '\0'; // don't forget the terminating 0

    char *ptr = strtok(writable, ","); // use strtok() function to separate string using comma (,) delimiter.
    vector<Employee> employees;

    while (ptr != NULL)
    {
        int i = 1;
        Employee emp;
        if (ptr != "\n")
        {
            switch (i)
            {
            case 1:
            cout<<ptr;
                emp.setId(stoi(ptr));
                break;
            case 2:
                emp.setName(ptr);
                break;
            case 3:
                emp.setSalary(stof(ptr));
                break;
            case 4:
                emp.setDepartment(ptr);
                break;
            case 5:
                emp.setProfession(ptr);
                break;
            case 6:
                emp.setCity(ptr);
                break;
            case 7:
                emp.setCompany(ptr);
                break;

            default:
                cout << ptr << " is invalid input";
                break;
            }
            i++;
        }
        else
        {
            employees.push_back(emp);
            i = 1;
        }
        ptr = strtok(NULL, ",");
    }

    // don't forget to free the string after finished using it
    delete[] writable;

    for(int i=0;i<employees.size();i++){
        Employee e = employees[i];
        cout<<e.getId()<<"  "<<e.getDepartment()<<endl;
    }
}
