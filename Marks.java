abstarct class Marks
      {
          abstract void getpercentage()
          {
              System.out.println(percentage);
           }
      }
class A extends Marks
       {   int sub1,sub2,sub3,sum;
            double percentage;
           a(int s1,int s2,int s3)
            { 
              sub1=s1;
              sub2=s2;
              sub3=s3;
            }
           void getpercentage()
             {
               sum=sub1+sub2+sub3;
               percentage=sum/3;
            }
           public static void main(String [] args)
           {  A a=new A();
              a.getpercentage
           }
          }
class B extends Marks
        { int subj1,subj2,subj3,add;
            double percentage;
           a(int t1,int t2,int t3,int t4)
            { 
              subj1=t1;
              subj2=t2;
              subj3=t3;
              subj4=t4;
            }
          void getpercentage()
           {   add=subj1+subj2+subj3+subj4;
               percentage=add/3;
             }
          public static void main(String [] args)
           {  B b=new B();
              b.getpercentage
           }
          }