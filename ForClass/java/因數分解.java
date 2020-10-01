import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int in,tim=2;
        Scanner scanner = new Scanner(System.in);
        in=scanner.nextInt();
        while(in>1){
            if(in%tim==0){
                System.out.print(tim);
                in/=tim;
                if(in!=1){
                System.out.print(" ");
            }
            }else{
                tim=tim+1;
            }
        }
        System.out.println();
    }
}
