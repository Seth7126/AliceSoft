// 函数: sub_4c1f00
// 地址: 0x4c1f00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg2
int32_t ecx = edi[4]
int32_t* edx

if (edi[5] u< 0x10)
    edx = edi
else
    edx = *edi

int32_t ebp = *(arg1 + 0x54)

if (*(arg1 + 0x58) u< 0x10)
    arg2 = arg1 + 0x44
else
    arg2 = *(arg1 + 0x44)

int32_t eax_2 = ecx

if (ebp u< ecx)
    eax_2 = ebp

char* result

if (sub_405190(eax_2, edx, arg2, eax_2) != 0)
label_4c1f5b:
    
    if (arg1 + 0x44 != edi)
        sub_401ff0(arg1 + 0x44, edi, 0, 0xffffffff)
    
    result = sub_4c2150(arg1 + 0x44, *(arg1 + 0x5c))
    int32_t* ecx_4 = *(arg1 + 0x100)
    
    if (ecx_4 != 0)
        return (**ecx_4)()
else
    int32_t ecx_2 = edi[4]
    
    if (ebp u< ecx_2)
        goto label_4c1f5b
    
    result.b = ebp != ecx_2
    
    if (result != 0)
        goto label_4c1f5b

return result
