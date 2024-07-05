classUserThread extends Thread
{
  public void run()
  {
   Thread t=Thread.currentThread();
   System.out.println("run() is invoked in"+t.getName()+"thread...");
   for(int i=1;i<=10;i++)
   {
    System.out.println(&quot;run:&quot;+i);
    try
    {
     Thread.sleep(1000);
    }
    catch(Exception e)
    {
    }
  }
  System.out.println("run() is completed");
  }
 }
 classMultiThread
 {
  public static void main(String args[])
  {
    System.out.println("main() started creating an object of user Thread......");
    UserThread t=new UserThread();
    System.out.println("directly invoking run() of user thread");
  t.run();
  System.out.println("control back in main()....");
  System.out.println("launching new thread for run() of userthread....");

  t.start();
  for(int i=10;i>0;i--)
  {
   System.out.println("main:"+i);
  try
  {
   Thread.sleep(1000);
  }
  catch(Exception e)
  {
   }
  }
  System.out.println("main() completed");
 }
}
public class MainThread
{
   public static void main(String[] args)
   {
 
    Thread obj = Thread.currentThread();
    System.out.println("Current thread is "+obj);  
    System.out.println("Name of current thread is " +obj.getName());
 }
}