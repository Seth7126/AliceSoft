// 函数: sub_510b20
// 地址: 0x510b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg1
void** i = *esi
void** i_1 = i

for (; i != esi; i = i_1)
    if (arg3 == i[0xa])
        goto label_510ba1
    
    sub_429080(&i_1)

int32_t* edi_1 = sub_432330(arg1, arg2)

if (edi_1 != esi)
    i = sub_412ca0(arg2, &edi_1[4])

if (edi_1 == esi || i.b != 0)
    edi_1 = esi

if (edi_1 != esi)
label_510ba1:
    i.b = 0
    return i

sub_514f90(arg1, &i_1, arg2)
i_1[0xa] = arg3
void** eax_1
eax_1.b = 1
return eax_1
