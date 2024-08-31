// package Java.Number;
import java.util.Scanner;
class fact {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n,f=1;
        n=sc.nextInt();
        while(n>1)
        {
            f=f*n;
            n--;
        }
        System.out.println(f);
        
    }
}