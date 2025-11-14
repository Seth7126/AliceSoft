// 函数: __trandisp1
// 地址: 0x100171d0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

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
arg1.b <<= 1
arg1.b s>>= 1
arg1.b = rol.b(arg1.b, 1)
int32_t eax
eax.b = arg1.b
eax.b &= 0xf
eax.b = *(&data_1002175c + eax)
jump(*(arg2 + sx.d(eax.b) + 0x10))
