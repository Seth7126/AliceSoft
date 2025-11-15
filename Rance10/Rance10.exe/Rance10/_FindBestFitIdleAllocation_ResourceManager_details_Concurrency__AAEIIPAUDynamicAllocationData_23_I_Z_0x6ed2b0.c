// 函数: ?FindBestFitIdleAllocation@ResourceManager@details@Concurrency@@AAEIIPAUDynamicAllocationData@23@I@Z
// 地址: 0x6ed2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0
void* eax = *(arg3 + 0x10)
int32_t ecx = *(eax + 0x10)
int32_t edi = *(eax + 0x14)
char var_5

if (arg4 != 1)
    eax.b = *(arg3 + 0x20)
    var_5 = eax.b
else
    var_5 = 0

int32_t ecx_1 = *(arg3 + 0x2c)
int32_t eax_1 = 0xffffffff
int32_t edx_1 = *(arg1 + 0x18)
int32_t var_10 = 0xffffffff
int32_t result_2 = 0
int32_t var_14 = ecx_1

if (ecx_1 u>= edx_1)
    *(arg3 + 0x20) = 0
else
    int32_t result_1
    
    do
        int32_t edx_2 = *(edi + (ecx_1 << 2))
        void* edx_4 = edx_2 * 0x34 + ecx
        
        if (*(edx_4 + 0x1c) != 0)
            result_1 = result_2
        else
            int32_t eax_2 = *(arg3 + 4)
            int32_t var_18_1 = eax_2
            
            if (eax_2 u>= *(edx_4 + 4))
                var_18_1 = *(edx_4 + 4)
            
            result_1 = 0
            int32_t result_3 = *(edx_2 * 0x28 + *(arg1 + 0x48) + 0x1c)
            
            if (result_3 != 0)
                result_1 = arg2
                
                if (arg2 u>= result_3)
                    result_1 = result_3
            
            if (var_5 != 0)
                if (result_1 == var_18_1)
                    goto label_6ed39e
                
                goto label_6ed347
            
            if (result_1 u<= result_2)
            label_6ed347:
                ecx_1 = var_14
                eax_1 = var_10
                result_1 = result_2
            else
            label_6ed39e:
                ecx_1 = var_14
                eax_1 = ecx_1
                var_10 = eax_1
                result_2 = result_1
                
                if (var_5 != 0)
                    break
        
        ecx_1 += 1
        var_14 = ecx_1
    while (ecx_1 u< edx_1)
    
    if (eax_1 == 0xffffffff)
        *(arg3 + 0x20) = 0
    else
        result = *(arg3 + 4)
        
        if (result u>= result_1)
            result = result_1
        
        Concurrency::details::ResourceManager::DynamicAssignCores(arg1, *(arg3 + 0x10), 
            *(edi + (eax_1 << 2)), result, 1)
        int32_t edx_5 = *(arg3 + 0x2c)
        *(arg3 + 4) -= result
        int32_t ecx_4 = *(edi + (edx_5 << 2))
        *(edi + (edx_5 << 2)) = *(edi + (var_10 << 2))
        *(edi + (var_10 << 2)) = ecx_4
        *(arg3 + 0x2c) += 1
        *(arg3 + 0x20) = 1

return result
