// 函数: sub_475c60
// 地址: 0x475c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = *(data_75d4e4 + 0x93c)

if (edi == 0)
    void* result
    result.b = 0
    return result

int32_t* edx = *(edi + 0xc)
char eax_2

if (edx != 0)
    int32_t* ecx_1
    
    if (arg1[5] u< 0x10)
        ecx_1 = arg1
    else
        ecx_1 = *arg1
    
    eax_2 = (*(*edx + 0xc))(ecx_1)

if ((edx == 0 || eax_2 == 0) && sub_4707d0(edi + 0x3c, arg1) == 0
        && sub_4707d0(edi + 0x20, arg1) == 0)
    return 0

return 1
