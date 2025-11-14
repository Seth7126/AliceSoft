// 函数: sub_5e72f0
// 地址: 0x5e72f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WPARAM wParam = arg3
arg3.b = wParam.b
arg3:1.b = 0

if ((wParam.b s< 0 || wParam.b s> 0x1f) && wParam.b != 0x7f && *(arg1 + 0x14c) != 0)
    void* ecx
    
    if (wParam.b != 0)
        int32_t* ecx_1 = &arg3
        char i
        
        do
            i = *ecx_1
            ecx_1 += 1
        while (i != 0)
        ecx = ecx_1 - &arg3:1
    else
        ecx = nullptr
    
    sub_4057c0(arg1 + 0x128, &arg3, ecx)

return DefWindowProcA(arg2, 0x102, wParam, arg4)
