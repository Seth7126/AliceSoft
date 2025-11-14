// 函数: sub_685200
// 地址: 0x685200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** edx = data_75de88
int32_t* edi = arg2
void** esi = edx
void** eax = edx[1]

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
    return &esi[5]

int32_t* var_c = arg1
arg2 = edi
int32_t** var_10 = &arg2
int32_t* eax_3
int32_t* ecx
eax_3, ecx = sub_6856c0(arg1)
int32_t* var_c_1 = eax_3
sub_6856f0(ecx, &arg2, esi, &eax_3[4])
return &arg2[5]
