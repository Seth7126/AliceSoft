// 函数: sub_54a0a0
// 地址: 0x54a0a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 4)

while (i != *(arg1 + 8))
    void* edi_1 = *i
    __builtin_memcpy(edi_1 + 0x78, 
        "\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff", 
        0x18)
    sub_539540(edi_1 + 0x24, arg2, edi_1 + 0x74)
    i = &i[1]
    *(edi_1 + 0x70) = 1

void* result
result.b = 1
return result
