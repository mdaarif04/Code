// import java.util.Scanner;

import java.io.IOException;

class charMis{
    public void getInput()throws IOException {
        // Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of a");
        char ch=(char)System.in.read();
        System.out.println("The the number of a is " + ch);
    }
}

class charInput {
    public static void main(String[] args) throws IOException{
        InputUser u = new InputUser();
        u.getInput();
    }
}