import java.util.Scanner;
/**
 * InneroverridefinalClass
 */
class A{
    final void display()
    {
        System.out.println("Hello user");
    }
}
class B extends A{
    void display() {   //not acessable
        System.out.println("Hello user");
    }
}
class overridefinalClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        B ob=new B();
        ob.display();

    }
}