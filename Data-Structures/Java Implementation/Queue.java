/**
 * Created by Amit on 1/3/2017.
 */
public class Queue<E>
{
    private int front = 0, rear = 0, count = 0;
    //int queueSize = 10;
    private Object[] queueArray;

    Queue(int maxQueueSize)
    {
        //this.queueSize = maxQueueSize;
        queueArray = new Object[maxQueueSize];
        for (Object o :
                queueArray)
        {
            o = null;
        }
    }

    public void enQueue(Object o)
    {
        if (queueArray[rear] == null)
        {
            queueArray[rear] = o;
            rear = (rear + 1) % queueArray.length;
            count++;
            return;
        }

        System.out.print("Queue limit reached !");
    }

    public void deQueue()
    {
        if(queueArray[front] != null)
        {
            queueArray[front] = null;
            front = (front + 1) % queueArray.length;
            count--;
            return;
        }

        System.out.print("Queue is Empty !!");

    }
    
    public void printQueue()
    {
        int a = 0;
        for(int i = front; count != a ; i = (i + 1)% queueArray.length )
        {
                System.out.print(queueArray[i] + " ");
                a++;
        }
    }

}
