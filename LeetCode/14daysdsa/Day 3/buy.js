// 121. Best Time to Buy and Sell Stock

var maxProfit = function(prices) {
    let lowestPrice = 10005;
    let highestPrice = 0;
    let index = prices.length;
    for(let i=0;i<prices.length;i++) {
        if(prices[i] < lowestPrice && i < index) lowestPrice = prices[i];
        if(prices[i] > lowestPrice && prices[i]> highestPrice) {
            highestPrice = prices[i];
            index = i;
        }
        console.log(lowestPrice); 
    }
    console.log(lowestPrice)
    return highestPrice && (highestPrice - lowestPrice);
};

console.log(maxProfit([2,1,2,1,0,1,2]))