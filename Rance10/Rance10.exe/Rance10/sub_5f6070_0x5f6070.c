// 函数: sub_5f6070
// 地址: 0x5f6070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = (*(*arg1 + 8))()
int32_t ebx = 1
int32_t result_1 = result

if (result s> 1)
    do
        int32_t esi_1 = ebx - 1
        
        if (ebx s>= 1)
            int32_t edi_1 = ebx
            int32_t temp0_1
            
            do
                int32_t var_8 = esi_1
                int32_t var_4 = edi_1
                int32_t* ecx = *(arg2 + 0x24)
                
                if (ecx == 0)
                    sub_6d090a()
                    noreturn
                
                if ((*(*ecx + 8))(&var_4, &var_8) == 0)
                    break
                
                (*(*arg1 + 0x54))(esi_1, edi_1)
                edi_1 -= 1
                temp0_1 = esi_1
                esi_1 -= 1
            while (temp0_1 - 1 s>= 0)
            result = result_1
        
        ebx += 1
    while (ebx s< result)

return result
