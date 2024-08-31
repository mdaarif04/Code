class UseEmp{
    private String Ename;
    private int age;
    private int id;
    private static int nextId=1;
    public UseEmp(String En,int a)
    {
        Ename=En;
        age=a;
        id=nextId++;
    }
    public void show()
    {
        System.out.println("Ename: "+Ename+" Age: "+age+" ID: "+id);
    }
    public void showNext()
    {
        System.out.println("Ename: " + Ename + " Age: " + age + " ID: " + nextId);
    }
}
public class Emp1 {
    public static void main(String[] args)
    {
        UseEmp e=new UseEmp("Md Aarif Raza", 20);
        UseEmp f=new UseEmp("Md Ahmad Raza", 22);
        UseEmp g=new UseEmp("Md Sarfaraza", 21);
        e.show();
        f.show();
        g.show();
        e.showNext();
        // f.showNext();
        // g.showNext();
        {
            System.out.println("As a Intern");
            UseEmp h=new UseEmp("Sarita",22);
            UseEmp i=new UseEmp("Sohita",24);
            h.show();
            i.show();
            h.showNext();
            h=i=null;
            System.gc();
            System.runFinalization();
        }
        e.showNext();

        // UseEmp m=new UseEmp("Raza", 22);
        // m.show();
    }
    
}