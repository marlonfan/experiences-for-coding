/*
 * 贪心匹配算法
 * @author Marlon
 */

function tanxin(pack, productsList, productsPriceList) {
    if (productsList.length != productsPriceList.length) {
        console.log('初始化数据有错误!');
    }

    console.log('初始化数据正确!进行下一步匹配');
    
    var productsInfo = [];

    for (var i = 0; i < productsList.length; i++) {
        productsInfo.push({
            productName: productsList[i],
            productPrice: productsPriceList[i]
        })
    };

    console.log(productsInfo);
}

tanxin(150, ['a', 'b', 'c'], [4,1,3]);
