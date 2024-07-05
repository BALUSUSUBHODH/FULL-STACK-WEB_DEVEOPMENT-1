abstract class Abstract2
           {
              constructor()
             {
                System.out.println("This is constructor of abstract class");
              }
             abstract void a_method();
              {
                       System.out.println("a_method");
                 }
             void non_abstract()
           {
              System.out.println("This is normal method of Absract class");
             }
       } 
class Subclasss extends Abstract2
        {
           void a_method()
           {
               System.out.println("This is abstract method");
           }
         public static void main(String [] args)
           { 
             Subclass sb=new Subclass;
             sb.a_method;
             sb.non_abstract;
          }
        }