import java.util.*;
class Swapping
{
      public static void main(String[] args)
     { 
        int x,y; 
        Scanner S1 = new Scanner(System.in);
        System.out.println("Enter the value of X and Y");
        x = S1.nextInt();
        y = S1.nextInt();
        System.out.println("Before Swaping the values of X is "+x+"and Y is "+y);
        x=x+y;
        y=x-y;
        x=x-y;
        System.out.println("After Swaping the values of X is "+x+"and Y is "+y);
      }
}  