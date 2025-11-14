// 函数: sub_431240
// 地址: 0x431240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT lprc
int32_t eax_1 = __security_cookie ^ &lprc
GetClientRect((**arg1)(&lprc))
lprc.top = arg3
lprc.bottom = arg1[0x32] + arg3
FillRect(arg2, &lprc, GetStockObject(WHITE_BRUSH))
int128_t xmm0
xmm0.d = lprc.left
xmm0:4.d = lprc.top
xmm0:8.d = lprc.right
xmm0:0xc.d = lprc.bottom
int32_t eax_8
int32_t edx
edx:eax_8 = sx.q(arg1[0x32])
int32_t eax_11 = ((eax_8 - edx) s>> 1) + arg3 - 1
RECT lprc_1
lprc_1.left = xmm0.d
lprc_1.top = xmm0:4.d
lprc_1.right = xmm0:8.d
lprc_1.bottom = xmm0:0xc.d
lprc_1.top = eax_11
lprc_1.bottom = eax_11 + 1
FillRect(arg2, &lprc_1, arg1[0x36])
int32_t right = lprc_1.right
sub_69a5bc(eax_1 ^ &lprc)
return right
