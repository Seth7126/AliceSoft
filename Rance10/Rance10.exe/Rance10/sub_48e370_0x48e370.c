// 函数: sub_48e370
// 地址: 0x48e370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = (*(*arg1 + 0x10))()
uint32_t result_1
int32_t* result_4 = result_1
void* edx = result_4[1]
int32_t arg_10
int32_t esi_1 = arg_10 - ((edx - *result_4) s>> 2)

if (eax_1 u< esi_1)
    esi_1 = eax_1

if (esi_1 != 0)
    result_1 = 0
    sub_48c850(result_4, &arg_10, edx, esi_1, &result_1)

uint32_t result = ((arg3[1] - *arg3) s>> 2) - 1

if (result u> 8)
    int32_t esi_2 = result_4[1]
    float* ecx_14 = *result_4
    int32_t var_4 = esi_2
    
    if (ecx_14 != esi_2)
        int32_t* ebx_1 = arg2
        
        do
            *ebx_1 -= 1
            int32_t edi = ebx_1[4]
            *(edi + ((*ebx_1 & ebx_1[3]) << 2)) = *ecx_14
            int32_t edi_1 = 0
            float xmm0_2 = *ecx_14 f* arg1[8]
            int32_t edx_3 = *arg3
            uint32_t result_3 = arg3[1]
            result_1 = result_3
            result_1 -= edx_3
            result_1 += 3
            result_1 u>>= 2
            result = result_1
            
            if (edx_3 u> result_3)
                result = 0
            
            *ecx_14 = xmm0_2
            
            if (result != 0)
                uint32_t result_2 = result
                
                do
                    edi_1 += 1
                    int32_t eax_17 = *ebx_1 + *edx_3
                    edx_3 += 4
                    result = eax_17 & ebx_1[3]
                    ebx_1 = arg2
                    *ecx_14 = *(edi + (result << 2)) f* arg1[9] + *ecx_14
                while (edi_1 != result_2)
                
                esi_2 = var_4
            
            ecx_14 = &ecx_14[1]
        while (ecx_14 != esi_2)
    
    return result

switch (result)
    case 0
        return sub_48e5c0(arg1, result_4, arg2, arg3)
    case 1
        return sub_48e620(arg1, result_4, arg2, arg3)
    case 2
        return sub_48e6a0(arg1, result_4, arg2, arg3)
    case 3
        return sub_48e740(arg1, result_4, arg2, arg3)
    case 4
        return sub_48e800(arg1, result_4, arg2, arg3)
    case 5
        return sub_48e8e0(arg1, result_4, arg2, arg3)
    case 6
        return sub_48e9d0(arg1, result_4, arg2, arg3)
    case 7
        return sub_48eae0(arg1, result_4, arg2, arg3)
    case 8
        return sub_48ec10(arg1, result_4, arg2, arg3)
