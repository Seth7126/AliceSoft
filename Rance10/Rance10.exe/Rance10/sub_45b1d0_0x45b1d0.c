// 函数: sub_45b1d0
// 地址: 0x45b1d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
int32_t var_8 = 0
int32_t eax
char* eax_1 = sub_45b300(eax, &var_8, &var_4, arg2, arg3)

if (eax_1 != 0)
    int32_t edx_1 = var_4
    
    if (edx_1 s> 0 && var_8 s> 0)
        int32_t* eax_3 = (*(*arg4 + 0xc))(edx_1, var_8, 0x20)
        
        if (eax_3 != 0)
            int32_t var_10_1 = var_8
            int32_t var_14_2 = var_4
            *(arg1 + 8) = eax_3
            sub_45b260(eax_3, eax_1, var_14_2, var_10_1)
            _free(eax_1)
            int32_t eax_4
            eax_4.b = 1
            return eax_4
    
    _free(eax_1)

eax_1.b = 0
return eax_1
