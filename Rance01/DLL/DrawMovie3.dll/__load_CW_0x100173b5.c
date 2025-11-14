// 函数: __load_CW
// 地址: 0x100173b5
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

arg1:2.w = (arg1.w & 0x300) | 0x7f
int16_t x87control
int16_t x87status
x87control, x87status = __fldcw_memmem16(arg1:2.w)
