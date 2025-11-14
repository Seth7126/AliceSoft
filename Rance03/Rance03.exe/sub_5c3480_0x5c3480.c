// 函数: sub_5c3480
// 地址: 0x5c3480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* eax = *(arg1 + 0x208)
void* ecx = *(arg1 + 0x1258)
int32_t edi = *eax
*(arg1 + 0x208) = &eax[1]
uint32_t eax_3 = *(ecx + 0xc) u>> 2

if (edi u>= eax_3)
    int32_t var_18_4 = edi
    int32_t var_1c_3 = 0x6e6608
    int32_t edx
    return sub_5c2400(eax_3, edx, ecx, arg1, "LOCALDELETE")

int32_t ebx_1

if (*(ecx + 0xc) != 0)
    ebx_1 = *(ecx + 8)
else
    ebx_1 = 0

int32_t ebx_2 = *(ebx_1 + (edi << 2))

if (ebx_2 == 0xffffffff)
    return eax_3

int32_t eax_4
int32_t ecx_2
int32_t edx_1
eax_4, ecx_2, edx_1 = sub_5d5e80(arg1 + 0x16c, ebx_2)

if (eax_4.b == 0)
    int32_t var_18_2 = ebx_2
    int32_t var_1c_1 = 0x6e9f20
    edx_1 = sub_5c2400(eax_4, edx_1, ecx_2, arg1, "DeletePage")

void* ecx_3 = *(arg1 + 0x1258)

if (edi u>= *(ecx_3 + 0xc) u>> 2)
    int32_t var_18_3 = edi
    uint32_t eax_9 = *(ecx_3 + 0xc) u>> 2
    uint32_t var_1c_2 = eax_9
    int32_t var_20 = 0x6e6638
    return sub_5c2400(eax_9, edx_1, ecx_3, arg1, "LOCALDELETE")

if (*(ecx_3 + 0xc) == 0)
    *(edi << 2) = 0xffffffff
    return 0

int32_t* eax_7 = *(ecx_3 + 8)
eax_7[edi] = 0xffffffff
return eax_7
