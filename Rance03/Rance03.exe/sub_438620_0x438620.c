// 函数: sub_438620
// 地址: 0x438620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
sub_412de0(arg2 + 0x38, arg2 + 0x2c)
void* edi = *(arg2 + 0x2c)

if (edi != *(arg2 + 0x34))
    *(arg2 + 0x2c) = edi + 0x28
else
    edi = arg2 + 4

if (*(edi + 4) != 5)
    int32_t eax_2 = *(arg2 + 0x38)
    
    if (eax_2 != *(arg2 + 0x3c))
        *(arg2 + 0x2c) = *(eax_2 + ((*(arg2 + 0x3c) - eax_2) s>> 2 << 2) - 4)
        *(arg2 + 0x3c) -= 4
    
    eax_2.b = 0
    return eax_2

*(arg1 + 8) = 5

if (arg1 + 0xc != edi + 8)
    sub_401ff0(arg1 + 0xc, edi + 8, 0, 0xffffffff)

*(arg1 + 0x24) = *(edi + 0x20)
*(arg1 + 0x28) = *(edi + 0x24)
int32_t eax_5
eax_5.b = 1
*(arg2 + 0x3c) -= 4
return eax_5
