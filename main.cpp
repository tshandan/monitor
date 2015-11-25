//
//  main.cpp
//  class
//
//  Created by shandan on 15/11/18.
//  Copyright (c) 2015年 shandan. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    Student(int n,string nam,string s)
    {
        num=n;
        name=nam;
        sex=s;
    }
    void display()
    {cout<<"num:"<<num<<"name:"<<name<<"sex"<<sex<<endl;}
    
protected:
    int num;
    string name;
    string sex;
    
};
class Teacher:public Student
{
public:
    Teacher(int n,string nam,string s,int n1,string nam1,string ad):Student(n,nam,s),monitor(n1,nam1)
    {
        
        addr=ad;
        
    }
    void show()
    {
        cout<<"This student is:"<<endl;
        display();
        cout<<"addr:"<<addr<<endl;
    }
    void show_monitor()
    {
        cout<<"class monitor is"<<endl;
        monitor.display();
    }
private:
    Student monitor;
    string addr;
};
int main(int argc, const char * argv[]) {
    Teacher teach(10010,"tian","f",10011,"shan","115 beijing");
    teach.show();
    teach.show_monitor();
    return 0;
}
