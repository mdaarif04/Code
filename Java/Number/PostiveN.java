import java.util.Scanner;
class PostiveN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int result;
        result=(n>=0)?n:-n;
        System.out.println(result);
    }
}