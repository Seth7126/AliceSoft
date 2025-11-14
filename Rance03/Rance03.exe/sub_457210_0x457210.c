// 函数: sub_457210
// 地址: 0x457210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t* edx = arg2
char* ecx_1 = sub_460970(arg1, &var_20)
int32_t edi = edx[4]

if (edx[5] u>= 0x10)
    edx = *edx

int32_t esi = *(ecx_1 + 0x10)

if (*(ecx_1 + 0x14) u>= 0x10)
    ecx_1 = *ecx_1

int32_t eax_3 = edi

if (esi u< edi)
    eax_3 = esi

int32_t result = sub_405190(eax_3, edx, ecx_1, eax_3)
bool cond:3 = result == 0

if (result == 0)
    if (esi u>= edi)
        result.b = esi != edi
    else
        result = 0xffffffff
    
    cond:3 = result == 0

int32_t ebx
ebx.b = cond:3
int32_t var_c

if (var_c u>= 0x10)
    j__free(var_20)

result.b = ebx.b
sub_69a5bc(eax_1 ^ &var_20)
return result
