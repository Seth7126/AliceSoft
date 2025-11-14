// 函数: sub_4b2163
// 地址: 0x4b2163
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg1 - 0x54)
int32_t edi = *(arg1 - 0x4c)
int32_t* esi = *(arg1 - 0x5c)

if (ebx s> 1)
    sub_4107c0(esi, &esi[edi * 6])

if (ebx s> 0)
    sub_4107c0(&esi[edi * 6], &esi[(edi + 1) * 6])

j__free(esi)
sub_69df2b(nullptr, nullptr)
noreturn
