/**
 * Created by Amit on 1/3/2017.
 */
public class Stack<E>
{
    private static int topIndex = -1;
    private Object[] stackArray;

    Stack(int stackSize)
    {
        stackArray = new Object[stackSize];
    }

    public void push(E object)
    {
        if((stackArray.length - 1) == topIndex)
        {
            System.out.print("Overflow !");
            return;
        }

        topIndex++;
        stackArray[topIndex] = object;
    }

    public void pop()
    {
        if(topIndex == -1)
        {
            System.out.print("UnderFlow !");
            return;
        }

        stackArray[topIndex] = null;
        topIndex--;
    }

    public void printStack()
    {
        for (int i = 0; i <= topIndex; i++)
        {
            System.out.print(stackArray[i] + " ");
        }
    }
}
