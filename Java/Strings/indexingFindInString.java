import java.util.Scanner;

class indexingFindInString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char []arr={'A','A','R','I','F'};
        String str=new String(arr,2,3);
        System.out.println(str);
    }
}