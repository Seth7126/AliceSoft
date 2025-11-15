// 函数: sub_553310
// 地址: 0x553310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
int32_t* edx

if (edi[5] u< 0x10)
    edx = edi
else
    edx = *edi

if (*(arg1 + 0x24) u< 0x10)
    arg2 = arg1 + 0x10
else
    arg2 = *(arg1 + 0x10)

int32_t ebp = edi[4]
int32_t eax_2 = ebp

if (*(arg1 + 0x20) u< ebp)
    eax_2 = *(arg1 + 0x20)

if (sub_406ac0(eax_2, edx, arg2, eax_2) == 0)
    int32_t* result = *(arg1 + 0x20)
    
    if (result u>= ebp && result u<= ebp && *(arg1 + 0x28) == 0)
        return result

if (arg1 + 0x10 != edi)
    sub_403590(arg1 + 0x10, edi, 0, 0xffffffff)

if (*(arg1 + 0x28) != 0)
    *(arg1 + 0x28) = 0
    sub_553710(arg1)

return sub_553710(arg1)
