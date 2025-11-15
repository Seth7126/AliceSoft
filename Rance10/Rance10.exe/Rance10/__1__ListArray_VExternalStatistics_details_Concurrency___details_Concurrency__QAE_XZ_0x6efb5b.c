// 函数: ??1?$ListArray@VExternalStatistics@details@Concurrency@@@details@Concurrency@@QAE@XZ
// 地址: 0x6efb5b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

Concurrency::details::ListArray<class Concurrency::details::ExternalStatistics>::DeleteElements(
    InterlockedFlushSList(arg1))
Concurrency::details::ListArray<class Concurrency::details::ExternalStatistics>::DeleteElements(
    InterlockedFlushSList(&arg1[1]))
Concurrency::details::ListArray<class Concurrency::details::ExternalStatistics>::DeleteElements(arg1
    ->__offset(0x10).d)
int32_t* i_1 = arg1->__offset(0x30).d

if (i_1 != 0)
    int32_t* i
    
    do
        int32_t j = 0
        
        if (arg1->__offset(0x28).d s> 0)
            do
                operator new(*(*i_1 + (j << 2)))
                j += 1
            while (j s< arg1->__offset(0x28).d)
        
        i = i_1[1]
        _free(*i_1)
        int32_t var_14_2 = 0xc
        operator new(i_1)
        i_1 = i
    while (i != 0)

return _free(arg1->__offset(0x34).d)
