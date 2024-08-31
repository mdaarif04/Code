import java.util.Scanner;

class sumReapeted {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s;
        do {
            System.out.println("Enter two number");
            int a,b;
            a=sc.nextInt();
            b=sc.nextInt();
            System.out.println("The sum is "+a+b);
            s=sc.next();
        } while (s.equalsIgnoreCase("yes"));
    }
}