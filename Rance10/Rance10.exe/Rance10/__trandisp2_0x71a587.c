// 函数: __trandisp2
// 地址: 0x71a587
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t ebx

if (*(arg2 + 0xe) != 5)
    ebx = 0x133f
else
    ebx:1.b = (*(arg3 - 0xa4)):1.b | 2
    ebx:1.b &= 0xfe
    ebx.b = 0x3f

*(arg3 - 0xa2) = ebx
int16_t x87control
int16_t x87status
x87control, x87status = __fldcw_memmem16(*(arg3 - 0xa2))
bool c0
bool c1
bool c2
bool c3
c0, c1, c2, c3 = __fxam(arg4)
*(arg3 - 0x94) = arg2
*(arg3 - 0xa0) = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
*(arg3 - 0x90) = 0
arg1.b = *(arg3 - 0x9f)
bool c0_1
bool c1_1
bool c2_1
bool c3_1
c0_1, c1_1, c2_1, c3_1 = __fxam(arg5)
*(arg3 - 0xa0) =
    (c0_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
arg1:1.b = *(arg3 - 0x9f)
arg1:1.b <<= 1
arg1:1.b s>>= 1
arg1:1.b = rol.b(arg1:1.b, 1)
int32_t eax
eax.b = arg1:1.b
eax.b &= 0xf
eax.b = *(&data_7568de + eax)
eax:1.b = eax.b
arg1.b <<= 1
arg1.b s>>= 1
arg1.b = rol.b(arg1.b, 1)
eax.b = arg1.b
eax.b &= 0xf
eax.b = *(&data_7568de + eax)
eax:1.b <<= 1
eax:1.b <<= 1
eax.b |= eax:1.b
jump(*(arg2 + sx.d(eax.b) + 0x10))
