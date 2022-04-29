import javax.swing.plaf.synth.SynthEditorPaneUI;

public class Logics {
    void variables()
    {
        System.out.println("********************Variables*******************");
        int i=1;//4 byte
        short s=2;//2 byte
        byte b=5;//1 byte
        long l=500000L;//8 byte
        double d=4.3;
    }
    void operators()
    {
        /*
        1.Arithematic--(+,-,/,*)
        2.bitwise
        3.Relational
        4.logic
         */
        System.out.println("********************Operators********************");
        int m=5,n=3;
        double d=(double)m/n;
        System.out.println(m+n);
        System.out.println(d);
        n+=m;//n=n+m
        System.out.println(n);
        n++;//n=n+1//short hand operator//post increment
        System.out.println(n);
        ++n;//post increment

    }
    void Ifelse()
    {
        System.out.println("********************IfElse********************");
        int n=7;
        if(n==7)//if(true)
            System.out.println("Hello");
        else if(n<6)
            System.out.println("Welcome");
        else
            System.out.println("Hai");

        int j = n>6?1:2;//ternory operator
        System.out.println(j);

    }
    void LoopStatement()
    {
        /*
        1.while loop--we do not know ending point
        2.for loop--when we know start and end point
        3.do while loop--even if condition is false we have to run 1st condition then do while
        4.for each loop
        */

        System.out.println("********************Loop********************");
        for(int i=1;i<5;i++)
        {
            for(int j=0;j<i;j++)
            {
                System.out.println("Hello");
            }
        }
    }
    void Jumpingcondition()
    {
        System.out.println("********************Jumping condition********************");
        int a=5;
        for(int i=0;i<a;i++)
        {
            if(i==1)
                continue;

        }

    }

    int len;
    Logics(int len)
    {
        System.out.println("********************Consructor********************");
        this.len=len;
        System.out.println(len);
    }

    void MethodOverLoadding(int a,int b)
    {
        System.out.println("********************Method overloading********************");
        System.out.println(a+b);
    }
    void MethodOverLoadding(int a,int b,int c)
    {
        System.out.println(a+b+c);
    }
    static int ai=56;

    void StatticcKeywwor(int k)
    {
        int ai=9;
        System.out.println("********************Static keyword********************");
        System.out.println(ai);

    }

    class inner
    {

        void display()
        {
            System.out.println("**************************Inner Class************************");
            System.out.println("Inner Class");
        }
    }

    void praArray()
    {
        System.out.println("**************************Arrays************************");
        int[] a=new int[3];
        int[] b={2,3};
        int d[][]={{2,3,4},{3,4,5}};
        //for each loop
        for(int k:b)
        {
            System.out.println(k);
        }
        //for each in 2 dimensional
        for(int k[] : d)
        {
            for(int j :k)
            {
                System.out.println(j);
            }
        }
    }
    void VarArg(int ...n)//{4,5,,6}
    {
        System.out.println("**************************Variable length array************************");
        for(int i :n)
        {
            System.out.print(i);
        }
    }

        void display()
        {
            System.out.println("In A");
        }

        void boxingOrWrapping()
        {
            System.out.println("**************************Boxing or Wrapping************************");
            int i=5;
            Integer ii=new Integer(i);//boxing
            System.out.println(ii);
            Integer  value=i;
            System.out.println(value);//Auto boxing
            String s="123";
            int k=Integer.parseInt(s);
            System.out.println(k);
        }
        void Exxeption()
        {
            int i=5;
            int j=0;
            try
            {
                int z=i/j;
            }
            catch(Exception e)
            {
                System.err.println("Error");//err will print error message in red colour
            }
        }


}
class A

{
    void display()
    {
        System.out.println("**************************method over ridding************************");
        System.out.println("In a");
    }
}
class B extends A
{
    void display()
    {
        System.out.println("In B");
    }
}
