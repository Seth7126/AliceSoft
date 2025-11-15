// 函数: sub_64dfe0
// 地址: 0x64dfe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void (** result)(int32_t* arg1) = (**(arg1 + 4))(arg1, 1, 0x7c)
*(arg1 + 0x194) = result
int32_t i = 0
*result = sub_64d900

if (*(arg1 + 0x4c) s> 0)
    void (*** edi_1)(int32_t* arg1) = *(arg1 + 0x54) + 0x54
    
    do
        result = (**(arg1 + 4))(arg1, 1, 0x100)
        *edi_1 = result
        edi_1 = &edi_1[0x16]
        i += 1
    while (i s< *(arg1 + 0x4c))

return result
