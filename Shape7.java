/// Write a Java program to create a package named mypack with circle, square,
rectangle classes each having methods to find the areas respectively and import it in
another class, there call the area() methods of circle, square, rectangle classes.
Test case 1: import & execute only Square class
Test case 2: access three classes by using fully qualified names.//
 
Circle.java
package mypack;
public class Circle
{
  double r;
  public void area()
 {
  System.out.println("Area of the circle = "+(3.14*r*r));
 }
}
Rectangle.java
package mypack;
public class Rectangle
{
  double l,b;
  public void area()
  {
   System.out.println("Area of the Rectangle = "+ (l*b));
   }
}
Square.java
package mypack;
public class Square
{
  double s;
  public void area()
  {
   System.out.println("Area of the Square ="+(s*s));
  }
}