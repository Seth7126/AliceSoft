// 函数: __load_CW
// 地址: 0x6a9cc5
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1:2.w = (arg1.w & 0x300) | 0x7f
int16_t x87control
int16_t x87status
x87control, x87status = __fldcw_memmem16(arg1:2.w)
