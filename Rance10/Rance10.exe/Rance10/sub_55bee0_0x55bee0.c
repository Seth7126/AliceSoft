// 函数: sub_55bee0
// 地址: 0x55bee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t esi_2 = (arg2[1] - *arg2) s>> 2
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (esi_2 != 0)
    if (esi_2 u> 0x3fffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    void* eax_1 = sub_4046d0(esi_2)
    *arg1 = eax_1
    arg1[1] = eax_1
    arg1[2] = *arg1 + (esi_2 << 2)
    char* eax_4 = *arg2
    void* edi_2 = arg2[1] - eax_4
    char* esi_3 = *arg1
    sub_6feca0(esi_3, eax_4, edi_2)
    arg1[1] = edi_2 + esi_3

return arg1
