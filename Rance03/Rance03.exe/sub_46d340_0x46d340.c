// 函数: sub_46d340
// 地址: 0x46d340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 0x20))(ecx)
    int32_t* eax_2 = *(arg1 + 4)
    (*(*eax_2 + 8))(eax_2)
    *(arg1 + 4) = 0

int32_t ecx_2 = *(arg1 + 0xc)
int32_t edx = 0
int32_t* result = *(arg1 + 8)
uint32_t esi_4 = (ecx_2 - result + 3) u>> 2

if (result u> ecx_2)
    esi_4 = 0

if (esi_4 != 0)
    do
        edx += 1
        *result = 0
        result = &result[1]
    while (edx != esi_4)

return result
