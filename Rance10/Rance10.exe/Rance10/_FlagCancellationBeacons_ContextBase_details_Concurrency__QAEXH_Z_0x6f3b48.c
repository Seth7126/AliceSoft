// 函数: ?FlagCancellationBeacons@ContextBase@details@Concurrency@@QAEXH@Z
// 地址: 0x6f3b48
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 0
int32_t* result = arg1 + 0x8c
int32_t edi = *result

if (edi s> 0)
    do
        int32_t* eax = sub_6f33ed(result, esi)
        
        if (eax[1] s>= arg2 && (*(arg1 + 0x3c) == 0xffffffff || *(arg1 + 0x3c) s<= arg2))
            *eax += 1
        
        esi += 1
        result = arg1 + 0x8c
    while (esi s< edi)

return result
