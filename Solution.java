
import java.util.Arrays;

public class Solution {

    public int findContentChildren(int[] greedFactor, int[] size) {
        Arrays.sort(greedFactor);
        Arrays.sort(size);
        int indexGreedFactor = 0;
        int indexSize = 0;
        int totalContentChildren = 0;

        while (indexGreedFactor < greedFactor.length && indexSize < size.length) {
            if (greedFactor[indexGreedFactor] <= size[indexSize]) {
                ++totalContentChildren;
                ++indexGreedFactor;
            }
            ++indexSize;
        }

        return totalContentChildren;
    }
}
