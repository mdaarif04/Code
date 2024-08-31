import java.util.Scanner;
class twodarray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr [][];
        int n,m;
        n=sc.nextInt();
        m=sc.nextInt();
        arr=new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j]=sc.nextInt();
            }
        }
        int sum=0;
        System.out.println("2D matrix is following");
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         System.out.print(arr[i][j]+" ");
        //         sum+=arr[i][j];
        //     }
        //     System.out.println();
        // }
        for(int []x:arr)
        {
            for(int y:x)
            {
                System.out.print(y+" ");
                sum+=y;
            }
            System.out.println();
        }
        System.out.println("The sum is "+sum);
        System.out.println("The sum is "+(float)sum/(n*m));

    }
}