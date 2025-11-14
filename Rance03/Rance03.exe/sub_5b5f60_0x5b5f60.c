// 函数: sub_5b5f60
// 地址: 0x5b5f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg4
int32_t esi = arg3

if (esi != arg2)
    void* edi_2 = esi - result
    
    do
        esi += 0x10
        *(result + 8) = *(edi_2 + result + 8)
        *(result + 0xc) = *(edi_2 + result + 0xc)
        result += 0x10
    while (esi != arg2)

return result
