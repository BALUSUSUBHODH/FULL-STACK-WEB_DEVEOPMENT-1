abstract class A
      {
       A()
       {
         System.out.println("call me from B");
         }
     }
class B extends A
   {
         }
class Main2 
     {
       public static void main(String[] args) 
      {
       B b = new B();
      }
}
