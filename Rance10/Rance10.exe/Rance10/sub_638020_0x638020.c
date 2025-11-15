// 函数: sub_638020
// 地址: 0x638020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
void* eax_2 = *(arg1 + 4)

if (*(eax_2 + 4) != 6 || (*(eax_2 + 8) & 4) != 0)
    sub_638cd0(arg1)

int32_t eax_3 = *(arg1 + 8)
int16_t edi

if ((eax_3 & 0x100) != 0)
    edi = (*(**(*(arg1 + 0xc) + 4) + 0x20))(arg2)
else if ((eax_3 & 0x800) == 0)
    edi = arg2.w
else
    int32_t* ecx_1 = *(arg1 + 0xc)
    uint32_t var_28 = zx.d(arg2.w)
    int32_t* var_24
    sub_633ee0(*ecx_1, &var_24, &var_28, &var_28:2)
    int32_t* edx_1 = var_24
    int32_t var_14
    int32_t var_10
    int16_t edi_1
    
    if (var_14 != 1)
        edi_1 = var_28.w
    else
        int32_t* eax_8 = &var_24
        
        if (var_10 u>= 8)
            eax_8 = edx_1
        
        edi_1 = *eax_8
    
    if (var_10 u>= 8)
        sub_403160(edx_1, var_10 + 1, 2)
    
    edi = edi_1

void* esi_1 = *(arg1 + 4)
int32_t eax_10 = *(esi_1 + 0x18)

if (*(esi_1 + 0x14) u<= eax_10)
    int32_t var_3c_3 = (eax_10 + 0x10) * 2
    int32_t var_40_3 = *(esi_1 + 0x1c)
    int32_t eax_12 = _realloc()
    
    if (eax_12 == 0)
        sub_6d08ed()
        noreturn
    
    *(esi_1 + 0x1c) = eax_12
    *(esi_1 + 0x14) = eax_10 + 0x10

int32_t result = *(esi_1 + 0x1c)
*(result + (*(esi_1 + 0x18) << 1)) = edi
*(esi_1 + 0x18) += 1
@__security_check_cookie@4(eax_1 ^ &var_2c)
return result
