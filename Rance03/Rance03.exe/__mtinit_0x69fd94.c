// 函数: __mtinit
// 地址: 0x69fd94
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

__init_pointers()
sub_6a674b()
int32_t eax_2 = sub_69f708(sub_69faef)
data_74a564 = eax_2

if (eax_2 == 0xffffffff)
    __mtterm()
    return 0

uint32_t* eax_3 = sub_69e723(1, 0x3bc)

if (eax_3 != 0 && sub_69f764(data_74a564, eax_3) != 0)
    __initptd(eax_3, 0)
    uint32_t eax_5 = GetCurrentThreadId()
    eax_3[1] = 0xffffffff
    *eax_3 = eax_5
    return 1

__mtterm()
return 0
