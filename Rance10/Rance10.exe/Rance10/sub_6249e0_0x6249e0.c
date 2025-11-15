// 函数: sub_6249e0
// 地址: 0x6249e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
void* edx = arg1 + 4
int32_t* ecx_1 = sub_405480(arg2, &var_1c, 0, *(arg1 + 0x14))
void* esi_1 = edx + 0x10

if (*(arg1 + 0x18) u>= 0x10)
    edx = *edx

if (ecx_1[5] u>= 0x10)
    ecx_1 = *ecx_1

int32_t esi_2 = *esi_1
int32_t eax_3 = esi_2
int32_t edi_1 = ecx_1[4]

if (edi_1 u< esi_2)
    eax_3 = edi_1

int32_t result = sub_406ac0(eax_3, edx, ecx_1, eax_3)
bool cond:2 = result == 0

if (result == 0)
    bool c_1 = esi_2 u< edi_1
    
    if (esi_2 == edi_1 || c_1)
        result = neg.d(sbb.d(result, result, c_1))
    else
        result = 0xffffffff
    
    cond:2 = result == 0

int32_t ebx
ebx.b = cond:2
int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c, var_8 + 1, 1)

result.b = ebx.b
@__security_check_cookie@4(eax_1 ^ &var_1c)
return result
