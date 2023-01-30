package oops;

class Bank {
    int getRateOfinterest(){
        return 0;
    }
}
class Sbi extends Bank{
    int getRateOfinterest(){
        return 7;
    }
}
class Pnb extends Bank{
    int getRateOfinterest(){
        return 5;
    }
}
class Icici extends Bank{
    int getRateOfinterest(){
        return 9;
    }
}
class Method_overriding{
    public static void main(String[]args){
        Sbi s=new Sbi();
        Pnb p=new Pnb();
        Icici i=new Icici();
        System.out.println("Rate of interest "+ s.getRateOfinterest());
        System.out.println("Rate of interest "+p.getRateOfinterest());
        System.out.println("Rate of interest "+i.getRateOfinterest());
    }
}
