// 函数: sub_4f2400
// 地址: 0x4f2400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t var_14 = arg2

if (sub_4f1730().b != 0)
    int32_t var_14_1 = arg2
    struct _EXCEPTION_REGISTRATION_RECORD** edx_1 = sub_4f14d0(*(arg1 + 8))
    int32_t edi_1
    
    if (edx_1 != 0)
        edi_1 = edx_1[2]
    
    struct _EXCEPTION_REGISTRATION_RECORD** edi_2
    
    if (edx_1 == 0 || arg2 s< edi_1 || edx_1[1] + edi_1 s<= arg2)
        edi_2 = nullptr
    else
        edi_2 = edx_1[3][arg2 - edi_1]
        
        if (edi_2 == 0)
            int32_t var_14_2 = arg2
            edi_2 = sub_526580(edx_1)
    
    if (edi_2[0x91] == 0 && sub_4f2090(arg1, edi_2).b == 0)
        if (sub_4ee010(*(arg1 + 4)) == sub_4ee010(edi_2))
            sub_4ee090(edi_2)
        
        void* eax_4 = sub_4f1fc0(&edi_2[0x19])
        
        if (eax_4 != 0)
            sub_504260(eax_4 + 0x84, edi_2[0x10])
        
        edi_2[0x50] = *(*(arg1 + 4) + 0x40)
        int32_t eax_6
        eax_6.b = 1
        return eax_6

struct _EXCEPTION_REGISTRATION_RECORD** eax
eax.b = 0
return eax
