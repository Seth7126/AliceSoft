// 函数: ?_Acquire@_NonReentrantLock@details@Concurrency@@QAEXXZ
// 地址: 0x6eb6d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = *arg1
*arg1 = 1
int32_t i = i_1

if (i != 0)
    int32_t var_c_1 = 0
    int32_t (* var_8_1)() = sub_6eb70e
    
    do
        void var_14
        Concurrency::details::_SpinWait<1>::_SpinOnce(&var_14)
        int32_t i_2 = *arg1
        *arg1 = 1
        i = i_2
    while (i != 0)

return i
