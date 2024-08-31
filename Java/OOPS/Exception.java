import java.util.Scanner;

class Exception {
    public Exception(String str) {
        //TODO Auto-generated constructor stub
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;
        a = sc.nextInt();
        b = sc.nextInt();
        int d = a + b;
        System.out.println("The sum is a+b is " + d);
        try {
            int c = a / b;
            System.out.println("The divide a/b is " + c);
        } catch (ArithmeticException e) {
            System.out.println("Please Provide non-zero value");
        }

    }
}