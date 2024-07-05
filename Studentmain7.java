///Write a Package AIML which has one class Student. Accept student detail
through parameterized constructor. Write display () method to display details. Create a
main class which will use package and calculate total marks and percentage///

package aiml;
public class Student
{
  public int r_no;
  public String name;
  public int a,b,c;
  int sum=0;
  public Student(int roll, String nm, int m1,int m2,int m3)
  {
   r_no = roll;
   name = nm;
   a = m1;
   b = m2;
   c = m3;
   sum=a+b+c
  }
   public void display()
  {
   System.out.println("Rollno: "+r_no);
   System.out.println("Name: "+name);
   System.out.println("_____MARKS____");
   System.out.println("Sub1: "+a);
   System.out.println("Sub2: "+b);
   System.out.println("Sub3: "+c);
   System.out.println("Total: "+sum);
   System.out.println("percentage: "+sum/3+"\n\n");
 }
}
StudentMain.java
import aiml.Student;
import java.util.*;
import java.lang.*;
import java.io.*;
class StudentMain
{
   public static void main(String[] args)
  {
   String nm;
   int roll;
   Scanner sc = new Scanner(System.in);
   System.out.print("Enter Roll no:= ");
   roll = sc.nextInt();
   System.out.print("Enter Name:= ");
   nm = sc.next();
   int m1,m2,m3;
   System.out.print("Enter 3 sub mark:= ");
   m1 = sc.nextInt();
   m2 = sc.nextInt();
   m3 = sc.nextInt();
   Student s = new Student( roll,nm,m1,m2,m3);
   s.display();
  }
}
