import java.util.Scanner;
public class FindTheNotes {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int amount,notes;
        amount=sc.nextInt();
        notes=amount/2000;
        System.out.println("RS 2000 "+notes);
        notes=amount/1000;
        System.out.println("RS 1000 "+notes);
        notes=amount/500;
        System.out.println("RS 500 "+notes);
        notes=amount/200;
        System.out.println("RS 200 "+notes);
        notes=amount/100;
        System.out.println("RS 100 "+notes);
        notes=amount/50;
        System.out.println("RS 50 "+notes);
        notes=amount/20;
        System.out.println("RS 20 "+notes);
        notes=amount/10;
        System.out.println("RS 10 "+notes);
        notes=amount/5;
        System.out.println("RS 5 "+notes);

    }
}
