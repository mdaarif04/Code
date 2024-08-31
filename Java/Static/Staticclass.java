class UseStatic{
    public int a;
    static int b;
}
public class Staticclass {
    public static void main(String[] args)
    {
        UseStatic S1=new UseStatic();
        UseStatic S2=new UseStatic();
        UseStatic S3=new UseStatic();
        S1.a=10;
        S2.a=20;
        S3.a=30;
        S1.b=10;           //UseStatic.b=10;
        S2.b=20;           //UseStatic.b=20;
        S3.b=30;           //UseStatic.b=30;
        System.out.println("S1 "+S1.a+" S2 "+S2.a+" S3 "+S3.a);
        System.out.println("S1 "+S1.b+" S2 "+S2.b+" S3 "+S3.b);
    }
    
}