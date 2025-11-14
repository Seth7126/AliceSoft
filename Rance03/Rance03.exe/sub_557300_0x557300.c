// 函数: sub_557300
// 地址: 0x557300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1

if ((((*(arg1 + 0x3c) - *(arg1 + 0x38)) ^ (*(arg1 + 0x48) - *(arg1 + 0x44))) & 0xfffffffc) != 0)
    for (int32_t* i = *(arg1 + 0x44); i != *(arg1 + 0x48); i = &i[1])
        (*(**i + 4))()
    
    *(arg1 + 0x48) = *(arg1 + 0x44)
    
    for (int32_t* i_1 = *(arg1 + 0x38); i_1 != *(arg1 + 0x3c); i_1 = &i_1[1])
        int32_t* edi_1 = *(*i_1 + 0x10)
        enum MESSAGEBOX_RESULT eax_9
        
        if (edi_1 == 0)
            eax_9.b = 0
            return eax_9
        
        int32_t eax_4 = (*(*arg2 + 0x5c))(edi_1, 1)
        var_4 = eax_4
        
        if (eax_4 == 0)
            int32_t eax_8
            int32_t ecx_6
            int32_t edx_3
            eax_8, edx_3, ecx_6 = (*(*edi_1 + 0x10))((*(*edi_1 + 0x14))())
            sub_59f4e0(eax_8, edx_3, ecx_6, 0x6e3e38, eax_8)
            eax_9.b = 0
            return eax_9
        
        sub_412de0(arg1 + 0x44, &var_4)

int32_t eax_1
eax_1.b = 1
return eax_1
