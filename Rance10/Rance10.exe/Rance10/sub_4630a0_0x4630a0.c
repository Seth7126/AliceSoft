// 函数: sub_4630a0
// 地址: 0x4630a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t edi = arg2[1]
int32_t edi_1 = edi - *arg2
bool cond:0 = edi == *arg2
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (not(cond:0))
    void* eax_1 = sub_4039d0(edi_1)
    *arg1 = eax_1
    arg1[1] = eax_1
    arg1[2] = *arg1 + edi_1
    char* eax_4 = *arg2
    void* edi_3 = arg2[1] - eax_4
    char* esi_1 = *arg1
    sub_6feca0(esi_1, eax_4, edi_3)
    arg1[1] = edi_3 + esi_1

return arg1
