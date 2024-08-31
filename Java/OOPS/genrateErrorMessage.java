import java.util.Scanner;

class genrateErrorMessage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,b;
        a=sc.nextInt();
        b=sc.nextInt();
        try {
            int c=a/b;
            System.out.println("The divide of a and b is "+c);
        } catch (Exception e) {
            System.out.println("The error name is "+e.toString());
        }
        int d=a+b;
        System.out.println("The sum of a and b is "+d);
    }
}