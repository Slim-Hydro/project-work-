#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{ int stfL=0,stdMenu=0,editS,editS1,p=0,mm=0,h=0,e,del,z=0,x=0,i=0,r=0,c=0,print,addStaff=0,v0=0,eSLoop=0;
char addStd, stdToMain;
string editS1L,bk, staffIntro, intro,stdIntro;
class student
{ public:
string name[100];
  string LName[100];
  string dob[100];
  string ID[100];
  string sex[100];
  string courses[6][100];
  double gpt[6][100];
  double totGpt[100];
  int credit[6][100];
  double score[6][100];
  string grade[6][100];
  double totCredit[100];
  int cNo[100];
  double CGPA[100];
};
student std;
class staff
{ public:
    string FName[50];
    string LName[50];
    int age[50];
    string courses[4][50];
    string ID[50];
    string sex[50];
    int CNum[50];
};
 staff stf;
 while(p<=100)
     {
cout<<"Enter 1 for students section.\n";
cout<<"Enter 2 for staff section.\n";
cin>>intro;
if(intro=="1")
 {   while(stdMenu<=10)
     {system("color 7D");
     system("cls");
  cout<<"Enter 1 to add a new student and assign him or her to courses.\n";
  cout<<"Enter 2 to edit a student and his or her courses.\n";
  cout<<"Enter 3 to delete a student from the records.\n";
  cout<<"Enter 4 to print the Academic record of a particular student.\n";
  cout<<"Enter any other key to go back.\n";
  cout<<"NOTE!: You can't edit, delete or print the records of a student if you haven't";
  cout<<"\n entered any, go for option 1 if that's the case.\n";
  cin>>stdIntro;
  if(stdIntro=="1")
    {while (z<=10)
        {
    system("cls");
    i++;
    cout<<"To keep track of your entry, we number the students you create\n";
    cout<<"For instance, the first student you'll create will be referred to as\n";
    cout<<"Student 1\n";
    cout<<"Enter student "<<i<<"'s first name\n";
    cin>>std.name[i-1];
    cout<<"Enter student "<<i<<"'s last name\n";
    cin>>std.LName[i-1];
    cout<<"Enter student "<<i<<"'s date of birth(in the format:dd/mm/yy)\n";
    cin>>std.dob[i-1];
    cout<<"Enter student "<<i<<"'s ID number\n";
    cin>>std.ID[i-1];
    cout<<"Enter student "<<i<<"'s sex(m or M for male, f or F for female)\n";
    cin>>std.sex[i-1];
    if((std.sex[i-1])=="m"||(std.sex[i-1])=="M")
        std.sex[i-1]="MALE";
    else if ((std.sex[i-1])=="f"||(std.sex[i-1])=="F")
        std.sex[i-1]="FEMALE";
    cout<<"How many courses will "<<std.name[i-1]<<" be doing?(maximum is 7)\n";
    cin>>std.cNo[i-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<std.cNo[i-1];r++)
      cin>>std.courses[r][i-1];
    for(int v=0;v<std.cNo[i-1];v++)
      {
    cout<<"Enter the credit hours  for "<<std.courses[v][i-1]<<endl;
    cin>>std.credit[v][i-1];
    cout<<"Enter the exam score for "<<std.courses[v][i-1]<<endl;
    cin>>std.score[v][i-1];
    if((std.score[v][i-1])>=80)
     {(std.grade[v][i-1])= "A";
     (std.gpt[v][i-1])=12; }
    else if((std.score[v][i-1])>=75&&(std.score[v][i-1])<80)
          {(std.grade[v][i-1])="B+";
          (std.gpt[v][i-1])=10.5;}
    else if((std.score[v][i-1])>=70&&(std.score[v][i-1])<75)
           {(std.grade[v][i-1])="B";
           (std.gpt[v][i-1])=9;}
    else if((std.score[v][i-1])>=65&&(std.score[v][i-1])<70)
           {(std.grade[v][i-1])="C+";
           (std.gpt[v][i-1])=7.5;}
    else if((std.score[v][i-1])>=60&&(std.score[v][i-1])<65)
           {(std.grade[v][i-1])="C";
           (std.gpt[v][i-1])=6;}
    else if((std.score[v][i-1])>=55&&(std.score[v][i-1])<60)
           {(std.grade[v][i-1])="D";
           (std.gpt[v][i-1])=3;}
    else if((std.score[v][i-1])>=50&&(std.score[v][i-1])<55)
            {(std.grade[v][i-1])="E";
            (std.gpt[v][i-1])=1.5;}
    else if((std.score[v][i-1])>=45&&(std.score[v][i-1])<50)
            {(std.grade[v][i-1])="F";
            (std.gpt[v][i-1])=0.0;}
            std.totGpt[i-1]+=std.gpt[v][i-1];
            std.totCredit[i-1]+=std.credit[v][i-1];
      }
      std.CGPA[i-1]=std.totGpt[i-1]/std.totCredit[i-1];
    cout<<"Data of "<<std.name[i-1]<<" stored successfully\n";
    cout<<"Do you want to add another student or print "<<std.name[i-1]<<"'s academic record?\n";
    cout<<"Enter \'a\', for add or \'p\' for printing of academic record\n";
    cout<<"You can as well enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='p')
     {   system("cls");
     cout<<"Do you want to print file?(y for yes or n for no).\n";
     cin>>addStd;
     if(addStd=='y')
     { string out;
     cout<<"Enter the file's name.\n";
     cin>>out;
     out=out+".txt";
     ofstream file;
     file.open(out.c_str());
     file<<"                                              ACADEMIC RECORD                                                     \n";
file<<"Student number: "<<std.ID[i-1]<<"                                                                   DOB: "<<std.dob[i-1]<<endl;
file<<"                                                                                          Sex: "<<std.sex[i-1]<<endl;
file<<"Name: "<<std.name[i-1]<<" "<<std.LName[i-1]<<"                                                                          Date printed:\n";
file<<"___________________________________________________________________________________________________________________________\n";
file<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<std.CGPA[i-1]<<"          \n";
file<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";
for( r=0;r<std.cNo[i-1];r++)
file<<std.courses[r][i-1]<<"                                                    \t            "<<std.credit[r][i-1]<<"  \t   "<<std.grade[r][i-1]<<"  \t   "<<std.gpt[r][i-1]<<endl;


     } //end File output If
     else
     {

         cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student number: "<<std.ID[i-1]<<"                                                                   DOB: "<<std.dob[i-1]<<endl;
cout<<"                                                                                          Sex: "<<std.sex[i-1]<<endl;
cout<<"Name: "<<std.name[i-1]<<" "<<std.LName[i-1]<<"                                                                          Date printed:\n";
cout<<"___________________________________________________________________________________________________________________________\n";
cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<std.CGPA[i-1]<<"          \n";
cout<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";
for( r=0;r<std.cNo[i-1];r++)
cout<<std.courses[r][i-1]<<"                                                    \t            "<<std.credit[r][i-1]<<"  \t   "<<std.grade[r][i-1]<<"  \t   "<<std.gpt[r][i-1]<<endl;
     } //end out file else
     cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     }
    else if(addStd=='a')
          {continue;}
    else
    {   system("cls");
        break;
    }
       z++;
        }
    }//end stdIntro1 if
    else if(stdIntro=="2")
    { while(x<=10)
          { system("cls");
           cout<<"Enter the number of the student whose details you want to edit( e.g.enter 1 for student 1 and so on....)\n";
           cout<<"Only mutable details will be available for editing, fixed details such as age and gender will remain constant.\n";
           cout<<"Enter-99 to go back\n";
           cin>>editS;
           if (editS==-99)
            break;
           else
           { system("cls");
             cout<<"What details of student "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=10)
                    {cout<<"Enter student "<<editS<<"'s new first name\n";
                     cin>>std.name[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name\n";
                     cin>>std.LName[editS-1];
                     cout<<"Name edit success, the student is now referred to as "<<std.name[editS-1]<<" "<<std.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    } //end eSLoop

             }//end editS1 if
             else if(editS1==2)
                   { system("cls");
                    cout<<"Due to re-calculation of Cgrade, you are to enter all the student's courses at fresh again\n";
                    cout<<"(Correcting any mistakes you had made prior\n)";
                    cout<<"How many courses will "<<std.name[editS-1]<<" be doing?(maximum is 7)\n";
    cin>>std.cNo[i-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<std.cNo[i-1];r++)
      {cin>>std.courses[r][editS-1];
      }
    for(int v=0;v<std.cNo[i-1];v++)
      {
    cout<<"Enter the credit hours  for "<<std.courses[v][editS-1]<<endl;
    cin>>std.credit[v][editS-1];
    cout<<"Enter the exam score for "<<std.courses[v][editS-1]<<endl;
    cin>>std.score[v][editS-1];
    if((std.score[v][editS-1])>=80)
     {(std.grade[v][editS-1])= "A";
     (std.gpt[v][editS-1])=12; }
    else if((std.score[v][editS-1])>=75&&(std.score[v][editS-1])<80)
          {(std.grade[v][editS-1])="B+";
          (std.gpt[v][editS-1])=10.5;}
    else if((std.score[v][editS-1])>=70&&(std.score[v][editS-1])<75)
           {(std.grade[v][editS-1])="B";
           (std.gpt[v][editS-1])=9;}
    else if((std.score[v][editS-1])>=65&&(std.score[v][editS-1])<70)
           {(std.grade[v][editS-1])="C+";
           (std.gpt[v][editS-1])=7.5;}
    else if((std.score[v][editS-1])>=60&&(std.score[v][editS-1])<65)
           {(std.grade[v][editS-1])="C";
           (std.gpt[v][editS-1])=6;}
    else if((std.score[v][editS-1])>=55&&(std.score[v][editS-1])<60)
           {(std.grade[v][editS-1])="D";
           (std.gpt[v][editS-1])=3;}
    else if((std.score[v][editS-1])>=50&&(std.score[v][editS-1])<55)
            {(std.grade[v][editS-1])="E";
            (std.gpt[v][editS-1])=1.5;}
    else if((std.score[v][editS-1])>=45&&(std.score[v][editS-1])<50)
            {(std.grade[v][editS-1])="F";
            (std.gpt[v][editS-1])=0.0;}
            std.totGpt[editS-1]+=std.gpt[v][editS-1];
            std.totCredit[editS-1]+=std.credit[v][editS-1];
      }
      std.CGPA[editS-1]=std.totGpt[editS-1]/std.totCredit[editS-1];
      cout<<"Data of "<<std.name[editS-1]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
                   }//end editS2 if
          }//end editS else

          x++;
          }//end stdIntro 2 while
    } //end stdIntro 2 if
     else if(stdIntro=="3")
    { while(e<=10)
          { system("cls");
           cout<<"Enter the number of the student whose records you want to delete( e.g.enter 1 for student 1 and so on....)\n";
           cin>>del;
           std.totGpt[del-1]=0;
           std.totCredit[del-1]=0;
           std.CGPA[del-1]=0;
           std.name[del-1]=" ";
           std.LName[del-1]=" ";
           std.dob[del-1]=" ";
           std.ID[del-1]=" ";
           std.sex[del-1]=" ";
           for(int d=0;d<std.cNo[del-1];d++)
             {std.courses[d][del-1]=" ";
              std.gpt[d][del-1]=0;
              std.credit[d][del-1]=0;
              std.score[d][del-1]=0;
              std.grade[d][del-1]=" ";
              cout<<"student's records successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
             }
             e++;
            } //end stdIntro 3 loop
          }//end stdIntro 3 if
          else if(stdIntro=="4")
           {system("cls");
           while(h<=10)
           {
             cout<<"Do you want to print file?(y for yes or n for no).\n";
     cin>>addStd;
     if(addStd=='y')
     { string out;
     cout<<"Enter the file's name.\n";
     cin>>out;
     out=out+".txt";
     ofstream file;
     file.open(out.c_str());
     file<<"                                              ACADEMIC RECORD                                                     \n";
file<<"Student number: "<<std.ID[i-1]<<"                                                                   DOB: "<<std.dob[i-1]<<endl;
file<<"                                                                                          Sex: "<<std.sex[i-1]<<endl;
file<<"Name: "<<std.name[i-1]<<" "<<std.LName[i-1]<<"                                                                          Date printed:\n";
file<<"___________________________________________________________________________________________________________________________\n";
file<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<std.CGPA[i-1]<<"          \n";
file<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";
for( r=0;r<std.cNo[i-1];r++)
file<<std.courses[r][i-1]<<"                                                    \t            "<<std.credit[r][i-1]<<"  \t   "<<std.grade[r][i-1]<<"  \t   "<<std.gpt[r][i-1]<<endl;


     } //end File output If
     else
     {



            cout<<"Enter the student number of the student whose Academic record you wish to print\n";
            cin>>print;
           cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student number: "<<std.ID[print-1]<<"                                                                   DOB: "<<std.dob[print-1]<<endl;
cout<<"                                                                                          Sex: "<<std.sex[print-1]<<endl;
cout<<"Name: "<<std.name[print-1]<<" "<<std.LName[print-1]<<"                                                                          Date printed:\n";
cout<<"___________________________________________________________________________________________________________________________\n";
cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<std.CGPA[print-1]<<"          \n";
cout<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";
for( r=0;r<std.cNo[i-1];r++)
cout<<std.courses[r][print-1]<<"                                                    \t            "<<std.credit[r][print-1]<<"  \t   "<<std.grade[r][print-1]<<"  \t   "<<std.gpt[r][print-1]<<endl;
     cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     h++;   }//end print to console else

                }//end record print loop

          }//end stdInfo 4 if
           else
            { system("cls");
                break;
            }
            stdMenu++;}
   }//end stdMenu if
   else if(intro=="2")
         {

          while(mm<=10)
        {system("cls");
            system("color 8E");
         cout<<"Enter 1 to add staff\n";
         cout<<"Enter 2 to edit staff\n";
         cout<<"Enter 3 to delete staff\n";
         cout<<"Enter 4 to print the details of a particular staff member\n";
         cout<<"Enter any other key to go back\n";
         cout<<"NOTE! you can't go for option 2 or 3 if you haven't added any staff member\n";
         cin>>staffIntro;
         if (staffIntro=="1")
            { while(addStaff<=10)
                { system("cls");
                    v0++;
    cout<<"To keep track of your entry, we number the staff members you create\n";
    cout<<"For instance, the first staff member you'll create will be referred to as\n";
    cout<<"Staff 1\n";
    cout<<"Enter staff "<<v0<<"'s first name\n";
    cin>>stf.FName[v0-1];
    cout<<"Enter staff "<<v0<<"'s last name\n";
    cin>>stf.LName[v0-1];
    cout<<"Enter staff "<<v0<<"'s age\n";
    cin>>stf.age[v0-1];
    cout<<"Enter staff "<<v0<<"'s ID number\n";
    cin>>stf.ID[v0-1];
    cout<<"Enter staff "<<v0<<"'s sex(m or M for male, f or F for female)\n";
    cin>>stf.sex[v0-1];
    if((stf.sex[v0-1])=="m"||(stf.sex[v0-1])=="M")
        stf.sex[v0-1]="MALE";
    else if ((stf.sex[v0-1])=="f"||(stf.sex[v0-1])=="F")
        stf.sex[v0-1]="FEMALE";
    cout<<"How many courses will "<<stf.FName[v0-1]<<" be lecturing?(maximum is 5)\n";
    cin>>stf.CNum[v0-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<stf.CNum[v0-1];r++)
      cin>>stf.courses[r][v0-1];
        system("cls");
       cout<<"Data of "<<stf.FName[v0-1]<<" stored successfully\n";
    cout<<"Do you want to add another staff member or print "<<stf.FName[v0-1]<<"'s details?\n";
    cout<<"Enter \'a\', for add or \'p\' for printing of details\n";
    cout<<"You can as well enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='p')
     {   system("cls");
         cout<<"Details of "<<stf.FName[v0-1]<<endl;
         cout<<"Name: "<<stf.FName[v0-1]<<" "<<stf.LName[v0-1]<<endl;
         cout<<"Age: "<<stf.age[v0-1]<<endl;
         cout<<"Courses: ";
          for(r=0;r<stf.CNum[v0-1];r++)
      cout<<stf.courses[r][v0-1];
      cout<<endl;
      cout<<"ID: "<<stf.ID[v0-1]<<endl;
      cout<<"Sex: "<<stf.sex[v0-1]<<endl;
     cout<<"Enter any key to return to staff menu\n";
     cin>>stdToMain;
     break;
     system("cls");
     }
    else if(addStd=='a')
          continue;
    else
    {   system("cls");
        break;
    }
       addStaff++;
        } //end add staff loop
            } //end staff intro 1 if
            else if(staffIntro=="2")
            {
            while(stfL<=10)
          { system("cls");
           cout<<"Enter the number of the staff member whose details you want to edit( e.g.enter 1 for staff member 1 and so on....)\n";
           cout<<"Only mutable details will be available for editing, fixed details such as age and gender will remain constant.\n";
           cout<<"Enter-99 to go back\n";
           cin>>editS;
           if (editS==-99)
            break;
           else
           { system("cls");
             cout<<"What details of staff "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=100)
                    {cout<<"Enter staff "<<editS<<"'s new first name\n";
                     cin>>stf.FName[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name\n";
                     cin>>stf.LName[editS-1];
                     cout<<"Name edit success, the staff member is now referred to as "<<stf.FName[editS-1]<<" "<<stf.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    } //end eSLoop

             }//end editS1 if
             else if(editS1==2)
                   { system("cls");
                    cout<<"You are to enter all the student's courses at fresh again\n";
                    cout<<"(Correcting any mistakes you had made prior\n)";
                    cout<<"How many courses will "<<stf.FName[editS-1]<<" be lecturing now?(maximum is 5)\n";
    cin>>stf.CNum[v0-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<stf.CNum[i-1];r++)
      {cin>>stf.courses[r][editS-1];
      }

      cout<<"Data of "<<stf.FName[editS-1]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
                   }//end editS2 if
          }//end editS else

          x++;
          }//end staffIntro 2 2 while
            }//end staff intro 2 if
            else if(staffIntro=="3")
            { while(e<=10)
          { system("cls");
           cout<<"Enter the number of the student whose records you want to delete( e.g.enter 1 for student 1 and so on....)\n";
           cin>>del;
           stf.FName[del-1]=" ";
           stf.LName[del-1]=" ";
           stf.ID[del-1]=" ";
           stf.sex[del-1]=" ";
           stf.age[del-1]=0;
           for(int d=0;d<stf.CNum[del-1];d++)
             stf.courses[d][del-1]=" ";
              cout<<"staff member's records successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
             e++;
            } //end staffIntro 3 loop
          }//end staffIntro 3 if
          else if (staffIntro=="4")
            {system("cls");
           while(h<=10)
                {
            cout<<"Enter the number of the staff member whose details you wish to print\n";
            cin>>print;
           system("cls");
         cout<<"Details of "<<stf.FName[print-1]<<endl;
         cout<<"Name: "<<stf.FName[print-1]<<" "<<stf.LName[print-1]<<endl;
         cout<<"Age: "<<stf.age[print-1]<<endl;
         cout<<"Courses: ";
          for(r=0;r<stf.CNum[print-1];r++)
      cout<<stf.courses[r][print-1];
      cout<<endl;
      cout<<"ID: "<<stf.ID[print-1]<<endl;
      cout<<"Sex: "<<stf.sex[print-1]<<endl;
     cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     h++;
                }//end record print loop

          }//end stdInfo 4 if
            else
            { system("cls");
                break;}
         mm++;
        }//end staff intro loop
      }//end staffIntro if

 p++;}//end main menu loop
}//main prog
