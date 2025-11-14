// 函数: sub_5c33c0
// 地址: 0x5c33c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* eax = arg1[0x82]
int32_t edi = *eax
arg1[0x82] = &eax[1]
int32_t ebx = eax[1]
arg1[0x82] = &eax[2]
struct sys43vm::CPage::VTable** eax_3
int32_t* ecx_1
int32_t edx
eax_3, ecx_1, edx = sub_5d6c90(&arg1[0x5b], ebx, &var_4, 1)

if (eax_3.b == 0)
    int32_t var_14 = ebx
    return sub_5c24e0(eax_3, edx, ecx_1, arg1, 0x6e6980)

void* ecx_3 = arg1[0x496]

if (ecx_3 == 0)
    int32_t var_14_1 = 0x6e69dc
    return sub_5c2400(eax_3, edx, ecx_3, arg1, "LOCALCREATE")

uint32_t eax_7 = *(ecx_3 + 0xc) u>> 2

if (edi u>= eax_7)
    int32_t var_14_2 = 0x6e65dc
    return sub_5c2400(eax_7, edx, ecx_3, arg1, "LOCALCREATE")

if (*(ecx_3 + 0xc) != 0)
    int32_t* eax_9 = var_4
    *(*(ecx_3 + 8) + (edi << 2)) = eax_9
    return eax_9

int32_t* eax_8 = var_4
*(edi << 2) = eax_8
return eax_8
