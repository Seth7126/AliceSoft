// 函数: sub_61e4e0
// 地址: 0x61e4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x1c)

if (ecx == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t edi = (*(*ecx + 0x24))()

if (edi == 0xffffffff)
    int32_t eax_2
    eax_2.b = 0
    return eax_2

int32_t arg_8
int32_t ebx = arg_8
void* var_4
int32_t* eax_3 = &var_4
void* ecx_2 = arg4 - edi
int32_t var_8 = 0
var_4 = ecx_2

if (ecx_2 u>= ebx)
    eax_3 = &arg_8

int32_t ebp = *eax_3

if ((*(**(arg1 + 0x1c) + 0x14))(arg2, ebp, &var_8) != 0)
    while (var_8 == ebp)
        char* eax_7 = arg4
        edi += ebp
        
        if (edi u< eax_7)
        label_61e58e:
            int32_t temp1_1 = ebx
            ebx -= ebp
            arg_8 = ebx
            
            if (temp1_1 != ebp)
                arg2 += ebp
                var_8 = 0
                void* ecx_6 = eax_7 - edi
                int32_t* eax_11 = &var_4
                var_4 = ecx_6
                
                if (ecx_6 u>= ebx)
                    eax_11 = &arg_8
                
                ebp = *eax_11
                
                if ((*(**(arg1 + 0x1c) + 0x14))(arg2, ebp, &var_8) == 0)
                    break
                
                continue
        else
            int32_t eax_8 = *(arg1 + 0x24)
            
            if (eax_8 s> 0)
                *(arg1 + 0x28) += 1
            
            if (eax_8 s<= 0 || *(arg1 + 0x28) s< eax_8)
                if ((*(**(arg1 + 0x1c) + 0x18))(arg3) == 0)
                    break
                
                edi = arg3
                ebx = arg_8
                eax_7 = arg4
                goto label_61e58e
            
            int32_t eax_14 = arg_8
            
            if (eax_14 != ebp)
                _memset(arg2 + ebp, 0, eax_14 - ebp)
        
        eax_7.b = 1
        return eax_7

return 0
