#include <iostream>
#include <string>
using namespace std;
char Calgrade(int score[20]);
void ListStudent(string name[20],int,int score[20]);
int student;
int main()
{
   string name[20];
   int score[20];

   cout<<"Input Number of Student : ";
   cin>>student;
   for (int i=0;i<student;i++){
    cout<<"Input Name : ";
    cin>>name[i];
    cout<<"Input score "<<i+1<<" : ";
    cin>>score[i];
   }
   ListStudent( name, student,score);
return 0;
}

void ListStudent(string name[20],int student,int score[20]){
    for (int i=0;i<student;i++){
       cout<<"Student Name : "<<name[i]<<" Score "<<i+1<<" = "<<score[i]<<"  "<<endl;
}
Calgrade(score);
}
char Calgrade(int score[20]){
    char grade;
for(int i=0;i<student;i++){
if (score[i]>=80){
        grade='A';
        cout<<"Your grade is "<<grade<<endl;
}
else if (score[i]>=70&&score[i]<80){
        grade='B';
        cout<<"Your grade is "<<grade<<endl;
}
else if (score[i]>=60&&score[i]<70){
        grade='C';
        cout<<"Your grade is "<<grade<<endl;
}
else if (score[i]>=50&&score[i]<60){
        grade='D';
        cout<<"Your grade is "<<grade<<endl;
}

}
return grade;
}

