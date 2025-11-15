// 函数: sub_6287a0
// 地址: 0x6287a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_6228d0(*(arg1 + 4), arg2)

if (eax != 0)
    void** ecx_1 = *(eax + 0x38)
    
    if (ecx_1 != 0)
        void* esi_1 = **(eax + 0x24)
        sub_60c2a0(esi_1 + 0x118, &arg2, ecx_1)
        void* eax_3 = arg2
        
        if (eax_3 != *(esi_1 + 0x11c))
            return *(eax_3 + 0x20)

return 0xffffffff
