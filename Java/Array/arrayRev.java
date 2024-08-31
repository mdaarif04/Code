import java.util.Scanner;

class arrayRev {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] arr=new int[]{10,20,30,40,50};
        for (int i = arr.length-1; i >=0 ; i--) {
            System.out.println(arr[i]);
        }
    }
}