// 函数: sub_4a8dd0
// 地址: 0x4a8dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 0x48)

while (i != *(arg1 + 0x4c))
    void* edi_1 = *i
    sub_4aca40(edi_1 + 0x10)
    int32_t eax_1 = *(edi_1 + 0x18)
    i = &i[1]
    *(edi_1 + 0x31) = 0
    *(edi_1 + 0x30) = 0
    *(edi_1 + 0x78) = 0
    *(edi_1 + 0x64) = eax_1
    *(edi_1 + 0x74) = eax_1
    __builtin_memset(edi_1 + 0x1c, 0, 0x14)
    *(edi_1 + 0x68) = 0
    *(edi_1 + 0x6c) = 0
    *(edi_1 + 0x70) = 0

void* esi = *(arg1 + 0x44)
sub_4aca40(esi + 0x10)
int32_t result = *(esi + 0x18)
*(esi + 0x31) = 0
*(esi + 0x30) = 0
*(esi + 0x78) = 0
*(esi + 0x64) = result
*(esi + 0x74) = result
__builtin_memset(esi + 0x1c, 0, 0x14)
*(esi + 0x68) = 0
*(esi + 0x6c) = 0
*(esi + 0x70) = 0
return result
