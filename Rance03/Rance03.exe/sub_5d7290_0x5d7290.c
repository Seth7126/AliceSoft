// 函数: sub_5d7290
// 地址: 0x5d7290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg1

if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    int32_t ebx_1 = *(arg1 + 8)
    void* edi_1 = *(ebx_1 + (arg2 << 2))
    
    if (edi_1 != 0 && arg3 u< (*(arg1 + 0xc) - ebx_1) s>> 2)
        void* ebx_2 = *(ebx_1 + (arg3 << 2))
        
        if (ebx_2 != 0 && sub_5d61e0(arg1, edi_1).b != 0 && sub_5d6df0(arg1, edi_1, ebx_2).b != 0)
            return sub_5d6140(arg1, edi_1) != 0

int32_t result
result.b = 0
return result
