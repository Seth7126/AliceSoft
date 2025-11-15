// 函数: sub_565200
// 地址: 0x565200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* __saved_edi_2 = arg3
void** eax = *arg1
void** esi = eax
void** edx = eax[1]

while (*(edx + 0xd) == 0)
    if (edx[4] u>= *__saved_edi_2)
        esi = edx
        edx = *edx
    else
        edx = edx[2]

if (esi != eax && *__saved_edi_2 u>= esi[4])
    *arg2 = esi
    arg2[1].b = 0
    return arg2

int32_t* __saved_edi = __saved_edi_2
arg3 = __saved_edi_2
int32_t** var_10 = &arg3
int32_t* eax_3 = sub_565340(__saved_edi_2)
sub_565370(arg1, &arg3, esi, &eax_3[4], eax_3)
int32_t** eax_5 = arg2
*eax_5 = arg3
eax_5[1].b = 1
return eax_5
