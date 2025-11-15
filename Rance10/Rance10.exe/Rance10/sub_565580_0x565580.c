// 函数: sub_565580
// 地址: 0x565580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t* result = arg4
int64_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1].d = esi[1].d
    
    esi += 0xc
    result += 0xc

return result
