import java.util.Scanner;

class StringBuff {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuffer sb= new StringBuffer("Aarif");
        System.out.println(sb);
        sb.append(" Raza");
        sb.append(" "+786);
        sb.append("/"+92);
        sb.append(" Version "+2.0);
        sb.ensureCapacity(50);
        // After increase capicity
        System.out.println("Capacity of String is: "+sb);
        System.out.println("Length of String is: "+sb.length());
        System.out.println("Capacity of String is: "+sb.capacity());

    }
}