// 函数: sub_10016240
// 地址: 0x10016240
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* eax_7 = *(arg1 + 0x18)

if (eax_7 != 0)
    (*(*eax_7 + 8))(eax_7)
    *(arg1 + 0x18) = 0

int32_t* eax = *(arg1 + 0x14)

if (eax != 0)
    (*(*eax + 0x24))(eax)
    int32_t* eax_1 = *(arg1 + 0x14)
    (*(*eax_1 + 8))(eax_1)
    *(arg1 + 0x14) = 0

int32_t eax_2 = *(arg1 + 0x1c)

if (eax_2 != 0)
    int32_t* eax_3 = *(arg1 + 0x10)
    (*(*eax_3 + 0x10))(eax_3, eax_2 + 0xc)
    void* eax_5 = *(arg1 + 0x1c)
    (*(*(eax_5 + 0xc) + 8))(eax_5 + 0xc)
    *(arg1 + 0x1c) = 0

int32_t* result = *(arg1 + 0x10)

if (result != 0)
    result = (*(*result + 8))(result)
    *(arg1 + 0x10) = 0

if (*(arg1 + 0xc) != 0)
    *(arg1 + 0xc) = 0

return result
