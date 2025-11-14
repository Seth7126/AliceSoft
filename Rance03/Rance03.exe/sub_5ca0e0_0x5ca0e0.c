// 函数: sub_5ca0e0
// 地址: 0x5ca0e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
arg1[0x8d] -= 4
int32_t edi = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t ecx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t result = sub_5c9230(arg1, *arg1[0x8d], ecx, "A_SORT")

if (result == 0)
    return result

int32_t* ecx_2 = *(result + 0x3c)

if (ecx_2 - 0xe u> 3)
    int32_t* var_10_5 = ecx_2
    return sub_5c24e0(result, ecx_2 - 0xe, ecx_2, arg1, 0x6e8e48)

switch (ecx_2)
    case 0xe
        return sub_5ca2b0(arg1, result, edi)
    case 0xf
        return sub_5ca780(arg1, result, edi)
    case 0x10
        return sub_5ca920(arg1, result, edi)
    case 0x11
        return sub_5caae0(result, edi)
