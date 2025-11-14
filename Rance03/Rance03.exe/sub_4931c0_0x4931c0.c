// 函数: sub_4931c0
// 地址: 0x4931c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t var_34 = arg2
void var_3c
char var_1c
int32_t* eax_3 = sub_487b00(&var_1c, var_3c)
void** result_2 = sub_417ed0(arg1 + 0x20, eax_3)
int32_t* result

if (result_2 != *(arg1 + 0x20))
    result = sub_40c3a0(eax_3, &result_2[4])

void** result_1

if (result_2 == *(arg1 + 0x20) || result.b != 0)
    result = *(arg1 + 0x20)
    result_1 = result
else
    result_1 = result_2

void** result_3 = result_1
int32_t var_8

if (var_8 u>= 0x10)
    result = j__free(var_1c.d)

int32_t var_8_1 = 0xf
int32_t var_c = 0
var_1c = 0

if (result_3 != *(arg1 + 0x20))
    int32_t* ecx_1 = *(result_3[0xa] + 0x18)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
    
    int32_t* edi_1 = result_3[0xa]
    
    if (edi_1 != 0)
        if (edi_1[5] u>= 0x10)
            j__free(*edi_1)
        
        edi_1[5] = 0xf
        edi_1[4] = 0
        *edi_1 = 0
        j__free(edi_1)
    
    result = sub_417fb0(arg1 + 0x20, &result_1, result_3)

sub_69a5bc(eax_1 ^ &var_24)
return result
