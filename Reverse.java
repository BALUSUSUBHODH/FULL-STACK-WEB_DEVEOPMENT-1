import java.util.*;
class Reverse
{
      public static void main(String[] args)
     { 
        int num,first,middle,last,reverse; 
        Scanner S1 = new Scanner(System.in);
        System.out.println("Enter a 3-Digit number:");
        num = S1.nextInt();
        first=num/100;
        num=num%100;
        middle=num/10;
        last=num%10; 
        reverse=(last*100)+(middle*10)+first;
        System.out.println("Reverse of 3-Digit number:"+reverse);
     }
}
        