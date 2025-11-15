// 函数: sub_563db0
// 地址: 0x563db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = arg1[1] != 1
int32_t result = arg1[1]
arg1[1] -= 1

if (not(cond:0))
    result = (**arg1)()
    int32_t edi_1 = arg1[2]
    arg1[2] -= 1
    
    if (edi_1 == 1)
        jump(*(*arg1 + 4))

return result
