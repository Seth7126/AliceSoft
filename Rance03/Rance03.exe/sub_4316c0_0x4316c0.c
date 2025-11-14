// 函数: sub_4316c0
// 地址: 0x4316c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[0x3a]
int32_t esi = arg1[0x32]
BOOL result = divs.dp.d(sx.q(GetScrollPos(arg1[0x17], SB_VERT) * esi + arg2), esi)
BOOL result_1 = result

if (result_1 s>= 0)
    result = (*(*arg1 + 0x88))()

if (result_1 s< 0 || result_1 s>= result)
    arg1[0x3a] = 0xffffffff
else
    arg1[0x3a] = result_1

if (ebx == arg1[0x3a])
    return result

return sub_4315f0(arg1)
