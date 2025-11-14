// 函数: sub_5d6d70
// 地址: 0x5d6d70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
struct sys43vm::CPage::VTable** eax

if (sub_5d6c90(arg1, arg3, &var_4, 0).b != 0)
    int32_t edi_1 = var_4
    
    if (edi_1 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
        int32_t ecx = *(arg1 + 8)
        void* ebx_1 = *(ecx + (edi_1 << 2))
        
        if (ebx_1 != 0 && arg2 u< (*(arg1 + 0xc) - ecx) s>> 2)
            eax = *(ecx + (arg2 << 2))
            
            if (eax != 0 && sub_5d6df0(arg1, ebx_1, eax).b != 0 && sub_5d6140(arg1, ebx_1).b != 0)
                *arg4 = edi_1
                int32_t* eax_5
                eax_5.b = 1
                return eax_5

eax.b = 0
return eax
