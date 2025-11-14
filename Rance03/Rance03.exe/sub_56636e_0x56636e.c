// 函数: sub_56636e
// 地址: 0x56636e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg1 - 0x20)
int32_t edi = *(arg1 - 0x18)
int32_t* esi = *(arg1 - 0x28)

if (ebx s> 1)
    sub_5660c0(esi, edi * 0x26c + esi)

if (ebx s> 0)
    sub_5660c0(edi * 0x26c + esi, (edi + 1) * 0x26c + esi)

j__free(esi)
sub_69df2b(nullptr, nullptr)
noreturn
