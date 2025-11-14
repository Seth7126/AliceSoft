// 函数: sub_529d20
// 地址: 0x529d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1

for (int32_t* i = *(arg1 + 0x4c); i != *(arg1 + 0x50); i = &i[1])
    (*(**i + 4))()

*(arg1 + 0x50) = *(arg1 + 0x4c)

for (int32_t* i_1 = *(arg1 + 0x40); i_1 != *(arg1 + 0x44); i_1 = &i_1[1])
    int32_t* edi_1 = *(*i_1 + 0x10)
    enum MESSAGEBOX_RESULT eax_9
    
    if (edi_1 == 0)
        eax_9.b = 0
        return eax_9
    
    int32_t eax_3 = (*(*arg2 + 0x5c))(edi_1, 1)
    var_4 = eax_3
    
    if (eax_3 == 0)
        int32_t eax_8
        int32_t ecx_7
        int32_t edx_1
        eax_8, edx_1, ecx_7 = (*(*edi_1 + 0x10))((*(*edi_1 + 0x14))())
        sub_59f4e0(eax_8, edx_1, ecx_7, 0x6e3548, eax_8)
        eax_9.b = 0
        return eax_9
    
    sub_412de0(arg1 + 0x4c, &var_4)

int32_t eax_4
eax_4.b = 1
return eax_4
