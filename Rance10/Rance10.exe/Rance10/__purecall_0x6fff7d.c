// 函数: __purecall
// 地址: 0x6fff7d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = __get_purecall_handler()

if (eax != 0)
    j_sub_4033e0()
    eax()

_abort()
noreturn
