import java.util.Scanner;

/**
 * Worker
 */
class UWorker {
    private int hw;
    private double payRate;
    public void setData(int h,double pR)
    {
        hw=h;
        payRate=pR;
    }
    public void calculateSalary()
    {
        if (hw>40) {
            System.out.print((2*payRate)*hw);
        }
        else{
            System.out.print(payRate *hw);
        }
    }
}
class Worker{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the WorkHour and PayRate");
        UWorker w=new UWorker();
        int h=sc.nextInt();
        double pR=sc.nextDouble();
        w.setData(h, pR);
        w.calculateSalary();
    }
}