// 函数: sub_65e900
// 地址: 0x65e900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

(*(*arg1 + 8))(arg1)
void* eax_2 = arg1[1]

if (eax_2 != 0)
    (*(eax_2 + 0x28))(arg1)

arg1[1] = 0
arg1[5] = 0
_exit(1)
noreturn
