/**
 * Created by Amit on 1/4/2017.
 */
public class Vector<E>
{
    private Object[] vectorArray;
    private int head;

    Vector(int maxVectorArraySize)
    {
        vectorArray = new Object[maxVectorArraySize];
        for (Object o :
                vectorArray)
        {
            o = null;
        }

        head = 0;
    }

    public void elemAtRank(int rank)
    {
        System.out.print(vectorArray[rank]);
    }

    public void replaceAtRank(int rank)
    {


    }

    public void insertAtRank(int rank)
    {

    }

    public void removeAtRank(int rank)
    {

    }


}
