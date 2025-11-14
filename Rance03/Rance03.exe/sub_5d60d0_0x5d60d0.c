// 函数: sub_5d60d0
// 地址: 0x5d60d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sys43vm::CPage::VTable** eax = sub_5d57c0(arg1 + 0x1c)

if (eax != 0)
    int32_t eax_1 = sub_5d5dc0(arg1)
    *(*(arg1 + 8) + (eax_1 << 2)) = eax
    *arg3 = eax_1
    
    if (sub_5d3920(eax, *(arg2 + 0x2c), arg2 + 0x3c, *(arg2 + 0x30)).b != 0)
        int32_t ecx_5 = *arg3
        
        if (ecx_5 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
            void* ecx_6 = (*(arg1 + 8))[ecx_5]
            
            if (ecx_6 != 0)
                *(ecx_6 + 0x4c) = arg4
                int32_t eax_6
                eax_6.b = 1
                return eax_6

eax.b = 0
return eax
