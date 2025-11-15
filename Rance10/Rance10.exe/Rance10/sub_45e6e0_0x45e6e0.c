// 函数: sub_45e6e0
// 地址: 0x45e6e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(*arg2 + 0x18))() != 0x20)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

int32_t ebp_1 = (*(*arg2 + 0x1c))() * (*(*arg2 + 0x14))()
char* eax_5 = (*(*arg2 + 8))(0, 0)
int32_t var_24 = 0.d
void* var_c = nullptr
int32_t var_8 = 0
int32_t var_4 = 0
sub_405b10(&var_c, eax_5, &eax_5[ebp_1])
int32_t* esi = arg1 + 4
sub_45e830(esi, &var_c)
void* ecx_7 = var_c

if (ecx_7 != 0)
    sub_403160(ecx_7, var_4 - ecx_7, 1)

int32_t eax_8 = 0

if (ebp_1 s> 0)
    do
        char* esi_2 = *(arg1 + 4) + eax_8
        eax_8 += 4
        ecx_7.b = esi_2[2]
        char edx_2 = *esi_2
        *esi_2 = ecx_7.b
        esi_2[2] = edx_2
    while (eax_8 s< ebp_1)
    
    esi = arg1 + 4

*(arg1 + 0x18) = (*(*arg2 + 0x10))()
*(arg1 + 0x1c) = (*(*arg2 + 0x14))()
int32_t eax_14 = (*(*arg2 + 0x18))()
*(arg1 + 0x20) = eax_14
int32_t eax_15
int32_t edx_3
edx_3:eax_15 = sx.q(eax_14)
*(arg1 + 0x30) = (eax_15 + (edx_3 & 7)) s>> 3
*(arg1 + 0x24) = (*(*arg2 + 0x1c))()
*(arg1 + 0x28) = (*(*arg2 + 0x20))()
*(arg1 + 0x2c) = (*(*arg2 + 0x24))()
char eax_27 = (*(*arg2 + 0x28))()
bool cond:0 = *(arg1 + 0x2c) == 0
*(arg1 + 0x2d) = eax_27

if (cond:0)
    *(arg1 + 0x10) = 0
else
    *(arg1 + 0x10) = *esi

if (eax_27 == 0)
    *(arg1 + 0x14) = 0
    return 1

*(arg1 + 0x14) = *esi + 3
int32_t eax_29
eax_29.b = 1
return eax_29
