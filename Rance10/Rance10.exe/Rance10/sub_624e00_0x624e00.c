// 函数: sub_624e00
// 地址: 0x624e00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3
int32_t* edi = arg1
void** eax
int32_t* ecx
eax, ecx = sub_432330(arg1, ebx)

if (eax != *edi)
    char eax_2
    eax_2, ecx = sub_412ca0(ebx, &eax[4])
    
    if (eax_2 == 0)
        *arg2 = eax
        arg2[1].b = 0
        return arg2

int32_t* var_10_2 = ecx
arg3 = ebx
int32_t** var_14_2 = &arg3
int32_t* eax_4 = sub_462090(ecx)
sub_624ee0(edi, &arg3, eax, &eax_4[4], eax_4)
*arg2 = arg3
arg2[1].b = 1
return arg2
