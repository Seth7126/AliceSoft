// 函数: sub_413900
// 地址: 0x413900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg1 + 0x64)

for (int32_t* i = *(arg1 + 0x60); i != ebx; i = &i[0x1b])
    (**i)(0)

*(arg1 + 0x64) = *(arg1 + 0x60)
HWND hWnd = *(arg1 + 0xc)
*(arg1 + 0x70) = 0xffffffff
InvalidateRect(hWnd, nullptr, 1)
return UpdateWindow(*(arg1 + 0xc))
