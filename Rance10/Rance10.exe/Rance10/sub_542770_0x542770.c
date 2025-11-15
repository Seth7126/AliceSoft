// 函数: sub_542770
// 地址: 0x542770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    void* edi_1 = *(result + 0x44)
    sub_555e00(edi_1, 0x13, arg4)
    result = *(edi_1 + (arg4 << 2) + 0x7c)
    
    if (*(result + 0xcc) != arg2)
        *(result + 0xcc) = arg2
        *(result + 0xd4) = 1

return result
