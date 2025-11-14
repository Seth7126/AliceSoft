// 函数: sub_5ce800
// 地址: 0x5ce800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result_1 = arg1
arg1[0x8d] -= 4
int32_t edi = *arg1[0x8d]
struct sys43vm::CPage::VTable** eax_1
int32_t* ecx_1
int32_t edx
eax_1, ecx_1, edx = sub_5d6c90(&arg1[0x5b], edi, &result_1, 1)

if (eax_1.b == 0)
    int32_t var_10_1 = edi
    return sub_5c24e0(eax_1, edx, ecx_1, arg1, 0x6e9ee0)

int32_t ecx_3 = arg1[0x8b]
int32_t edi_3 = (arg1[0x8d] - arg1[0x8a]) s>> 2

if (edi_3 + 1 u>= ecx_3)
    sub_64ad90(&arg1[0x89], ecx_3 * 2)
    arg1[0x8d] = arg1[0x8a] + (edi_3 << 2)

int32_t* result = result_1
*arg1[0x8d] = result
arg1[0x8d] += 4
return result
