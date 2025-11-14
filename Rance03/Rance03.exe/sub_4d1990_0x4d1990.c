// 函数: sub_4d1990
// 地址: 0x4d1990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
void* esi = *(arg1 + 0x34)
int32_t var_20
char* result = sub_511120(esi, &var_20, 2)
int32_t ebx
ebx.b = *(result + 0x10) == 0
int32_t var_c

if (var_c u>= 0x10)
    result = j__free(var_20)

if (ebx.b == 0)
    int32_t* ecx_1 = *(esi + 0x20)
    
    if (ecx_1 != 0)
        result = (*(*ecx_1 + 8))()

sub_69a5bc(eax_1 ^ &var_24)
return result
