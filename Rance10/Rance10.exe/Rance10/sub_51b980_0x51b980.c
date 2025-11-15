// 函数: sub_51b980
// 地址: 0x51b980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
int32_t* edx

if (edi[5] u< 0x10)
    edx = edi
else
    edx = *edi

if (*(arg1 + 0x58) u< 0x10)
    arg2 = arg1 + 0x44
else
    arg2 = *(arg1 + 0x44)

int32_t ebp = edi[4]
int32_t eax_2 = ebp

if (*(arg1 + 0x54) u< ebp)
    eax_2 = *(arg1 + 0x54)

int32_t eax_3 = sub_406ac0(eax_2, edx, arg2, eax_2)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (eax_3 == 0)
    result = *(arg1 + 0x54)

if (eax_3 != 0 || result u< ebp || result u> ebp)
    if (arg1 + 0x44 != edi)
        sub_403590(arg1 + 0x44, edi, 0, 0xffffffff)
    
    result = sub_508fe0(arg1 + 0x44, *(arg1 + 0x5c))
    *(arg1 + 0xad) = 1

return result
