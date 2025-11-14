// 函数: sub_1000fdd0
// 地址: 0x1000fdd0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* edi = arg2

if (edi == 0)
    return 0x80004003

int32_t eax_2 = (*(*(arg1 - 0x98) + 0x38))()

if (eax_2 != 0)
    return eax_2

if ((**edi)(edi, 0x1001bd00, &arg2) s< 0)
    *(arg1 + 0x10) = 0x30
    *(arg1 + 0x14) = 0
    *(arg1 + 0x30) = 0
    *(arg1 + 0x18) = 0
    
    if ((*(*edi + 0x3c))(edi) == 0)
        *(arg1 + 0x18) |= 4
    
    if ((*(*edi + 0x24))(edi) == 0)
        *(arg1 + 0x18) |= 2
    
    if ((*(*edi + 0x1c))(edi) == 0)
        *(arg1 + 0x18) |= 1
    
    if ((*(*edi + 0x14))(edi, arg1 + 0x20, arg1 + 0x28) s>= 0)
        *(arg1 + 0x18) |= 0x110
    
    if ((*(*edi + 0x34))(edi, arg1 + 0x34) == 0)
        *(arg1 + 0x18) |= 8
    
    (*(*edi + 0xc))(edi, arg1 + 0x38)
    *(arg1 + 0x1c) = (*(*edi + 0x2c))(edi)
    *(arg1 + 0x3c) = (*(*edi + 0x10))(edi)
else
    int32_t* eax_5 = arg2
    int32_t eax_7 = (*(*eax_5 + 0x4c))(eax_5, 0x30, arg1 + 0x10)
    int32_t* eax_8 = arg2
    (*(*eax_8 + 8))(eax_8)
    
    if (eax_7 s< 0)
        return eax_7

if ((*(arg1 + 0x18) & 8) != 0 && (*(*(arg1 - 0x98) + 0x20))(*(arg1 + 0x34)) != 0)
    int32_t edx_12 = *(*(arg1 - 0x8c) + 0x38)
    *(arg1 - 0x74) = 1
    edx_12(arg1 - 0x8c)
    int32_t* eax_29 = *(*(arg1 - 0x70) + 0x44)
    
    if (eax_29 != 0)
        (*(*eax_29 + 0xc))(eax_29, 3, 0x8004022a, 0)
    
    return 0x80040200

return 0
