// 函数: sub_5187f0
// 地址: 0x5187f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* ebx = arg1
void* edx = *(ebx + 0x50)
int32_t edi = arg3
void* var_4 = ebx
int32_t result

if (*(edx + 0x2c8) == 0)
label_518845:
    void* esi_2 = *(edx + 0x314)
    
    if (esi_2 == 0 || esi_2 == edx)
        goto label_518881
    
    int32_t* ecx_2 = *(esi_2 + 0x74)
    ebx.b = *(esi_2 + 0x1b5)
    *(esi_2 + 0x1b5) = 1
    result = (*(*ecx_2 + 0x44))(arg2, edi, 1)
    *(esi_2 + 0x1b5) = ebx.b
    
    if (result.b != 0)
        ebx = var_4
    label_518881:
        void* eax_4
        eax_4.b = *(*(ebx + 0x50) + 0x1b5)
        arg3.b = eax_4.b
        return sub_518720(ebx, arg2, edi, arg4, arg3)
else
    int32_t esi_1 = *(edx + 0x2cc)
    int32_t ecx = *(edx + 0x2d0)
    
    if (arg2 s>= esi_1 && arg2 s< *(edx + 0x2d4) + esi_1 && edi s>= ecx
            && edi s< *(edx + 0x2d8) + ecx)
        goto label_518845

result.b = 0
return result
