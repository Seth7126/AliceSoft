// 函数: sub_434150
// 地址: 0x434150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d4bc

if (*(esi + 0x34) == 0)
    return 0

void* eax_1 = sub_434b80(esi + 0xc, arg1)
char* edx

if (eax_1 != 0)
    edx = sub_4377b0(eax_1, arg2)
else
    edx = &data_74f554

if (*(edx + 0x14) u>= 0x10)
    edx = *edx

int32_t* eax_4 = (*(**(esi + 0x34) + 0x18))(edx)

if (eax_4 == 0)
    return eax_4

int32_t eax_6 = (*(*eax_4 + 0x14))()
int32_t edi = 0
int32_t esi_1 = 0

if (eax_6 s> 0)
    do
        edi <<= 3
        
        switch ((*(*eax_4 + 0x1c))(esi_1) - 0xa)
            case 0
                edi |= 1
            case 1
                edi |= 2
            case 2
                edi |= 4
            case 0x25
                edi |= 3
        
        esi_1 += 1
    while (esi_1 s< eax_6)

return edi
