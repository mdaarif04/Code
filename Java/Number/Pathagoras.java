import java.util.Scanner;

import java.util.Scanner;
public class Pathagoras {
    public static void main(String [] args)
    {
        double h,p,b;
        Scanner sc=new Scanner(System.in);
        p=sc.nextDouble();
        b=sc.nextDouble();
        h=Math.pow(p, 2)+Math.pow(b, 2);
        System.out.println(h);
    }
}
