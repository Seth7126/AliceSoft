// 函数: sub_4e4aa0
// 地址: 0x4e4aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t* ecx = data_75d538
int32_t edi
int32_t var_8 = edi

if (ecx != 0)
    (**ecx)()
    int32_t* edi_1 = data_75d538
    
    if (edi_1 != 0)
        int32_t esi
        int32_t var_c = esi
        int32_t eax_6 = (*(*edi_1 + 0xc))((*(*arg1 + 0x54))((*(*arg1 + 0x58))(0x20)))
        arg1[2] = eax_6
        
        if (eax_6 != 0)
            int32_t eax_11 = (*(*edi_1 + 0xc))((*(*arg1 + 0x54))((*(*arg1 + 0x58))(0x20)))
            arg1[3] = eax_11
            
            if (eax_11 != 0)
                sub_5066b0(&arg1[4], arg1[2])
                (*(*edi_1 + 4))()
                int32_t eax_15
                eax_15.b = 1
                return eax_15
        
        (*(*edi_1 + 4))()
        int32_t eax_13
        eax_13.b = 0
        return eax_13

int32_t eax
eax.b = 0
return eax
