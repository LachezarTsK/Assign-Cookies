
/**
 * @param {number[]} greedFactor
 * @param {number[]} size
 * @return {number}
 */
var findContentChildren = function (greedFactor, size) {
    greedFactor.sort((x, y) => x - y);
    size.sort((x, y) => x - y);
    let indexGreedFactor = 0;
    let indexSize = 0;
    let totalContentChildren = 0;

    while (indexGreedFactor < greedFactor.length && indexSize < size.length) {
        if (greedFactor[indexGreedFactor] <= size[indexSize]) {
            ++totalContentChildren;
            ++indexGreedFactor;
        }
        ++indexSize;
    }

    return totalContentChildren;
};
