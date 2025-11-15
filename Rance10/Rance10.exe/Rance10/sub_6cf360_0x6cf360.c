// 函数: sub_6cf360
// 地址: 0x6cf360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = data_7fd4c4
int32_t* edi = arg3
int32_t* esi = edx
int32_t* eax = edx[1]

if (*(eax + 0xd) == 0)
    arg1 = *edi
    
    do
        if (eax[4] u>= arg1)
            esi = eax
            eax = *eax
        else
            eax = eax[2]
    while (*(eax + 0xd) == 0)

if (esi != edx && *edi u>= esi[4])
    *arg2 = esi
    arg2[1].b = 0
    return arg2

int32_t* var_c = arg1
arg3 = edi
int32_t** var_10 = &arg3
int32_t* eax_3
int32_t* ecx
eax_3, ecx = sub_6cf400(arg1)
int32_t* var_c_1 = eax_3
sub_6cf430(ecx, &arg3, esi, &eax_3[4])
*arg2 = arg3
arg2[1].b = 1
return arg2
