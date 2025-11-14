// 函数: sub_5c8d80
// 地址: 0x5c8d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result_1 = arg1
arg1[0x8d] -= 4
int32_t eax_1
int32_t* ecx_1
int32_t edx
eax_1, ecx_1, edx = sub_5d7170(&arg1[0x5b], *arg1[0x8d], &result_1)

if (eax_1.b == 0)
    return sub_5c24e0(eax_1, edx, ecx_1, arg1, 0x6e87fc)

int32_t ecx_3 = arg1[0x8b]
int32_t edi_2 = (arg1[0x8d] - arg1[0x8a]) s>> 2

if (edi_2 + 1 u>= ecx_3)
    sub_64ad90(&arg1[0x89], ecx_3 * 2)
    arg1[0x8d] = arg1[0x8a] + (edi_2 << 2)

int32_t* result = result_1
*arg1[0x8d] = result
arg1[0x8d] += 4
return result
