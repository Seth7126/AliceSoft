// 函数: sub_517e60
// 地址: 0x517e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x44)
sub_555e00(edi, 0x16, arg6)
void* result = *(edi + (arg6 << 2) + 0x7c)

if (*(result + 0x2e0) != arg2 || *(result + 0x2e4) != arg3 || *(result + 0x2ec) != arg4
        || *(result + 0x2f0) != arg5)
    *(result + 0x2e0) = arg2
    *(result + 0x2e4) = arg3
    *(result + 0x2ec) = arg4
    *(result + 0x2f0) = arg5
    *(result + 0x2f4) = 1

result.b = 1
return result
