import java.util.Scanner;
class AreaTringelH {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double h;
        double a=sc.nextDouble();
        double b=sc.nextDouble();
        h=2*(a/b);
        System.out.println("The area of Traingle is "+h);
    }
}