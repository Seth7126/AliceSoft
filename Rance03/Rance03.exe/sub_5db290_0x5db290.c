// 函数: sub_5db290
// 地址: 0x5db290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
char* eax_2 = sub_403070(arg2, &var_1c, 0, *(arg1 + 0x14))
void* edx = arg1 + 4
int32_t edi = *(edx + 0x10)
int32_t* ecx_1 = eax_2

if (*(arg1 + 0x18) u>= 0x10)
    edx = *edx

int32_t esi_1 = ecx_1[4]

if (ecx_1[5] u>= 0x10)
    ecx_1 = *ecx_1

int32_t eax_3 = edi

if (esi_1 u< edi)
    eax_3 = esi_1

int32_t result = sub_405190(eax_3, edx, ecx_1, eax_3)
bool cond:3 = result == 0

if (result == 0)
    if (esi_1 u>= edi)
        result.b = esi_1 != edi
    else
        result = 0xffffffff
    
    cond:3 = result == 0

int32_t ebx
ebx.b = cond:3
int32_t var_8

if (var_8 u>= 0x10)
    j__free(var_1c)

result.b = ebx.b
sub_69a5bc(eax_1 ^ &var_1c)
return result
