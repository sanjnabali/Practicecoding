#include<iostream>
#include<string.h>
using namespace std;

//classes and objects

class teacher{
    public:
    string name;
    int age;
    string dept;
    string course;
    double salary;

    void changedept(string newdept){
        dept = newdept;
    }
    
    int increasedsalary(double newsalary){
        salary += newsalary;
        return salary;
    }
    
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){

  
    //input
    int n;
    string name, dept, course;
    int age;
    double salary;
    cin>>n;
    for(int i = 0; i < n; i++){
        teacher t1;
        cout<<"enter the name of the teacher:"<<endl;
        cin>>name;
        cout<<"enter the age of the teacher:"<<endl;
        cin>>age;
        cout<<"enter the department of the teacher:"<<endl;
        cin>>dept;
        cout<<"enter the course of the teacher:"<<endl;
        cin>>course;
        cout<<"enter the salary of the teacher:"<<endl;
        cin>>salary;
        t1.name = name;
        t1.age = age;
        t1.dept = dept;
        t1.course = course;
        t1.salary = salary;
        t1.display();

        

    }

    

}