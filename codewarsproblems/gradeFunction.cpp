#include <iostream>
#include <string>
using namespace std;

int finalGrade(int exam, int projects)//creates function with 'exam' and 'project' arguments
{

int grade;//creates variable

   if (exam > 90 && projects > 10)//if exam grade is higher than 90 AND projects completed is higher than 10
   {
     grade = 100;//the grade is 100
   }
   
   else if (exam > 75 && projects <= 5)//if exam grade is higher than 75 and projects completed is less than or equal to 5
   {
       grade =  90;//the grade is 90
   }
   
   else if (exam > 50 && projects <=2)//if exam grade is higher than 50 AND projects completed is less than or equal to 2
   {
       grade = 75;//the grade is 75
   }

   else// if it doesnt fit any of the staments above 
    {
      grade = 0;//the grade is 0
    }

 return grade;//returns what grade they got based on the if statements
}

/* Time Complexity is O(1)
