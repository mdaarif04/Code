import java.util.Scanner;

class stringIndex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1=new String("Welcome");
        System.out.println(s1.indexOf('W'));  //for character because character only one char allow not multiple
        System.out.println(s1.indexOf("com"));
    }
}