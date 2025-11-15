// 函数: sub_527ab0
// 地址: 0x527ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 8) = 0
void** edx = *(arg1 + 0xc)
void** eax = edx
void** esi = edx[1]

while (*(esi + 0xd) == 0)
    if (esi[4] u>= arg2)
        eax = esi
        esi = *esi
    else
        esi = esi[2]

if (eax == edx || arg2 u< eax[4])
    eax = edx

if (eax != edx)
    int32_t* ecx = eax[5]
    *(arg1 + 8) = ecx
    return sub_4a7710(ecx)

int32_t* i = *(arg1 + 4) - 1
int32_t* var_10

while (i u< (*(arg1 + 0x18) - *(arg1 + 0x14)) s>> 2)
    void** eax_5 = *(arg1 + 0xc)
    void** esi_1 = eax_5
    void** ecx_1 = eax_5[1]
    
    while (*(ecx_1 + 0xd) == 0)
        if (ecx_1[4] u>= arg2)
            esi_1 = ecx_1
            ecx_1 = *ecx_1
        else
            ecx_1 = ecx_1[2]
    
    if (esi_1 == eax_5 || arg2 u< esi_1[4])
        esi_1 = eax_5
    
    if (esi_1 != eax_5)
        int32_t var_2c_1 = 0x830
        operator new(esi_1[5])
        sub_4347d0(arg1 + 0xc, &var_10, esi_1)
    
    char* eax_6 = *(arg1 + 0x14)
    sub_6feca0(eax_6, &eax_6[4], *(arg1 + 0x18) - &eax_6[4])
    *(arg1 + 0x18) -= 4

int32_t* eax_10 = sub_6e810c(0x830)
*eax_10 = 0xffffffff
_memset(&eax_10[1], 0, 0x824)
eax_10[0x20a] = arg2
eax_10[0x20b] = 0
int32_t ecx_7 = sub_4a7790(eax_10, arg2)
int32_t* var_2c_5 = eax_10
var_10 = arg2
int32_t** var_30_4 = &var_10
int32_t* var_c = eax_10
int32_t* var_8
sub_435350(arg1 + 0xc, &var_8, ecx_7)
void** eax_11 = *(arg1 + 0xc)
void** edx_3 = eax_11
void** ecx_9 = eax_11[1]

while (*(ecx_9 + 0xd) == 0)
    if (ecx_9[4] u>= arg2)
        edx_3 = ecx_9
        ecx_9 = *ecx_9
    else
        ecx_9 = ecx_9[2]

if (edx_3 == eax_11 || arg2 u< edx_3[4])
    edx_3 = eax_11

*(arg1 + 8) = edx_3[5]
return sub_42ca30(arg1 + 0x14, arg1 + 8)
