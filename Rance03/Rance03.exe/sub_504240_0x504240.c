// 函数: sub_504240
// 地址: 0x504240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg2
int32_t ecx = esi[4]
int32_t* edx

if (esi[5] u< 0x10)
    edx = esi
else
    edx = *esi

int32_t ebp = *(arg1 + 0x18)

if (*(arg1 + 0x1c) u< 0x10)
    arg2 = arg1 + 8
else
    arg2 = *(arg1 + 8)

int32_t eax_2 = ecx

if (ebp u< ecx)
    eax_2 = ebp

int32_t* result

if (sub_405190(eax_2, edx, arg2, eax_2) != 0)
label_50429d:
    result = sub_5058d0(arg1 + 0x28, esi)
    
    if (result.b == 0)
        return result
    
    if (arg1 + 8 != esi)
        sub_401ff0(arg1 + 8, esi, 0, 0xffffffff)
    
    *(arg1 + 0x58) = 1
else
    int32_t ecx_2 = esi[4]
    
    if (ebp u< ecx_2)
        goto label_50429d
    
    result.b = ebp != ecx_2
    
    if (result != 0)
        goto label_50429d

result.b = 1
return result
