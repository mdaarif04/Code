import java.util.Scanner;
class Box{
    private int l,b,h;
    public Box(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    public void show()
    {
        System.out.println(l+" ,"+b+" ,"+h);
    }
    public boolean equals(Object obj)
    {
        Box temp=(Box)obj;
        if (this.l==temp.l && this.b==temp.b && this.h==temp.h) {
            return true;
        }
        else{
            return false;
        }
    }
}
class equalsCom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Box b=new Box(10, 20, 30);
        Box b1=new Box(10, 20, 30);
        b.show();
        b1.show();
        System.out.println(b.equals(b1));
    }
}
