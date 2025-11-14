// 函数: sub_608b20
// 地址: 0x608b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = arg2
void** edi = *arg1
void** esi = edi
void** eax = edi[1]

while (*(eax + 0xd) == 0)
    if (eax[4] u>= *ecx)
        esi = eax
        eax = *eax
    else
        eax = eax[2]

if (esi != edi && *ecx u>= esi[4])
    return &esi[5]

int32_t* var_10 = ecx
arg2 = ecx
int32_t** var_14 = &arg2
int32_t* eax_3 = sub_608ba0(ecx)
sub_608bd0(arg1, &arg2, esi, &eax_3[4], eax_3)
return &arg2[5]
