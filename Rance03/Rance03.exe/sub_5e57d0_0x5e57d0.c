// 函数: sub_5e57d0
// 地址: 0x5e57d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
SetMenu(**(arg1 + 0xc), *(arg1 + 0x228))
sub_5e58d0(arg1, *(arg1 + 0x228))
DrawMenuBar(**(arg1 + 0xc))
int32_t dwNewLong = GetWindowLongA(**(arg1 + 0xc), 0xfffffff0) | 0xc40000
SetWindowLongA(**(arg1 + 0xc), 0xfffffff0, dwNewLong)
int32_t eax_5 = GetSystemMetrics(SM_CXSCREEN)
int32_t eax_6 = GetSystemMetrics(SM_CYSCREEN)
int32_t eax_7 = GetSystemMetrics(SM_CXDLGFRAME)
int32_t eax_8 = GetSystemMetrics(SM_CYDLGFRAME)
return SetWindowPos(**(arg1 + 0xc), nullptr, neg.d(eax_7), neg.d(eax_8), eax_5 + (eax_7 << 1), 
    eax_6 + (eax_8 << 1), SWP_SHOWWINDOW)
