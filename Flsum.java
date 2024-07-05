import java.util.*;
class Flsum
{
      public static void main(String[] args)
     { 
        int num,first,last,slast,sum; 
        Scanner S1 = new Scanner(System.in);
        System.out.println("Enter a 5-Digit number:");
        num = S1.nextInt();
        first=num/10000;
        last=num%100;
        slast=last/10;
        sum=first+slast;
        System.out.println("Sum of first and last digits of 5-Digit number:"+sum);
       }
}