// 函数: sub_413360
// 地址: 0x413360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT lprc
int32_t eax_1 = __security_cookie ^ &lprc
int32_t var_4 = eax_1

if (arg2 s>= 0)
    eax_1 = (*(*arg1 + 0x90))()
    
    if (arg2 s< eax_1)
        lprc.left = arg4
        lprc.right = arg5
        lprc.top = arg6
        lprc.bottom = arg7
        
        if (arg1[0x1c] == arg2)
            HBRUSH eax_7 = CreateSolidBrush(arg1[0x1d])
            FillRect(arg3, &lprc, eax_7)
            BOOL eax_8 = DeleteObject(eax_7)
            sub_69a5bc(var_4 ^ &lprc)
            return eax_8
        
        eax_1 = FillRect(arg3, &lprc, GetStockObject(WHITE_BRUSH))

sub_69a5bc(var_4 ^ &lprc)
return eax_1
