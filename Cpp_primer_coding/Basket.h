/*
 * Basket.h
 * Copyright (C) 2016 blueyi <blueyi@debian>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef BASKET_H
#define BASKET_H

#include "Quote.h"
#include <set>
#include <memory>

class Basket {
public:

    //Basket使用合成的默认构造函数和拷贝控制成员
    void add_item(const Quote &sale)  //拷贝给定的对象
    {
        items.insert(std::shared_ptr<Quote>(sale.clone()));
    }
    void add_item(const Quote &&sale)  //移动给定的对象
    {
        items.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
    }

    double total_receipt(std::ostream&) const;

private:
    static bool compare(const std::shared_ptr<Quote> &lhs, const std::shared_ptr<Quote> &rhs)
    {
        return rhs->isbn() > lhs->isbn();
    }
    //multiset用于保存多个报价，按照compare成员排序。这样就可以保存同一本书的多条交易信息
    //定义一个指向Quote对象的shared_ptr的multiset。这个multiset将使用一个与compare成员类型相同的
    //函数来对其中的元素进行排序。multiset成员的名字是items，通过类内初始值调用比较函数compare来初始化items
    std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{compare};
};

#endif /* !BASKET_H */
