abstract class Demo
    {
     public void m1()
     {
       System.out.println("m1 method");
     }
     public void m2()
     {
      System.out.println("m2 method");
     }
 }
class Demo1 extends Demo
{
    } 
class Program
    {
       public static void main(String[] args)
        {
          Demo1 d= new Demo1();
          d.m1();
          d.m2();
          }
   }

