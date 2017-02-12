/**
 * Created by Amit on 2/12/2017.
 */
public class Sort
{

    public static int[] BubbleSort(int[] sortArray)
    {
        boolean swapped = false;

        for (int i = 0; i < sortArray.length; i++)
        {
            swapped = false;

            for (int j = 0; j < sortArray.length; j++)
            {
                    if(j+ 1 == sortArray.length)
                        break;

                    if(sortArray[j] > sortArray[j + 1])
                    {
                        swap(sortArray, j, j + 1);
                        swapped = true;
                    }
            }

            if(swapped == false)
                break;
        }

        return sortArray;
    }

    private static void swap(int[] array, int indexA, int indexB)
    {
        int temp =  array[indexA];
        array[indexA] = array[indexB];
        array[indexB] = temp;
    }



    public static int[] InsertionSort(int[] sortArray)
    {
        int key = 0, j =0;

        for (int i = 1; i < sortArray.length; i++)
        {
            key = sortArray[i];
            j = i;

            while (j >0 && sortArray[j - 1] > key)
            {
                sortArray[j] = sortArray[j - 1];
                j--;
            }

            sortArray[j] = key;
        }

        return sortArray;
    }

    public static int[] SelectionSort(int[] sortArray)
    {
        int swapIndex = 0;

        for (int i = 0; i < sortArray.length; i++)
        {
            swapIndex = findMin(sortArray, i);
            swap(sortArray,i,swapIndex);
        }

        return sortArray;
    }

    public static int[] MergeSort(int[] sortArray)
    {
         divideMerge(sortArray);
         return sortArray;
    }

    private static void divideMerge(int[] array)
    {
        int n = array.length, mid;

        if(n < 2)
        {
            return;
        }

        mid =  n/2;
        int[] left = new int[mid];
        int[] right = new int[n - mid];

        for (int i = 0; i < mid; i++)
        {
            left[i] = array[i];
        }

        for (int i = mid; i < n; i++)
        {
            right[i -mid] = array[i];
        }

        divideMerge(left);
        divideMerge(right);
        Merge(left, right, array);

    }

    private static void Merge(int[] left, int[] right, int[] array)
    {
        int k = 0, i = 0, j = 0;

        while (i < left.length && j < right.length)
        {
            if(left[i] <= right[j])
            {
                array[k] = left[i++];
            }
            else
            {
                array[k] = right[j++];
            }
            k++;
        }

        while (i < left.length)
        {
            array[k++] = left[i++];
        }
        while (j < right.length)
        {
            array[k++] = right[j++];
        }

    }

    public static int[] ShellSort(int[] sortArray)
    {
        for (int gap = sortArray.length/2; gap > 0; gap /= 2)
        {

            for (int i = gap; i < sortArray.length; i++)
            {
                int temp = sortArray[i];

                int j;
                for (j = i; j >=gap && sortArray[j - gap] > temp ; j -= gap)
                {
                    sortArray[j] = sortArray[j -gap];
                }

                sortArray[j] = temp;
            }
        }

        return sortArray;
    }
    
    private static int findMin(int[] array, int startIndex)
    {
        int min = startIndex;

        for (int i = startIndex; i < array.length; i++)
        {
            if( i + 1 == array.length)
                break;

            if(array[i + 1] < array[min])
            {
                min = i + 1;
            }
        }

        return min;
    }


}



