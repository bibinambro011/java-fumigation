//  class parent{
//     int a;
//     String name;
//     void m1(int r,String name1){
//         a=r;
//         System.out.println("my name is "+name1+" and my age is "+ r);
//     }
//  }

class child{
    Object m1(){
        System.out.println("haii im object");
        return ' ';
    }
}


public class secure {
   public static void main(String [] args){
//     parent p=new parent();
//     p.m1(26,"baiju");
   
//    }
child c=new child();
c.m1();
}
}
