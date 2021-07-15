#include <iostream>
#include<string.h>
#include <stdio.h>
using namespace std;
struct student 
{
      float marks,id;
      char str[30];
      float per=0.0,sum=0.0;

};
struct Marks
{
	int Maths,Science,Economics,Electrical;
	
};
struct Maths
{
	    char Grade;
};
struct Science
{
		char Grade;
};
struct Economics
{
		char Grade;
};
struct Electrical
{
		char Grade;
};
int main()
{
    int i,num;
    struct student f[20]  ;
    struct Marks m[4];
    struct Maths t[1];
    struct Science s[1];
    struct Economics e[1];
    struct Electrical l[1];
    cout<<"*******Student Database Project*******"<<endl;
    cout<<"\n\nEnter the number of Students :";
    cin>>num;
    for(i=0;i<num;i++)
    {
    	cout<<"\nEnter the name of Student"<<i+1<<endl;
    	cin>>f[i].str;
    	cout<<endl;
        cout<<"\n******Marks of Student******"<<endl;
        cout<<"\nEnter marks of Maths Subject:"<<endl;
        cin>>m[i].Maths;
        cout<<endl;
        cout<<"\nEnter marks of Science Subject:"<<endl;
        cin>>m[i].Science;
        cout<<endl;
        cout<<"\nEnter marks of Economics Subject:"<<endl;
        cin>>m[i].Economics;
        cout<<endl;
        cout<<"\nEnter marks of Electrical Subject:"<<endl;
        cin>>m[i].Electrical;
        cout<<endl;
        f[i].sum=m[i].Maths+m[i].Science+m[i].Economics+m[i].Electrical;
        f[i].per=(f[i].sum/400)*100;
        f[i].id=i+1;

}
    for(int i=0;i<num;i++)
    {

    
    if (m[i].Maths>=90 & m[i].Maths<=100)
		{
			t[i].Grade = 'O';		
		}
		else if (m[i].Maths>=80&m[i].Maths<90)
		{
			t[i].Grade = 'A';
		}
		else if (m[i].Maths>=70&m[i].Maths<80)
		{
			t[i].Grade = 'B';
		}
		else if (m[i].Maths>=60&m[i].Maths<70)
		{
			t[i].Grade = 'C';
		}
		else if (m[i].Maths>=50&m[i].Maths<60)
		{
			t[i].Grade = 'D';
		}
		else if (m[i].Maths>=40&m[i].Maths<50)
		{
			t[i].Grade = 'E';
		}
		else if (m[i].Maths<40)
		{
		    t[i].Grade = 'F';
		}
}
for(int i=0;i<num;i++)
    {

    
    if (m[i].Science>=90 & m[i].Science<=100)
		{
			s[i].Grade = 'O';		
		}
		else if (m[i].Science>=80&m[i].Science<90)
		{
			s[i].Grade = 'A';
		}
		else if (m[i].Science>=70&m[i].Science<80)
		{
			s[i].Grade = 'B';
		}
		else if (m[i].Science>=60&m[i].Science<70)
		{
			s[i].Grade = 'C';
		}
		else if (m[i].Science>=50&m[i].Science<60)
		{
			s[i].Grade = 'D';
		}
		else if (m[i].Science>=40&m[i].Science<50)
		{
			s[i].Grade = 'E';
		}
		else if (m[i].Science<40)
		{
		    s[i].Grade = 'F';
		}
}
for(int i=0;i<num;i++)
    {

    
    if (m[i].Economics>=90 & m[i].Economics<=100)
		{
			e[i].Grade = 'O';		
		}
		else if (m[i].Economics>=80&m[i].Economics<90)
		{
			e[i].Grade = 'A';
		}
		else if (m[i].Economics>=70&m[i].Economics<80)
		{
			e[i].Grade = 'B';
		}
		else if (m[i].Economics>=60&m[i].Economics<70)
		{
			e[i].Grade = 'C';
		}
		else if (m[i].Economics>=50&m[i].Economics<60)
		{
			e[i].Grade = 'D';
		}
		else if (m[i].Economics>=40&m[i].Economics<50)
		{
			e[i].Grade = 'E';
		}
		else if (m[i].Economics<40)
		{
		    e[i].Grade = 'F';
		}
}
for(int i=0;i<num;i++)
    {

    
    if (m[i].Electrical>=90 & m[i].Electrical<=100)
		{
			l[i].Grade = 'O';		
		}
		else if (m[i].Electrical>=80&m[i].Maths<90)
		{
			l[i].Grade = 'A';
		}
		else if (m[i].Electrical>=70&m[i].Electrical<80)
		{
			l[i].Grade = 'B';
		}
		else if (m[i].Electrical>=60&m[i].Electrical<70)
		{
			l[i].Grade = 'C';
		}
		else if (m[i].Electrical>=50&m[i].Electrical<60)
		{
			l[i].Grade = 'D';
		}
		else if (m[i].Electrical>=40&m[i].Electrical<50)
		{
			l[i].Grade = 'E';
		}
		else if (m[i].Electrical<40)
		{
		    l[i].Grade = 'F';
		}
}
    cout<<"ID\tName\t\tMaths\tGrade\tScience\tGrade\tEconomics\tGrade\tElectrical\tGrade\tTotal\tPercentage\n";
    for(i=0;i<num;i++)
    {
        cout<<f[i].id<<"\t"<<f[i].str<<"\t\t"<<m[i].Maths<<"\t"<<t[i].Grade<<"\t"<<m[i].Science<<"\t"<<s[i].Grade<<"\t"<<m[i].Economics<<"\t\t"<<e[i].Grade<<"\t"<<m[i].Electrical<<"\t\t"<<l[i].Grade<<"\t"<<f[i].sum<<"\t"<<f[i].per<<endl;

    }
    
    return 0;




}

