abstract class Shape
      {
        abstract public void RectangleArea(double l,double b);
        abstract public void SqaureArea(double s);
        abstract public void CircleArea(double r);
      }
class Area
    {
     public void RectangleArea(double l,double b){
     double area=l*b;
     System.out.println(area);
    }
    public void SqaureArea(double s) 
   {
    double a=s*s;
    System.out.println(a);
   }
   public void CircleArea(double r)
   {
    double ar=3.15*r*r;
    System.out.println(ar);
   }
}
class Areas
   {
    public static void main(String [] args)
    {
     Area x= new Area();
     x.CircleArea(5);
     x.SqaureArea(3);
     x.RectangleArea(5,8);
    }
  }

