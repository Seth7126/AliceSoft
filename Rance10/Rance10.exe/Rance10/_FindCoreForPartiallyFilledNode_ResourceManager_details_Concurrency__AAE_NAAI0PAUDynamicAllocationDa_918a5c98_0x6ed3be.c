// 函数: ?FindCoreForPartiallyFilledNode@ResourceManager@details@Concurrency@@AAE_NAAI0PAUDynamicAllocationData@23@I@Z
// 地址: 0x6ed3be
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = 0
void* eax = *(arg4 + 0x10)
int32_t ecx = *(eax + 0x10)
int32_t ecx_1 = *(*(eax + 0x14) + (*(arg4 + 0x2c) << 2))
void* edx_1 = arg1
int32_t edi = ecx_1 * 0x34

if (*arg2 u> 0 && *(ecx_1 * 0x28 + *(edx_1 + 0x48) + 8) u> 0)
    ebx.b = 1
    Concurrency::details::ResourceManager::DynamicAssignCores(edx_1, *(arg4 + 0x10), ecx_1, 1, 0)
    *arg2 -= 1
label_6ed4ad:
    
    if (*(edi + ecx + 0x1c) == *(edi + ecx + 4))
        *(arg4 + 0x2c) += 1
    
    *(arg4 + 4) -= 1
else if (*arg3 u<= 0)
    *(arg4 + 0x2c) += 1
else
    int32_t ecx_4 = 0
    int32_t var_10_1 = 0
    
    if (arg5 u<= 0)
        *(arg4 + 0x2c) += 1
    else
        do
            if (ebx.b != 0)
                goto label_6ed4ad
            
            int32_t* ecx_5 = *(*(edx_1 + 0x58) + (ecx_4 << 2))
            
            if (*(ecx_5[4] + 0xa0) u> ecx_5[9])
                int32_t edx_3 = *(ecx_5[4] + 0x10)
                
                if (*(edi + edx_3 + 0x2c) u> 0)
                label_6ed480:
                    ebx.b = 1
                    sub_6ecce8(arg1, ecx_5, *(arg4 + 0x10), ecx_1, 1)
                    *arg3 -= 1
                else
                    *(edi + edx_3 + 0x2c)
                    
                    if (*(edi + edx_3 + 0x20) != *(edi + edx_3 + 0x2c) && ecx_5[0xb] u> 0)
                        goto label_6ed480
                    
                    *(edi + edx_3 + 0x24)
                    
                    if (*(edi + edx_3 + 0x1c) != *(edi + edx_3 + 0x24) && ecx_5[0xc] u> 0)
                        goto label_6ed480
                
                edx_1 = arg1
            
            ecx_4 = var_10_1 + 1
            var_10_1 = ecx_4
        while (ecx_4 u< arg5)
        
        if (ebx.b != 0)
            goto label_6ed4ad
        
        *(arg4 + 0x2c) += 1

int32_t* result
result.b = ebx.b
return result
