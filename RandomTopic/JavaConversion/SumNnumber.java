class SumNnumber{
public static void main(String[] args) {
    int k;
    k = f1(3);
    System.out.println(k);
       
    }
    
    static int f1(int n)
    {
        int s;
        if (n==1) {
            return 1;
        }
        s = n+f1(n-1);
        return s;
    }
}
