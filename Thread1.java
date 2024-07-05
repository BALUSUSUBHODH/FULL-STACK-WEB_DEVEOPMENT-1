importjava.lang.*;
class Thread1
{
  public static void main(String args[])
 {
  Thread t=Thread.currentThread();
  System.out.println("current thread is:"+t);
  t.setName("Ds thread");
  System.out.println("after name chage thread:"+t);
  Try
  {
   for(int n=5;n>0;n--)
   {
     System.out.println(n);
     Thread.sleep(6000);
    }
  }
  catch(InterruptedException e)
  {
   System.out.println("main thread is interrupted");
  }
 }
}


















