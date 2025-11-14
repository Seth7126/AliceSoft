// 函数: sub_63b0d0
// 地址: 0x63b0d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi = arg6
int32_t result = 0
int32_t var_30_1
__builtin_memset(&var_30_1, 0, 0x2c)
_memset(esi, 0, 0x38)
int32_t ebp = arg5
int32_t edx = arg4
*esi = edx
*(esi + 4) = ebp

if (ebp s>= arg7)
    ebp = arg7 - 1

int32_t var_2c_1
int32_t var_28_1
int32_t var_24_1
int32_t var_20_1
int32_t var_1c_1
int32_t var_18_1
int32_t var_14_1
int32_t var_10_1
int32_t var_c_1
int32_t var_8_1

if (edx s<= ebp)
    int32_t* eax_2 = arg2 - arg3
    int32_t result_1 = 0
    int32_t* var_34_1 = eax_2
    int32_t* edi_1 = arg3 + (edx << 2)
    
    do
        float xmm1_1 = *edi_1
        int32_t ecx = int.d(xmm1_1 * 7.31428576f + 1023.5f)
        
        if (ecx s> 0x3ff)
            ecx = 0x3ff
        label_63b1ab:
            int32_t eax_5 = edx * edx
            
            if (*(eax_2 + edi_1) f+ *(arg8 + 0x458) < xmm1_1)
                var_14_1 += eax_5
                var_18_1 += ecx
                var_1c_1 += edx
                var_10_1 += ecx * ecx
                var_c_1 += ecx * edx
                var_8_1 += 1
            else
                var_28_1 += eax_5
                var_2c_1 += ecx
                var_30_1 += edx
                var_24_1 += ecx * ecx
                var_20_1 += ecx * edx
                result_1 += 1
            
            eax_2 = var_34_1
        else if (ecx s>= 0 && ecx != 0)
            goto label_63b1ab
        
        edx += 1
        edi_1 = &edi_1[1]
    while (edx s<= ebp)
    
    esi = arg6
    result = result_1

*(esi + 8) = var_30_1
*(esi + 0xc) = var_2c_1
*(esi + 0x10) = var_28_1
*(esi + 0x14) = var_24_1
*(esi + 0x18) = var_20_1
*(esi + 0x20) = var_1c_1
*(esi + 0x24) = var_18_1
*(esi + 0x28) = var_14_1
*(esi + 0x2c) = var_10_1
*(esi + 0x30) = var_c_1
*(esi + 0x34) = var_8_1
*(esi + 0x1c) = result
return result
