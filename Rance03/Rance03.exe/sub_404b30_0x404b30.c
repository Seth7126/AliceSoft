// 函数: sub_404b30
// 地址: 0x404b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = *(arg1 + 0x2b8)

if (*(arg1 + 0x2b4) == 0xffffffff || edi == 0xffffffff)
    return 

int32_t ebx_1 = data_75d4b0
int32_t var_4

if ((*(**(arg1 + 0x4fc) + 4))(ebx_1, edi, &var_4) == 0)
    return 

sub_413650(arg1 + 0x2e0, ebx_1, edi, var_4)
InvalidateRect(*(arg1 + 0x230), nullptr, 0)
UpdateWindow(*(arg1 + 0x230))
