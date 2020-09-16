import java.lang.Math;
public class Main {
    public static void main(String[] args){
        int now,flag,t=0;
        for (int i=1;i<100;i++) {
            flag=0;
            for (now=i-1;now>1;now--){
                if(i%now==0) {
                    flag = 1;
                }
            }
            if(flag==0){
                System.out.printf("%d\t",i);
                t++;
                if(t%5==0){
                    System.out.printf("\n");
                }
            }
        }
    }
}
