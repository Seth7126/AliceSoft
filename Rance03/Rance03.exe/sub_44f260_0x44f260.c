// 函数: sub_44f260
// 地址: 0x44f260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t arg_4 = arg_4
sub_42f3d0(&arg1[1], &var_4, &arg_4)
int32_t* eax_1 = var_4

if (eax_1 != arg1[1])
    void* edi_1 = eax_1[5]
    
    if (edi_1 != 0)
        int32_t* ecx_1 = *(edi_1 + 0xdc)
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 4))()
            *(edi_1 + 0xdc) = 0
        
        (**arg2)()
        *(edi_1 + 0xdc) = arg2
        int32_t eax_4
        eax_4.b = 1
        return eax_4

eax_1.b = 0
return eax_1
