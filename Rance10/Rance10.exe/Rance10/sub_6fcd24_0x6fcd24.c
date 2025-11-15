// 函数: sub_6fcd24
// 地址: 0x6fcd24
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t eax = *(arg1 + 0x4c)
*(arg1 + 0x4c) -= 1

if (eax != 1)
    return eax - 1

return Concurrency::details::VirtualProcessorRoot::Unsubscribe(arg1)
