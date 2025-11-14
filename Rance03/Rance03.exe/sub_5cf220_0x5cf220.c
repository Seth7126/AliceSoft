// 函数: sub_5cf220
// 地址: 0x5cf220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
*(arg1 + 0x234) -= 4
int32_t ebp = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t eax_2 = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ecx = **(arg1 + 0x234)
int32_t eax_6 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2

if (ecx u< eax_6)
    eax_6 = *(arg1 + 0x174)
    void* edi_1 = *(eax_6 + (ecx << 2))
    
    if (edi_1 != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_7
        int32_t ecx_2
        int32_t edx_1
        eax_7, ecx_2, edx_1 = sub_5d5230(edi_1)
        
        if (eax_7.b != 0)
            int32_t edx_2
            edx_2.b = sub_5d51e0(edi_1, eax_2, ebp) != 0
            return sub_5ddf10(arg1 + 0x220, edx_2)
        
        char const* const var_18 = "gcDelegate"
        return sub_5c2400(eax_7, edx_1, ecx_2, arg1, "DG_EXIST")

int32_t var_18_3 = ecx
int32_t var_1c_1 = 0x6ea138
int32_t edx
return sub_5c2400(eax_6, edx, ecx, arg1, "DG_EXIST")
