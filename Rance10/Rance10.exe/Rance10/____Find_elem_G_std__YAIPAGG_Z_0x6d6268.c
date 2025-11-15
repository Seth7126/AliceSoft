// 函数: ??$_Find_elem@G@std@@YAIPAGG@Z
// 地址: 0x6d6268
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* eax = arg1

for (int16_t i = *arg1; i != 0; i = *eax)
    if (i == arg2)
        break
    
    eax = &eax[1]

return (eax - arg1) s>> 1
