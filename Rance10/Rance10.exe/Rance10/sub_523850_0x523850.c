// 函数: sub_523850
// 地址: 0x523850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
int32_t var_4 = ebx
int32_t* ecx = data_7fcbd4
int32_t edi
int32_t var_8 = edi

if (ecx != 0)
    (**ecx)()
    int32_t* edi_1 = data_7fcbd4
    
    if (edi_1 != 0)
        int32_t esi
        int32_t var_c = esi
        int32_t eax_6 = (*(*edi_1 + 0xc))((*(*arg1 + 0x28))((*(*arg1 + 0x2c))(0x20)))
        arg1[2] = eax_6
        
        if (eax_6 != 0)
            int32_t eax_11 = (*(*edi_1 + 0xc))((*(*arg1 + 0x28))((*(*arg1 + 0x2c))(0x20)))
            arg1[3] = eax_11
            
            if (eax_11 != 0)
                int32_t* esi_4 = arg1[2]
                
                if (arg1[4] == 0)
                    sub_54d770(&arg1[4])
                
                sub_450940(arg1[4], esi_4)
                *(arg1 + 0x26) = 0
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
