package Number;
import java.util.Scanner;
class AreaCurcum
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double r = sc.nextDouble();
        // System.out.println(3.14*r*r);
        System.out.println(Math.PI*Math.pow(r,2));
    }
}
