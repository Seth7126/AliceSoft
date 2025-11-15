// 函数: sub_4beba0
// 地址: 0x4beba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
int32_t* ebp

if (edi[5] u< 0x10)
    ebp = edi
else
    ebp = *edi

if (*(arg1 + 0xa8) u< 0x10)
    arg2 = arg1 + 0x94
else
    arg2 = *(arg1 + 0x94)

int32_t ecx = edi[4]
int32_t eax_2 = ecx

if (*(arg1 + 0xa4) u< ecx)
    eax_2 = *(arg1 + 0xa4)

int32_t eax_3 = sub_406ac0(eax_2, ebp, arg2, eax_2)
int32_t* result
int32_t ecx_2

if (eax_3 == 0)
    result = edi[4]
    ecx_2 = *(arg1 + 0xa4)

if (eax_3 != 0 || ecx_2 u< result || ecx_2 u> result || *(arg1 + 0x110) != arg3)
    if (arg1 + 0x94 != edi)
        sub_403590(arg1 + 0x94, edi, 0, 0xffffffff)
    
    *(arg1 + 0x110) = arg3
    
    if (arg3 s> 0)
        int32_t eax_4
        eax_4.b = sub_4a7ef0(arg3) != 0
        *(arg1 + 0x10c) = eax_4.b
    
    result = arg4
    
    if (result[4] != 0)
        result.b = sub_4a8060(result, arg5, arg6) != 0
        *(arg1 + 0x10c) = result.b
    
    *(arg1 + 0x114) = 1

return result
