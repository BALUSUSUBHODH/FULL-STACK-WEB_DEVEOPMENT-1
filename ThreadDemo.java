 
class Printer implements Runnable
{
  String message;
  int delay; int count;
  Printer(String message, int count, int delay)
  {
   this.message=message;
   this.delay=delay;
   this.count=count;
   }
    public void run()
   {
    int time=count*1000;
    try
    {
     Thread.sleep(time);
     for(int i=0; i<delay; i++)
     { 
      System.out.println(message);
       }
    }
   catch(InterruptedException ie)
   {
    System.out.println(ie);
   }
 }
}
public class ThreadDemo
{
   public static void main(String[] args) throws Exception
   {
   Thread t1 = new Thread(new Printer("Good morning", 1, 3));
   Thread t2 = new Thread(new Printer("Hello", 1, 1));
   Thread t3 = new Thread(new Printer("Welcome", 3, 1));
   t1.start();
   t2.start();
   t3.start();
   t1.join();
   t2.join();
   t3.join();
   System.out.println("All the three threads t1, t2 and t3 have completedexecution");
   }
}
