/**
 * Created by Amit on 1/3/2017.
 */
public class Main
{
    public static void main(String[] args)
    {
        int[] a = {435,34534,53534,354,23,2,45,56};
        a = Sort.ShellSort(a);

        for (int i = 0; i < a.length; i++)
        {
            System.out.print(a[i] + " ");
        }



    }
}
