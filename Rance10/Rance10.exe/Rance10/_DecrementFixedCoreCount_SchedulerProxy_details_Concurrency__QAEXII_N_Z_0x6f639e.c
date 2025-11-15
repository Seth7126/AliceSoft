// 函数: ?DecrementFixedCoreCount@SchedulerProxy@details@Concurrency@@QAEXII_N@Z
// 地址: 0x6f639e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t ebx = arg2 * 0x34
int32_t ecx = arg3 * 0x34
void* result = *(arg1 + 0x10)
void* edi_1 = *(result + ebx + 0x30) + ecx

if (arg4 != 0)
    *(edi_1 + 0x2c) -= 1
    *(arg1 + 0xb4) -= 1

int32_t temp1 = *(edi_1 + 0x28)
*(edi_1 + 0x28) -= 1

if (temp1 == 1)
    result = *(arg1 + 0x10) + ebx
    *(arg1 + 0xac) -= 1
    *(result + 0x24) -= 1
    
    if (*(edi_1 + 0x32) != 0)
        result = sub_6f6ccd(arg1, result, arg3)
        *(edi_1 + 0x32) = 0
    
    if (arg4 != 0)
        result = *(*(arg1 + 0x10) + ebx + 0x30)
        
        if (*(result + ecx + 0x24) == 0)
            *(arg1 + 0xb8) -= 1

return result
