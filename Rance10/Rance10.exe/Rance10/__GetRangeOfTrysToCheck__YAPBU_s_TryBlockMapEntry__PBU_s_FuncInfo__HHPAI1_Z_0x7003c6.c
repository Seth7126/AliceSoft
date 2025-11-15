// 函数: ?_GetRangeOfTrysToCheck@@YAPBU_s_TryBlockMapEntry@@PBU_s_FuncInfo@@HHPAI1@Z
// 地址: 0x7003c6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t i = arg2
void* edi = arg1
int32_t ecx_1 = *(edi + 0xc)
int32_t edx = ecx_1
int32_t ebx = *(edi + 0x10)
int32_t var_8_1 = ecx_1

if (i s>= 0)
    int32_t eax_3 = ecx_1 * 0x14 + 8 + ebx
    
    do
        if (ecx_1 == 0xffffffff)
            goto label_700438
        
        eax_3 -= 0x14
        ecx_1 -= 1
        edi = arg1
        
        if (*(eax_3 - 4) s< arg3)
            edi = arg1
            
            if (arg3 s<= *eax_3 || ecx_1 == 0xffffffff)
            label_70040d:
                edx = var_8_1
                i -= 1
                var_8_1 = ecx_1
        else if (ecx_1 == 0xffffffff)
            goto label_70040d
    while (i s>= 0)

*arg4 = ecx_1 + 1
*arg5 = edx

if (edx u<= *(edi + 0xc) && ecx_1 + 1 u<= edx)
    return (ecx_1 + 1) * 0x14 + ebx

label_700438:
_terminate()
noreturn
