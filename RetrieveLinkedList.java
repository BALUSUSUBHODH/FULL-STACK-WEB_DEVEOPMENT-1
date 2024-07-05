import java.util.*;

public class RetrieveLinkedList
{
  public static void main(String[] args) 
 {
  LinkedList <String> c1 = new LinkedList <String> ();
 
  c1.add("Black"); 
  c1.add("White");
  c1.add("Pink");
  c1.add("Yellow");
  System.out.println("Original linked list: " + c1);
 
  String x = c1.peekLast();
  System.out.println("Last element in the list: " + x);
  System.out.println("Original linked list: " + c1);
 }
}