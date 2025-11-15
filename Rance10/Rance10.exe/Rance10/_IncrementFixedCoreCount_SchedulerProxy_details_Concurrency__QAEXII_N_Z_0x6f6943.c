// 函数: ?IncrementFixedCoreCount@SchedulerProxy@details@Concurrency@@QAEXII_N@Z
// 地址: 0x6f6943
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
int32_t edx = arg2 * 0x34
int32_t ebx
ebx.b = arg4
int32_t ecx = arg3 * 0x34
void* edi_1 = *(*(arg1 + 0x10) + edx + 0x30) + ecx
void* ecx_1 = *(edi_1 + 0x28)
void* result = ecx_1 + 1
*(edi_1 + 0x28) = result

if (ecx_1 != 0)
label_6f69b5:
    
    if (ebx.b != 0)
        *(arg1 + 0xb4) += 1
        *(edi_1 + 0x2c) += 1
else
    result = *(arg1 + 0x10) + edx
    *(result + 0x24) += 1
    *(arg1 + 0xac) += 1
    
    if (*(edi_1 + 0x31) != 0)
        *(edi_1 + 0x32) = 1
        result = sub_6f6ccd(arg1, result, arg3)
    
    if (ebx.b != 0)
        result = *(*(arg1 + 0x10) + edx + 0x30)
        
        if (*(result + ecx + 0x24) == 0)
            *(arg1 + 0xb8) += 1
        
        goto label_6f69b5

return result
