package OOPS;

import java.util.Scanner;

class ParamitrizeConst {

    private int accountid;
    private String name;
    private double bal;
    public ParamitrizeConst(int a,String n,double b)
    {
        accountid=a;
        name=n;
        bal=b;
    }
    public void display()
    {
        System.out.println("Accountid "+accountid+" Name "+name+" Balance "+bal);
    }
}
class UseParamitrizeConst{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        ParamitrizeConst []obj1=new ParamitrizeConst[2];
        for (int i = 0; i < obj1.length; i++) {
        System.out.println("Enter the Accountid, Name ,Balance ");
        int a;
        a=sc.nextInt();
        String n=sc.next();
        double b=sc.nextDouble();
        obj1[i]=new ParamitrizeConst(a,n,b);
        }
        for(ParamitrizeConst a:obj1)
        {
            a.display();
        }
    }
}