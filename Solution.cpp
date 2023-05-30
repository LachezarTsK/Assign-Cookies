
#include <vector>
using namespace std;

class Solution {
    
public:
    //C++20: ...(span<int> greedFactor, span<int> size) ...
    int findContentChildren(vector<int>& greedFactor, vector<int>& size) const {

        //C++20: std::ranges::sort(greedFactor); std::ranges::sort(size); 
        sort(greedFactor.begin(), greedFactor.end());
        sort(size.begin(), size.end());
        int indexGreedFactor = 0;
        int indexSize = 0;
        int totalContentChildren = 0;

        while (indexGreedFactor < greedFactor.size() && indexSize < size.size()) {
            if (greedFactor[indexGreedFactor] <= size[indexSize]) {
                ++totalContentChildren;
                ++indexGreedFactor;
            }
            ++indexSize;
        }

        return totalContentChildren;
    }
};
