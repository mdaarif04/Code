import java.util.Scanner;
/**
 * InnerAreaCircumfrence
 */
class Circle{
    private int redius;
    // private double pi=3.14;
    public void setData(int r)
    {
        redius=r;
    }
    public void areaCla()
    {
        System.out.println("The Area is "+Math.PI*Math.pow(redius,2));
    }
    public void circum()
    {
        System.out.println("The Circumference is "+2*Math.PI*Math.pow(redius,2));
    }
}
class AreaCircumfrence{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the redius:");
        int r=sc.nextInt();
        Circle c=new Circle();
        c.setData(r);
        c.areaCla();
        c.circum();
    }
}