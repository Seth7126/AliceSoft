// 函数: sub_492c40
// 地址: 0x492c40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcb78
int32_t* var_c = arg1
int32_t* var_8 = arg1
int32_t eax = *(edi + 4)

if (arg1 s>= eax && *(edi + 8) s> eax)
    int32_t esi_1 = *(edi + 0x14)
    int32_t* var_1c_1 = arg1
    int32_t* eax_2 = sub_404790(&var_8, esi_1, *(edi + 0x10), &var_8)
    
    if (eax_2 != esi_1 && *eax_2 == arg1)
        sub_6feca0(eax_2, &eax_2[1], esi_1 - &eax_2[1])
        *(edi + 0x14) -= 4

sub_494190(&var_8, &var_c)
int32_t* eax_3 = data_7fcb84
int32_t* esi_2 = var_8

if (esi_2 != *eax_3)
    int32_t* ecx_3 = esi_2[5]
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 4))()
        eax_3 = data_7fcb84
    
    sub_4803d0(eax_3, &var_8, esi_2)

sub_4947a0(data_7fcb7c, &var_8, &var_c)
int32_t var_4
return sub_4941f0(data_7fcb7c, &var_8, var_8, var_4)
