import java.util.Scanner;
abstract class Demo
{
   abstract public void a_method();

       public void b_method()
          {
            System.out.println("this is a method from non-abstract class");
        }
       Demo()
      {
       System.out.println("this is a constructor ofan abstract class");
       }
 }
class Sub extends Demo
{
       public void a_method()
         {
          System.out.println("abstract method");
         }
}
class Main
 {
        public static void main(String [] args)
      {
       Sub s=new Sub();
       s.a_method();
       s.b_method();
      }
}

