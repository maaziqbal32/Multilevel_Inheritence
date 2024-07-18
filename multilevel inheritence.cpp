#include<iostream>
using namespace std;
// Parent class 
class Student{
  protected:
    int rollNo;
  public:
  void setRollNo(int);
  void getRollNo(void);  
};
void Student::setRollNo(int r){
    rollNo = r;
};


void Student::getRollNo(void){
cout<<"The roll number of the student is "<<rollNo<<endl;
};

// 1st derived class
class Exam : public Student{
    protected:
      float maths;
      float physics;
    public:
    void setMarks(float,float);
    void getMarks(void);
};
void Exam::setMarks(float m,float p){
    maths = m;
    physics = p;
};

void Exam::getMarks(void){
cout<<"The marks of the Maths exam is "<<maths<<endl;
cout<<"The marks of the Pysics exam is "<<physics<<endl;

};

// 2nd derive class
 
class Result : public Exam{
    float percentage;
    public:
    void displayResults(){
     getRollNo();
     getMarks();
     cout<<"Your Percentage is "<<(maths+physics)/2<<"%"<<endl;
};
};


int main(){
  Result maaz;
  maaz.setRollNo(43);
  maaz.setMarks(85,90);
  maaz.displayResults();
};