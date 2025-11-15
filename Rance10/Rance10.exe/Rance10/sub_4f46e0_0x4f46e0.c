// 函数: sub_4f46e0
// 地址: 0x4f46e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *(arg1 + 0x68)

if (eax == 0)
    if (*(arg1 + 0x5c) == *(arg1 + 0x60))
        void* eax_2 = sub_404080(arg1 + 0x30)
        sub_4f4360(arg1, sub_404080(arg1 + 0x30), eax_2, 0)
    
    eax = *(*(arg1 + 0x5c) + ((*(arg1 + 0x60) - *(arg1 + 0x5c)) s>> 2 << 2) - 4)

void* result = *(eax + 4)

if (result != 0)
    return *(result + 0x40)

return result
