// 函数: ?ClaimExclusiveOwnership@VirtualProcessor@details@Concurrency@@QAE_NAAVClaimTicket@123@K_N@Z
// 地址: 0x6f7945
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_2 = *(arg1 + 8)
int32_t* result

if ((arg3 & result_2) == 0)
label_6f7980:
    result.b = 0
else
    int32_t* result_1
    
    if (arg3 != 0xf)
        while (true)
            result = result_2
            
            if (result == *(arg1 + 8))
                *(arg1 + 8) = 0
            else
                result = *(arg1 + 8)
            
            result_1 = result
            
            if (result_1 == result_2)
                result.b = 1
                break
            
            result_2 = result_1
            
            if ((arg3 & result_1) == 0)
                goto label_6f7980_1
    else
        int32_t* result_3 = *(arg1 + 8)
        *(arg1 + 8) = 0
        result_1 = result_3
        result.b = result_1 != 0
    
    if (result.b == 0)
    label_6f7980_1:
        result.b = 0
    else
        if (arg4 != 0)
            int32_t* eax_2 = **(arg1 + 0x50) + 0x1b4
            *eax_2 -= 1
            result = *(arg1 + 0x50) + 0x1c
            *result -= 1
            
            if (result_1 == 4 || result_1 == 8)
                result = **(arg1 + 0x50) + 0x1b8
                *result -= 1
                int32_t* ecx_1 = *(arg1 + 0x50) + 0x20
                *ecx_1 -= 1
        
        result.b = 1
        *arg2 = result_1
        arg2[1] = arg1
        *(arg1 + 0xc) = result_1

return result
