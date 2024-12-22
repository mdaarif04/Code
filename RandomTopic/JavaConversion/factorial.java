class factorial{
public static void main(String[] args) {

    int n;
    n = f1(5);
    System.out.println(n); 
    }

    static int f1(int n)
    {
        int s;
        if (n==0) {
            return 1;
        }else{
            s = n*f1(n-1);
        }
        return s;
    }
}
