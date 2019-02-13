import java.io.*;
class sorting
{
    public static void main(String args[])throws IOException
    {
        int n;
        int ar[]={2,1,3};
        int i,j,temp;
        DataInputStream dis = new DataInputStream(System.in);
         n=Integer.parseInt(dis.readLine());
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(ar[i]>ar[j])
                {
                    temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }
            System.out.print(ar[i]+" ");
        }
        
    }
}


