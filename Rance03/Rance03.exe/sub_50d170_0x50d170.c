// 函数: sub_50d170
// 地址: 0x50d170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg2
int32_t ecx = edi[4]
int32_t* edx

if (edi[5] u< 0x10)
    edx = edi
else
    edx = *edi

int32_t ebp = *(arg1 + 0x20)

if (*(arg1 + 0x24) u< 0x10)
    arg2 = arg1 + 0x10
else
    arg2 = *(arg1 + 0x10)

int32_t eax_2 = ecx

if (ebp u< ecx)
    eax_2 = ebp

if (sub_405190(eax_2, edx, arg2, eax_2) == 0)
    int32_t ecx_2 = edi[4]
    
    if (ebp u>= ecx_2)
        int32_t result
        result.b = ebp != ecx_2
        
        if (result == 0 && *(arg1 + 0x28) == result)
            return result

if (arg1 + 0x10 != edi)
    sub_401ff0(arg1 + 0x10, edi, 0, 0xffffffff)

if (*(arg1 + 0x28) != 0)
    *(arg1 + 0x28) = 0
    sub_50d490(arg1)

return sub_50d490(arg1)
