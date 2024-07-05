import java.util.*;
class Swap
{
      public static void main(String[] args)
     { 
        int x, y,temp; 
        Scanner S1 = new Scanner(System.in);
        System.out.println("Enter the value of X and Y");
        x = S1.nextInt();
        y = S1.nextInt();
        temp=x;
        x=y;
        y=temp;
        System.out.println("After Swaping the values of X is "+x+"and Y is "+y);
      }
}  

        








        