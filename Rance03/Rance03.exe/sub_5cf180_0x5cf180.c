// 函数: sub_5cf180
// 地址: 0x5cf180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t ecx = **(arg1 + 0x234)
int32_t eax_3 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2

if (ecx u< eax_3)
    eax_3 = *(arg1 + 0x174)
    void* edi_1 = *(eax_3 + (ecx << 2))
    
    if (edi_1 != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_4
        int32_t ecx_2
        int32_t edx_1
        eax_4, ecx_2, edx_1 = sub_5d5230(edi_1)
        
        if (eax_4.b != 0)
            int32_t eax_6
            int32_t edx_4
            edx_4:eax_6 = muls.dp.d(0x55555556, *(edi_1 + 0xc) u>> 2)
            return sub_5ddf10(arg1 + 0x220, (edx_4 u>> 0x1f) + edx_4)
        
        char const* const var_10 = "gcDelegate"
        return sub_5c2400(eax_4, edx_1, ecx_2, arg1, "DG_NUMOF")

int32_t var_10_2 = ecx
int32_t var_14 = 0x6ea0e8
int32_t edx
return sub_5c2400(eax_3, edx, ecx, arg1, "DG_NUMOF")
