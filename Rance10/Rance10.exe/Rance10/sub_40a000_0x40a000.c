// 函数: sub_40a000
// 地址: 0x40a000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0

if (((*(arg1 + 8) - *(arg1 + 4)) & 0xfffffffc) s> 0)
    int32_t* ecx = *(arg1 + 4)
    
    do
        void* eax_2 = *ecx
        
        if (*(eax_2 + 4) == arg2 && *(eax_2 + 0x20) == arg3)
            return i
        
        i += 1
        ecx = &ecx[1]
    while (i s< (*(arg1 + 8) - *(arg1 + 4)) s>> 2)

return 0xffffffff
