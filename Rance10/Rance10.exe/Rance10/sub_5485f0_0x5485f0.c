// 函数: sub_5485f0
// 地址: 0x5485f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
char* ecx_1 = sub_405480(arg1, &var_1c, 0, data_7fd2b4)
int32_t* edx = &data_7fd2a4

if (data_7fd2b8 u>= 0x10)
    edx = data_7fd2a4

if (*(ecx_1 + 0x14) u>= 0x10)
    ecx_1 = *ecx_1

int32_t esi = data_7fd2b4
int32_t eax_3 = esi
int32_t edi_1 = ecx_1[0x10].d

if (edi_1 u< esi)
    eax_3 = edi_1

int32_t result = sub_406ac0(eax_3, edx, ecx_1, eax_3)
bool cond:2 = result == 0

if (result == 0)
    bool c_1 = esi u< edi_1
    
    if (esi == edi_1 || c_1)
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
