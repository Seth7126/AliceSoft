// 函数: sub_5c9760
// 地址: 0x5c9760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
arg1[0x8d] -= 4
int32_t edi = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ebx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t ebp = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t eax_4 = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t ecx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* result = sub_5c9230(arg1, *arg1[0x8d], ecx, "A_FIND")

if (result == 0)
    return result

int32_t edx_1 = result[0xf]
uint32_t ecx_2 = edx_1 - 0xe

if (ecx_2 u<= 0x24)
    ecx_2 = zx.d(lookup_table_5c988c[ecx_2])
    
    switch (ecx_2)
        case 0
            return sub_5c98c0(arg1, result, eax_4, ebp, ebx, edi)
        case 1
            return sub_5c9a60(arg1, result, eax_4, ebp, ebx, edi)
        case 2
            return sub_5c9bb0(arg1, result, eax_4, ebp, ebx, edi)
        case 3
            return sub_5c9df0(arg1, result, eax_4, ebp, ebx, edi)
        case 4
            return sub_5c9f90(arg1, result, eax_4, ebp, ebx, edi)

int32_t var_18_6 = edx_1
return sub_5c24e0(result, edx_1, ecx_2, arg1, 0x6e8d04)
