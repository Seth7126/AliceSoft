// 函数: sub_626230
// 地址: 0x626230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = arg3
int32_t* ecx = sub_61b380(arg1, &arg3, esi)
char* eax = arg3

if (eax != arg1[1])
    *arg2 = eax
    arg2[1].b = 0
    return arg2

int32_t* eax_1 = arg1[1]
int32_t* var_c_1 = ecx
arg3 = esi
int32_t* esi_1 = *eax_1
int32_t* var_10_1 = &arg3
int32_t* eax_2 = sub_626310(esi_1, esi_1[1], ecx)
int32_t eax_3 = arg1[2]

if (0xffffffe - eax_3 u< 1)
    sub_6d0927("list<T> too long")
    noreturn

arg1[2] = eax_3 + 1
esi_1[1] = eax_2
*eax_2[1] = eax_2
int32_t* eax_7 = *arg1[1]
sub_60f220(arg1, arg2, &eax_7[2], eax_7)
return arg2
