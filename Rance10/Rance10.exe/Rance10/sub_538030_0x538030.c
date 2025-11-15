// 函数: sub_538030
// 地址: 0x538030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
void* edi = data_7fcba4
int32_t i = arg2
void** eax = sub_432330(edi + 0x118, arg1)
void** edi_1 = *(edi + 0x118)
void** esi = eax
char eax_2

if (esi != edi_1)
    eax_2 = sub_412ca0(arg1, &esi[4])

if (esi == edi_1 || eax_2 != 0)
    esi = edi_1

if (esi == edi_1 || esi == 0xffffffc0 || i s< 0 || esi[0x19] s<= i)
    return 0

var_4 = *esi[0x18]
bool cond:0 = i s>= 0

while (i s> 0)
    sub_429080(&var_4)
    i -= 1
    cond:0 = i s>= 0

if (not(cond:0))
    int32_t i_2 = neg.d(i)
    int32_t i_1
    
    do
        sub_429da0(&var_4)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return var_4[4]
