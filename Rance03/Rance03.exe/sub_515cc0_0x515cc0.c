// 函数: sub_515cc0
// 地址: 0x515cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg2
int32_t ecx = edi[4]
int32_t* edx

if (edi[5] u< 0x10)
    edx = edi
else
    edx = *edi

int32_t ebp = *(arg1 + 0x14)

if (*(arg1 + 0x18) u< 0x10)
    arg2 = arg1 + 4
else
    arg2 = *(arg1 + 4)

int32_t eax_2 = ecx

if (ebp u< ecx)
    eax_2 = ebp

int32_t result
int32_t* ebp_1

if (sub_405190(eax_2, edx, arg2, eax_2) != 0)
label_515d56:
    ebp_1 = arg6
label_515d61:
    sub_4b51e0(arg1 + 0xb0)
    sub_4b51e0(arg1 + 0xbc)
    *(arg1 + 0xa8) = *(arg1 + 0xa4)
    
    if (sub_40c250(edi, U"\n\n\n\n\n\n") != 0)
        if (arg1 + 4 != edi)
            sub_401ff0(arg1 + 4, edi, 0, 0xffffffff)
        
        return sub_402110(arg1 + 0x1c, 0x6da675, nullptr)
    
    void* var_14_3 = arg1 + 0x3c
    int32_t var_18_1 = arg4
    sub_515930(arg1, edi.b, arg1 + 0xb0)
    void* var_14_4 = arg1 + 0x70
    int32_t var_18_2 = arg4
    sub_515930(arg1, arg3.b, arg1 + 0xbc)
    int32_t* eax_16 = sub_516250(edi)
    
    if (arg1 + 4 != edi)
        sub_401ff0(arg1 + 4, edi, 0, 0xffffffff)
    
    if (arg1 + 0x1c != arg3)
        sub_401ff0(arg1 + 0x1c, arg3, 0, 0xffffffff)
    
    *(arg1 + 0xe4) = arg4.b
    *(arg1 + 0xec) = *ebp_1
    *(arg1 + 0xe8) = arg5
    result = *ebp_1 + eax_16 * arg5
    *(arg1 + 0xf0) = result
    *ebp_1 = result
else
    int32_t ecx_2 = edi[4]
    
    if (ebp u< ecx_2)
        goto label_515d56
    
    int32_t eax_3
    eax_3.b = ebp != ecx_2
    
    if (eax_3 != 0)
        goto label_515d56
    
    if (sub_4058a0(arg1 + 0x1c, arg3) == 0 || *(arg1 + 0xe4) != arg4.b)
        goto label_515d56
    
    ebp_1 = arg6
    
    if (*(arg1 + 0xe8) != arg5)
        goto label_515d61
    
    result = *(arg1 + 0xec)
    
    if (result != *ebp_1)
        goto label_515d61
return result
