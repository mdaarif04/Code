/**
 * Constructor
 */
class CConstructor {

    private int account;
    private String name;
    private int number;
    public CConstructor()
    {
        System.out.println("Object ia created...");
    }
}
/**
 * InnerConstructor
 */
class Constructor {
    public static void main(String args[])
    {
        CConstructor obj1=new CConstructor();
        CConstructor obj2=new CConstructor();
        CConstructor obj3=new CConstructor();
    }
    
}