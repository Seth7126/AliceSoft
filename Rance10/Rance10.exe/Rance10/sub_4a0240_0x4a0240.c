// 函数: sub_4a0240
// 地址: 0x4a0240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

WPARAM wParam = arg3
arg3.b = wParam.b
arg3:1.b = 0

if ((wParam.b s< 0 || wParam.b s> 0x1f) && wParam.b != 0x7f)
    (**(arg1 + 0x158))(&arg3)

return DefWindowProcA(arg2, 0x102, wParam, arg4)
