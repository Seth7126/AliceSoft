// 函数: sub_541410
// 地址: 0x541410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg2
int32_t ecx = edi[4]
int32_t* edx

if (edi[5] u< 0x10)
    edx = edi
else
    edx = *edi

int32_t ebp = *(arg1 + 0x24)

if (*(arg1 + 0x28) u< 0x10)
    arg2 = arg1 + 0x14
else
    arg2 = *(arg1 + 0x14)

int32_t eax_2 = ecx

if (ebp u< ecx)
    eax_2 = ebp

struct sealengine::CLightParamList::VTable** result

if (sub_405190(eax_2, edx, arg2, eax_2) != 0)
label_54146b:
    
    if (arg1 + 0x14 != edi)
        sub_401ff0(arg1 + 0x14, edi, 0, 0xffffffff)
    
    switch (*(arg1 + 0x10) - 1)
        case nullptr, 1, 9, 0xa
            result = sub_5419e0(arg1)
            
            if (result.b == 0)
                return result
        case 2
            result = sub_53e990(arg1)
            
            if (result.b == 0)
                return result
        case 3
            result = sub_53e510(arg1, arg1)
            
            if (result.b == 0)
                return result
        case 7
            result = sub_53e690(arg1)
            
            if (result.b == 0)
                return result
else
    int32_t ecx_2 = edi[4]
    
    if (ebp u< ecx_2)
        goto label_54146b
    
    result.b = ebp != ecx_2
    
    if (result != 0)
        goto label_54146b

result.b = 1
return result
