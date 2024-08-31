import java.util.Scanner;

class TringlePerimeter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,b,c,Perimeter;
        a=sc.nextInt();
        b=sc.nextInt();
        c=sc.nextInt();
        Perimeter=(a+b+c);
        System.out.println("The perimeter of Tringle is "+Perimeter);
    }
}