// 函数: ?_Makpat@?$_Mpunct@G@std@@AAEXAAUpattern@money_base@2@III@Z
// 地址: 0x6de0bb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_5

if (*(arg1 + 0x28) != 0 || arg3 u> 2 || arg4 u> 1 || arg5 u> 4)
    eax_5 = "$+xv"
else
    eax_5 = &(*"+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ "
    "v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v")[((arg4 + (arg3 << 1)) * 5 + arg5) << 2]

return _memcpy_s(arg2, 4, eax_5, 4)
