///Write a Java program to create a package named mypackage which consists
Addition class, and use this Addition class from Demo class in another package named
sample///
Addtion.java
package mypackage;
public class Addition
{
  public int add()
  {
   int a,b,sum;
   java.util.Scanner in=new java.util.Scanner(System.in);
   System.out.println("Enter a,b values");
   a=in.nextInt();
   b=in.nextInt();
   sum=a+b;
   return sum;
  }
  public static void main(String args[])
  {
   Addition1 add=new Addition1();
   int sum=add.add();
   System.out.println("Addition: "+sum);
  }
}
Demo.java
package sample;
import mypackage.Addition;
public class Demo
{
  public static void avg(int sum)
 {
  int avg=(sum/2);
  System.out.println("Average: "+avg);
 }
 public static void main(String args[])
  {
   Addition obj=new Addition();
   int sum=obj.add();
   avg(sum);
  }
}
 