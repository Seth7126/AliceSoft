// 函数: sub_4dcfa0
// 地址: 0x4dcfa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_30 = arg2
void** var_38
char var_1c
int32_t* eax_3 = sub_4ce600(&var_1c, var_38)
void** esi = sub_432330(arg1 + 8, eax_3)
char eax_6

if (esi != *(arg1 + 8))
    eax_6 = sub_412ca0(eax_3, &esi[4])

if (esi == *(arg1 + 8) || eax_6 != 0)
    esi = *(arg1 + 8)

int32_t* result_1
int32_t* result = result_1

if (result u>= 0x10)
    result = sub_403160(var_1c.d, result + 1, 1)

int32_t var_8 = 0xf
int32_t var_c = 0
var_1c = 0

if (esi != *(arg1 + 8))
    int32_t* ecx_1 = *(esi[0xa] + 0x18)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
    
    int32_t* ecx_2 = esi[0xa]
    
    if (ecx_2 != 0)
        int32_t* var_30_3 = ecx_2
        sub_4dd060(ecx_2)
    
    result = sub_46f200(arg1 + 8, &var_20, esi)

@__security_check_cookie@4(eax_1 ^ &var_20)
return result
