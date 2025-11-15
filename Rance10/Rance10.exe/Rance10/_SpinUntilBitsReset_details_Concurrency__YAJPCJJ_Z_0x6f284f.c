// 函数: ?SpinUntilBitsReset@details@Concurrency@@YAJPCJJ@Z
// 地址: 0x6f284f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *arg1

if ((arg2 & result) != 0)
    int32_t var_c_1 = 0
    int32_t (* var_8_1)() = sub_6eb70e
    
    do
        void var_14
        Concurrency::details::_SpinWait<1>::_SpinOnce(&var_14)
        result = *arg1
    while ((arg2 & result) != 0)

return result
