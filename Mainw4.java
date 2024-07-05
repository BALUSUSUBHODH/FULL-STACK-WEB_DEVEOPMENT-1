///Write a Java program to create package called pvp.dept. Create three classes as
CSE, AIML and Data Science add methods in each class which can display subject
names of your respect year. Access this package classes from class named “Main”///
package pvp.dept;
public class CSE
{
  public void subjects()
  {
   System.out.println("CSE II-1 Subjects:\n ");
   System.out.println("AI\t");
   System.out.println("DS\t");
   System.out.println("JAVA\t");
   System.out.println("CO\t");
   System.out.println("OS\n");
   System.out.println("-----\n");
  }
}
package pvp.dept;
public class AIML
{
  public void subjects()
  {
   System.out.println("AIML II-1 Subjects:\n ");
   System.out.println("AI\t");
   System.out.println("DS\t");
   System.out.println("JAVA\t");
   System.out.println("CO\t");
   System.out.println("OS\n");
   System.out.println("-----\n");
  }
}
package pvp.dept;
public class DS
{
  public void subjects()
  {
   System.out.println("DS II-1 Subjects:\n ");
   System.out.println("AI\t");
   System.out.println("DS\t");
   System.out.println("JAVA\t");
   System.out.println("CO\t");
   System.out.println("OS\n");
   System.out.println("----\n");
  }
}
import pvp.dept.*;
public class Main
{
  public static void main(String args[])
  {
   CSE c=new CSE();
   c.subjects();
   AIML a=new AIML();
   a.subjects();
   DS d=new DS();
   d.subjects();
  }
}
 