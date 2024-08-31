import java.util.Scanner;
class reversStrings {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      String str=sc.nextLine();
      for(int i=str.length()-1;i>=0;i--)
      {
         char ch=str.charAt(i);
         System.out.print(ch);
      }
   }
}