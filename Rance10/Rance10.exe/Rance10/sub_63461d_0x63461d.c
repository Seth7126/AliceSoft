// 函数: sub_63461d
// 地址: 0x63461d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 - 0x14)
int32_t* i = *(edi + 0x24)

while (i != 0)
    int32_t* i_1 = i
    int32_t* eax_1 = &i[3]
    i = *eax_1
    *eax_1 = 0
    (**i_1)(1)

*(edi + 0x24) = 0
sub_70021b(nullptr, nullptr)
noreturn
