// 函数: sub_4bea80
// 地址: 0x4bea80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
int32_t* edx

if (edi[5] u< 0x10)
    edx = edi
else
    edx = *edi

if (*(arg1 + 0x5c) u< 0x10)
    arg2 = arg1 + 0x48
else
    arg2 = *(arg1 + 0x48)

int32_t ebp = edi[4]
int32_t eax_2 = ebp

if (*(arg1 + 0x58) u< ebp)
    eax_2 = *(arg1 + 0x58)

int32_t eax_3 = sub_406ac0(eax_2, edx, arg2, eax_2)
int32_t eax_4

if (eax_3 == 0)
    eax_4 = *(arg1 + 0x58)

int32_t result
int32_t ebp_1

if (eax_3 != 0 || eax_4 u< ebp || eax_4 u> ebp)
    ebp_1 = arg5
label_4beaf7:
    
    if (arg1 + 0x48 != edi)
        sub_403590(arg1 + 0x48, edi, 0, 0xffffffff)
    
    *(arg1 + 0x78) = arg3
    result = arg4
    *(arg1 + 0x7c) = result
    *(arg1 + 0x80) = ebp_1
    *(arg1 + 0x114) = 1
else
    ebp_1 = arg5
    
    if (*(arg1 + 0x78) != arg3)
        goto label_4beaf7
    
    result = arg4
    
    if (*(arg1 + 0x7c) != result || *(arg1 + 0x80) != ebp_1)
        goto label_4beaf7
return result
