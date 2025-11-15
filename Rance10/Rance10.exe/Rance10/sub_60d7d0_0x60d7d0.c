// 函数: sub_60d7d0
// 地址: 0x60d7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg3
int32_t* ecx = sub_60c2a0(arg1, &arg3, esi)
void** eax = arg3

if (eax != arg1[1])
    *arg2 = eax
    arg2[1].b = 0
    return arg2

int32_t* eax_1 = arg1[1]
int32_t* var_c_1 = ecx
arg3 = esi
void* esi_1 = *eax_1
int32_t* var_10_1 = &arg3
int32_t* eax_2 = sub_60e7c0(esi_1, *(esi_1 + 4), ecx)
int32_t eax_3 = arg1[2]

if (0x71c71c6 - eax_3 u< 1)
    sub_6d0927("list<T> too long")
    noreturn

arg1[2] = eax_3 + 1
*(esi_1 + 4) = eax_2
*eax_2[1] = eax_2
void* eax_7 = *arg1[1]
void* var_c_2 = eax_7
sub_60df70(arg1, arg2, eax_7 + 8)
return arg2
