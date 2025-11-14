// 函数: sub_44e630
// 地址: 0x44e630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t arg_4 = arg_4
sub_42f3d0(&arg1[6], &var_4, &arg_4)
int32_t* eax_1 = var_4

if (eax_1 != arg1[6])
    void* ebx_1 = eax_1[5]
    
    if (ebx_1 != 0)
        int32_t* result = *(ebx_1 + 0xd8)
        
        if (result != 0)
            int32_t eax_3 = (**result)()
            int32_t eax_4 = (*(*result + 4))()
            
            if (eax_3 == 2)
                return result
            
            int32_t* eax_6 = sub_44e6d0(eax_4, arg1[1], result, arg1[2])
            
            if (eax_6 != 0)
                sub_44eaf0(ebx_1, eax_6)
                (*(*eax_6 + 4))()
                return *(ebx_1 + 0xd8)

return 0
