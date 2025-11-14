// 函数: sub_414f20
// 地址: 0x414f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT lprc
BOOL result = __security_cookie ^ &lprc
BOOL result_1 = result

if (arg2 s>= 0)
    result = (*(*arg1 + 0x90))()
    
    if (arg2 s< result)
        lprc.left = arg4
        lprc.right = arg5
        lprc.top = arg6
        lprc.bottom = arg7
        COLORREF color
        
        if (arg2 != arg1[0x1c])
            color = arg1[0x1d]
        else
            color = arg1[0x1e]
        
        HBRUSH eax_6 = CreateSolidBrush(color)
        FillRect(arg3, &lprc, eax_6)
        result = DeleteObject(eax_6)

sub_69a5bc(result_1 ^ &lprc)
return result
