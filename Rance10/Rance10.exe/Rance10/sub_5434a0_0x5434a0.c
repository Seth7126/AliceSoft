// 函数: sub_5434a0
// 地址: 0x5434a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
void* result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    void* edi_1 = *(result + 0x44)
    sub_555e00(edi_1, 0x15, arg4)
    result = *(edi_1 + (arg4 << 2) + 0x7c)
    
    if (*(result + 0x28) != ebx.b)
        *(result + 0x28) = ebx.b
        *(result + 0xb4) = 1

return result
