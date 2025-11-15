// 函数: ?SpinUntilIdle@FreeVirtualProcessorRoot@details@Concurrency@@IAEXXZ
// 地址: 0x6fd144
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (* var_8)() = sub_6eb70e
int32_t var_c = 0

while (*(arg1 + 0x50) != 0)
    if (*(arg1 + 0x54) != 0)
        break
    
    void var_14
    Concurrency::details::_SpinWait<1>::_SpinOnce(&var_14)
