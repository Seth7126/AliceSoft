// 函数: ?Claim@Slot@?$Mailbox@V_UnrealizedChore@details@Concurrency@@@details@Concurrency@@QAE_NPAPAV_UnrealizedChore@34@@Z
// 地址: 0x6f78fe
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(*(*arg1 + 0xc) + (arg1[1] << 2))
int32_t* result
int32_t temp0_1

if (edi != 1)
    result = *(*arg1 + 0xc) + (arg1[1] << 2)
    temp0_1 = *result
    *result = 1

if (edi == 1 || temp0_1 != edi)
    sub_6f7a41(*arg1)
    result.b = 0
else
    if (arg2 != 0)
        *arg2 = edi
    
    result.b = 1

return result
