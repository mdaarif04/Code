import java.util.Scanner;

class InputUser {
    public void getInput() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of a");
        int a = sc.nextInt();
        System.out.println("The the number of a is "+a);
    }
}

class InputMis {
    public static void main(String[] args) {
        InputUser u=new InputUser();
        u.getInput();
    }
}