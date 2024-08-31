package Java.OOPS;

import java.util.Scanner;

/**
 * Student
 */
// *************************This code is voilate the rull of Encapsulation
// Because data is directly access So this cod is Voilate the rull of OOPS and
// Encapsulaton
// class Student {
// int roll;
// char grade;
// double per;
// }
// /**
// * InnerStudent
// */
// class UseStudent {
// public static void main(String args[])
// {
// Student s=new Student();
// s.roll=75;
// s.grade='A';
// s.per=75.7;
// System.out.println(s.roll+" "+s.grade+" "+s.per);
// }

// }

// class Student {
// private int roll;
// private char grade;
// private double per;

// public void setdata() {
// roll = 75;
// grade = 'A';
// per = 75.7;
// }

// public void showdata() {
// System.out.println(roll + " " + grade + " " + per);
// }

// }

// /**
// * InnerStudent
// */
// class UseStudent {
// public static void main(String args[]) {
// Student s = new Student();
// s.setdata();
// s.showdata();
// }

// }

// class Student {
//     private int roll;
//     private String name;
//     private double per;

//     public void setdata() {
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter the roll name and per");
//         roll = sc.nextInt();
//         name = sc.nextLine();
//         name = sc.nextLine();
//         per = sc.nextDouble();
//     }

//     public void showdata() {
//         System.out.println("Roll "+roll+" Name "+name+" per "+per);
//     }

// }
// class UseStudent {
//     public static void main(String args[]) {
//         Scanner sc = new Scanner(System.in);
//         Student st = new Student();
//         st.setdata();
//         st.showdata();
//         Student sp = new Student();
//         sp.setdata();
//         sp.showdata();
//     }

// }

// class Student {
//     private int roll;
//     private String name;
//     private double per;

//     public void setdata(int r,String n,double p) {
//         roll=r;
//         name=n;
//         per=p;
//     }

//     public void showdata() {
//         System.out.println("Roll " + roll + " Name " + name + " per " + per);
//     }

// }

// class UseStudent {
//     public static void main(String args[]) {
//         Scanner sc = new Scanner(System.in);
//         Student S = new Student();
//         int r=sc.nextInt();
//         String s=sc.next();
//         double p=sc.nextInt();
//         S.setdata(r, s, p);
//         S.showdata();
        
//     }

// }

class Student {
    private int roll;
    private String name;
    private double per;

    public void setdata(int r, String n, double p) {
        roll = r;
        name = n;
        per = p;
    }

    public void showdata() {
        System.out.println("Roll " + roll + " Name " + name + " per " + per);
    }

}

class UseStudent {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Student S = new Student();
        int r = Integer.parseInt(args[0]);
        String s = args[1];
        double p = Double.parseDouble(args[2]);
        S.setdata(r, s, p);
        S.showdata();

    }

}