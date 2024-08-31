import java.util.Scanner;

class TernaryOp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String result;
        int n=sc.nextInt();
        result=(n%2==0)?"Even no":"Odd no";
        System.out.println(result);
    }
}