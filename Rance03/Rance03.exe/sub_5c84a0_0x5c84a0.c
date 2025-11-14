// 函数: sub_5c84a0
// 地址: 0x5c84a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = arg1[0x82]
int32_t edi = *eax
arg1[0x82] = &eax[1]
arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
int32_t result_1
struct sys43vm::CPage::VTable** eax_3
int32_t* ecx_1
int32_t edx
eax_3, ecx_1, edx = sub_5d6d70(&arg1[0x5b], ebx, edi, &result_1)

if (eax_3.b == 0)
    int32_t var_18_1 = edi
    int32_t var_1c_1 = ebx
    return sub_5c24e0(eax_3, edx, ecx_1, arg1, 0x6e8198)

int32_t ecx_2 = arg1[0x8b]
int32_t edi_3 = (arg1[0x8d] - arg1[0x8a]) s>> 2

if (edi_3 + 1 u>= ecx_2)
    sub_64ad90(&arg1[0x89], ecx_2 * 2)
    arg1[0x8d] = arg1[0x8a] + (edi_3 << 2)

int32_t result = result_1
*arg1[0x8d] = result
arg1[0x8d] += 4
return result
