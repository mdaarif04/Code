import java.util.Scanner;

class leapYear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (n % 2 == 0 && n % 100 != 0 || n % 400 == 0) {
            System.out.println("This is Leap Year " + n);
        } else {
            System.out.println("This is not println " + n);
        }
    }
}