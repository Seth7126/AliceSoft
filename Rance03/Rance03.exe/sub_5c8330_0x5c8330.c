// 函数: sub_5c8330
// 地址: 0x5c8330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t eax_2
int32_t* ecx_1
int32_t edx
eax_2, ecx_1, edx = sub_5d7290(&arg1[0x5b], *arg1[0x8d], ebx)

if (eax_2.b == 0)
    return sub_5c24e0(eax_2, edx, ecx_1, arg1, 0x6e8094)

int32_t ecx_2 = arg1[0x8b]
int32_t edi_2 = (arg1[0x8d] - arg1[0x8a]) s>> 2

if (edi_2 + 1 u>= ecx_2)
    sub_64ad90(&arg1[0x89], ecx_2 * 2)
    arg1[0x8d] = arg1[0x8a] + (edi_2 << 2)

int32_t* result = arg1[0x8d]
*result = ebx
arg1[0x8d] += 4
return result
