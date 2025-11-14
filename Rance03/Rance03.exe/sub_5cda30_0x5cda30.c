// 函数: sub_5cda30
// 地址: 0x5cda30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1[0x51]

if (edi s< 0)
    return 

arg1[0x8d] -= 4
int32_t* ecx_1 = arg1[0x28] - arg1[0x27]
int32_t eax_2
int32_t edx_1
edx_1:eax_2 = muls.dp.d(0x38e38e39, ecx_1)
int32_t edx_2 = edx_1 s>> 4
int32_t eax_5 = ecx_1 s/ 0x48
int32_t var_18_3

if (edi u>= eax_5)
    var_18_3 = edi
    sub_5c24e0(eax_5, edx_2, ecx_1, arg1, 0x6e9aa8)
    return 

ecx_1 = edi * 9
eax_5 = arg1[0x27] + (ecx_1 << 3)

if (eax_5 == 0)
    var_18_3 = edi
    sub_5c24e0(eax_5, edx_2, ecx_1, arg1, 0x6e9aa8)
    return 

if (*(eax_5 + 0x28) != 1)
    int32_t var_18_1 = 0x6e9a8c
    sub_5c2400(eax_5, edx_2, ecx_1, arg1, "CALLJUMP")
    return 

int32_t var_4 = *arg1[0x8d]
struct sys43vm::CPage::VTable** eax
int32_t ecx_3
int32_t edx_3
eax, ecx_3, edx_3 = sub_5caba0(arg1, eax_5, &var_4, 1)

if (eax.b == 0)
    int32_t var_18_2 = 0x6e9ad8
    sub_5c2400(eax, edx_3, ecx_3, arg1, "CALLJUMP")
