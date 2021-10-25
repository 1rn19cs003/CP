import java.io.*;
import java.util.Scanner;
class crc{
    static int n, m, msb, i, j, k;
    static int g[], d[], z[], r[];
    public static void main(String [] args)
    {
        Scanner myobj = new Scanner(System.in);
        System.out.println("Enter the number of databits : ");
        n=myobj.nextInt();
        System.out.println("Enter the number of databits : ");
        m = myobj.nextInt();
        d=new int[m+n];
        g=new int[n];
         System.out.println("Enter the databits: ");
         for(int i=0;i<n;i++)
         {
             d[i]=myobj.nextInt();
         }
         System.out.println("Enter generator bits: ");
         for (i = 0; i < m; i++)
             g[i] = myobj.nextInt();
            crcEval();
         boolean t = true;
         for (i = n; i < n + m - 1; i++) 
         {
             if (r[i] == 1)
                 t = false;
         }
         if (t)
             System.out.println("No error present ");
         else
             System.out.println("Error present ");

    }
    
    private static void crcEval()
    {
        r=new int[m+n];
        for(int i=0;i<m;i++)
        {
            r[i]=d[i];
        }
        z=new int[m];
        for(int i=0;i<n;i++)
        {
            k=0;
            msb=r[i];
            for(j=i;j<m+i;j++)
            {
                if (msb == 0)
                    r[j] = r[j] ^ z[k];
                else
                    r[j] = r[j] ^ g[k];
                k++;
            }
            r[m+i]=d[m+i];
        }
        for(i=n;i<n+m-1;i++)
            d[i]=r[i];
    }
}