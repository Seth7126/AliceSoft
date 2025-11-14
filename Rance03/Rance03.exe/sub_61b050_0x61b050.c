// 函数: sub_61b050
// 地址: 0x61b050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = *(arg1 + 8)
int32_t edi = *(arg1 + 0xc)

if (*(ebx + 0x14c) != edi)
    int32_t* eax = *(ebx + 0x38)
    (*(*eax + 0x2c))(eax, edi, 0, 0)
    *(ebx + 0x14c) = edi

int32_t edi_1 = *(arg1 + 0x20)
void* esi_1 = *(arg1 + 8)

if (*(esi_1 + 0x154) != edi_1)
    int32_t* eax_1 = *(esi_1 + 0x38)
    (*(*eax_1 + 0x44))(eax_1, edi_1)
    *(esi_1 + 0x154) = edi_1

int32_t result
result.b = 1
return result
