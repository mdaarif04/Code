import java.util.Scanner;

class arrdif {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // This is command line array
        if (args.length<2) {
            System.out.println("Please Enter atleast 2 integer");
        }
        else
        {
            int sum=0;
            for (int i = 0; i < args.length; i++) {
                sum+=Integer.parseInt(args[i]);
            }
            System.out.println("The sum is"+sum);
        }

        // First way array inilized
        // int months[]={10,20,30,40,50};

        // second way array inilized
        // int [] months;
        // months=new int[]{10,20,30,40,50};

        // thirs way array inilized
        // int [] months=new int[]{10,20,30,40,50};

        // // forth way array inilized
        // // int []months=new int[12];
        // // months[0]=10;
        // // months[1]=20;
        // // months[2]=30;
        // // months[3]=40;
        // // months[5]=50;
        // System.out.println("The size of array is "+months.length);
        // for (int i = 0; i < months.length; i++) {
        //     System.out.println(months[i]);
        // }
    }
}