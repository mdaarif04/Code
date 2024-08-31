import java.util.Scanner;

class stringComp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1=new String("Ajay");
        String s2=new String("ajay");
        System.out.println(s1.equals(s2));
        System.out.println(s1.compareTo(s2));
        System.out.println(s1.compareToIgnoreCase(s2));
    }
}