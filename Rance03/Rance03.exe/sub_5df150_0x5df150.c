// 函数: sub_5df150
// 地址: 0x5df150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t ebp
int32_t var_8 = ebp
int32_t edi
int32_t var_c = edi
int32_t* eax

if (data_75d534 != 0)
    char* var_10_1 = arg1
    eax = sub_6203f0()
    
    if (eax != 0)
        eax = (**eax)(0x6eac74)
        
        if (eax != 0 && (**eax)().b != 0)
            int32_t* ecx_2 = data_75d50c
            
            if (ecx_2 != 0)
                int32_t* edi_1 = (*(*ecx_2 + 0x14))(0x6eac84)
                
                if (edi_1 != 0 && sub_5def30(arg1) == 0xc)
                    int32_t esi
                    int32_t var_10_2 = esi
                    int32_t* eax_5 = (*(*edi_1 + 0xc))(sub_5dee60(arg1))
                    
                    if (eax_5 == 0)
                        eax_5.b = 0
                        return eax_5
                    
                    (*(*arg2 + 4))((**eax_5)())
                    int32_t eax_8
                    eax_8.b = 1
                    return eax_8

eax.b = 0
return eax
