class naturalN{
public static void main(String[] args) {
        f1(10);

    }
    static void f1(int n)
    {
        if (n>0) {
            f1(n-1);
            System.out.println(n);
        }
    }
}
