// import java.util.Scanner;

// class jaggedArray {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int [][]arr=new int[3][];
//         arr[0]=new int[4];
//         arr[1]=new int[6];
//         arr[2]=new int[3];
//         for (int i = 0; i < arr.length; i++) {
//             for (int j = 0; j < arr[i].length; j++) {
//                 System.out.println("Enter value for row "+i+" col "+j);
//                 arr[i][j]=sc.nextInt();
//             }
//         }

//         for (int i = 0; i < arr.length; i++) {
//             for (int j = 0; j < arr[i].length; j++) {
//                 System.out.print(arr[i][j]+" ");
//             }
//             System.out.println();
//         }
//     }
// }

import java.util.Scanner;

class jaggedArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [][]arr=new int[3][];
        arr[0]=new int[4];
        arr[1]=new int[6];
        arr[2]=new int[3];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.println("Enter the value "+i+" col "+j);
                arr[i][j]=sc.nextInt();
            }
        }
        int sum=0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j]+" ");
                sum+=arr[i][j];
            }
            System.out.println();
            // System.out.println(sum);
        }
    }
}