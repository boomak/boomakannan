public class NeevPractise {
    public static void main(String[] args)
    {
        Logics l=new Logics(6);
        Logics l1=new Logics(6);
        l.variables();
        l.operators();
        l.Ifelse();
        l.LoopStatement();
        l.MethodOverLoadding(3,4);
        l.MethodOverLoadding(2,3,4);
        l.StatticcKeywwor(6);
        l1.StatticcKeywwor(7);
        Logics.inner obj=l.new inner();//innner class object creation
        obj.display();
        l.praArray();
        l.VarArg(1,2,3,4);
        B obj1 = new B();
        obj1.display();
        l.boxingOrWrapping();
        l.Exxeption();

    }
}
