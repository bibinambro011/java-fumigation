class human{
    final void m1(){
        System.out.println("im private");
    }
}
class animal extends human{
    void m12(){
        System.out.println("not private method");
    }
}


public class finaltest {
    public static void main(String[] args){
        System.out.println("main method");

        human obj=new human();
        obj.m1();
    }
}
