import java.util.*;
class Sp
{
      public static void main(String[] args)
     { 
        int num1,num2,sum,product; 
        Scanner S1 = new Scanner(System.in);
        System.out.println("Enter the value of two numbers:");
        num1 = S1.nextInt();
        num2 = S1.nextInt();
        sum=num1+num2;
        product=num1*num2;
        System.out.println(" sum of numbers is "+sum+"\n Product of numbers is "+product);
     }
}