// 函数: sub_47ec00
// 地址: 0x47ec00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 0x38)
int32_t edx = *(arg1 + 0x3c)
int32_t ebx

if (eax == edx)
label_47ec22:
    ebx.b = 0
else
    while (*eax == 0xffffffff)
        eax = &eax[1]
        
        if (eax == edx)
            goto label_47ec22
    
    ebx.b = 1

void* edi = data_75d4e0
int32_t var_4 = 0
int32_t var_8 = 0
char result
int32_t ecx_1
result, ecx_1 = sub_46cb80(edi)

if (result != 0)
    result, ecx_1 = (***(edi + 0xc))(&var_4, &var_8)

if (ebx.b == 0)
    if (*(arg1 + 0x34) == 0xffffffff)
        return result
    
    int32_t var_18_4 = ecx_1
    int32_t var_1c_4 = var_8
    *(arg1 + 0x34) = 0xffffffff
    return sub_4857a0(arg1 + 4, var_4, var_1c_4)

if (*(arg1 + 0x34) == 0xffffffff)
    int32_t var_18_2 = ecx_1
    int32_t var_1c_2 = var_8
    *(arg1 + 0x34) = 0
    ecx_1 = sub_485700(arg1 + 4, var_4, var_1c_2)

int32_t var_18_3 = ecx_1
int32_t eax_3 = sub_47ea10(arg1) + *(arg1 + 0x34)
return sub_485890(arg1 + 4, var_4, var_8, eax_3)
