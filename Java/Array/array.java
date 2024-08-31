import java.util.Scanner;

class array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // int n;
        // int arr[];
        // or 
        int arr[],n;  
        System.out.println("Enter the size");
        n=sc.nextInt();
        arr=new int[n];
        for (int i = 0; i < n; i++) {
            arr[i]=sc.nextInt();
        }
        int sum=0;
        for(int i=0;i<n; i++)
        {
            System.out.println(arr[i]);
            sum+=arr[i];
        }
        System.out.println("The sum of array is "+sum);
        System.out.println("The avg of array is "+(double)(sum/n));
    }
}