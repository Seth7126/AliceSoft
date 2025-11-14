// 函数: sub_42be80
// 地址: 0x42be80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT lprc
int32_t eax_1 = __security_cookie ^ &lprc
lprc.left = arg2
lprc.right = arg3
lprc.top = arg4
lprc.bottom = arg5
int32_t result = FillRect(arg1, &lprc, GetStockObject(WHITE_BRUSH))
sub_69a5bc(eax_1 ^ &lprc)
return result
