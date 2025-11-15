// 函数: sub_4c5910
// 地址: 0x4c5910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
char* edx = sub_405480(arg1, &var_1c, 0, data_7fce94)

if (*(edx + 0x14) u>= 0x10)
    edx = *edx

int32_t* ecx_1 = &data_7fce84
int32_t esi_1 = edx[0x10].d
int32_t eax_3 = esi_1

if (data_7fce98 u>= 0x10)
    ecx_1 = data_7fce84

int32_t edi = data_7fce94

if (edi u< esi_1)
    eax_3 = edi

int32_t result = sub_406ac0(eax_3, edx, ecx_1, eax_3)
bool cond:2 = result == 0

if (result == 0)
    bool c_1 = esi_1 u< edi
    
    if (esi_1 == edi || c_1)
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
