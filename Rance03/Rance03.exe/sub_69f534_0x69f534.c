// 函数: sub_69f534
// 地址: 0x69f534
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t ecx
int16_t var_8 = ecx
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(((not.d(arg3)).w & temp0) | (arg2 & arg3.w))
return sx.d(temp0)
