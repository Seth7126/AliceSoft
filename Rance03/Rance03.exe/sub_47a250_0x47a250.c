// 函数: sub_47a250
// 地址: 0x47a250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = 0
int32_t esi = 0
uint32_t edi_3 = (arg2 - arg3 + 3) u>> 2

if (arg3 u> arg2)
    edi_3 = 0

if (edi_3 != 0)
    void* ecx = arg3
    
    do
        result = *arg4
        ecx += 4
        esi += 1
        *(ecx - 4) = result
    while (esi != edi_3)

return result
