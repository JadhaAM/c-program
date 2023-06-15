#include<iostream>
using namespace std;
struct student__cgp

{
     int set_no;
     char name [40];
     char branch [30];
     int marks ;
     int result;

};


int main()
{      
                                 int StudentCount;

                student__cgp s1[StudentCount];
  
                cout<<"how you want add student results :\n";

                 cin>>StudentCount;

    for (int i = 0; i < StudentCount; i++)
    {
        
                int StudentMarksTotal;
                cout<<"** enter information of student  ** "; cin>>i;
                cout<<"\nenter the your set number :";
                cin>>s1[i].set_no;
                cout<<"enter your branch :";
                gets (s1[i].branch) ;
                cout<<"enter your name :";
                gets(s1[i].name);
                cout<<"enter the mareks in secund semister :\n";

                        for (int i = 0; i < 4; i++)
             {
                    cout<<s1[i].marks;
                    StudentMarksTotal+=s1[i].marks;
            }
            float StudentAvg = StudentMarksTotal/4;

        cout<<StudentAvg <<endl;

    }
}