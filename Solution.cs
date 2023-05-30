
using System;

public class Solution
{
    public int FindContentChildren(int[] greedFactor, int[] size)
    {
        Array.Sort(greedFactor);
        Array.Sort(size);
        int indexGreedFactor = 0;
        int indexSize = 0;
        int totalContentChildren = 0;

        while (indexGreedFactor < greedFactor.Length && indexSize < size.Length)
        {
            if (greedFactor[indexGreedFactor] <= size[indexSize])
            {
                ++totalContentChildren;
                ++indexGreedFactor;
            }
            ++indexSize;
        }

        return totalContentChildren;
    }
}
