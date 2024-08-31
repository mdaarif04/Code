import java.util.Scanner;

class ErrorHandleByProgra {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the two number");
        try {
            int a,b;
            a=sc.nextInt();
            b=sc.nextInt();
            if (a<=0) {
                ArithmeticException obj=new ArithmeticException("Number Should be positive");
            }
            int c=a/b;
            System.out.println("The division is "+c);
        } catch (ArithmeticException e) {
            System.out.println(e.getMessage());
        }
    }
}