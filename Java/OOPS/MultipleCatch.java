import java.util.InputMismatchException;
import java.util.Scanner;

class MultipleCatch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a=0, b=0;
        
        
        try {
            a = sc.nextInt();
            b = sc.nextInt();
            int c = a / b;
            System.out.println("The divide a/b is " + c);

        } 
        catch (ArithmeticException e) {
            System.out.println("Please Provide non-zero value");
        }
        
        catch (InputMismatchException f) {
            System.out.println("Please Provide integer value");
            System.exit(0);
        }
        int d = a + b;
        System.out.println("The sum is a+b is " + d);
        
    }
}