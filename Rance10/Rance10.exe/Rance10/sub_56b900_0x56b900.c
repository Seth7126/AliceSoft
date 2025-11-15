// 函数: sub_56b900
// 地址: 0x56b900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0x10)

for (int32_t* i = *(arg1 + 0xc); i != edi; i = &i[1])
    void* ecx = *i
    int32_t eax_1 = *(ecx + 4)
    void* const eax_3
    
    if (eax_1 == 0xffffffff)
        eax_3 = nullptr
    else
        eax_3 = eax_1 * 0xd8 + *arg1
    
    sub_56a9b0(ecx, eax_3)
