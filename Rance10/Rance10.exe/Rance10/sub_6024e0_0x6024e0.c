// 函数: sub_6024e0
// 地址: 0x6024e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_20 = 0
int32_t esi = arg1[3]
int32_t var_1c
int32_t var_14

if (arg2 u> esi)
    int32_t eax_1 = *arg1
    int32_t ecx = 0
    var_1c = eax_1
    int32_t var_18_1 = 0
    
    if (esi != 0)
        sub_602850(&var_1c, esi)
        ecx = var_18_1
        eax_1 = var_1c
    
    sub_602600(arg1, &var_14, arg2 - esi, &var_20, eax_1, ecx)
    return 

if (arg2 u>= esi)
    return 

int32_t eax_3 = *arg1
int32_t ebp_1 = eax_3
var_1c = ebp_1
int32_t var_18_2 = 0

if (esi != 0)
    sub_602850(&var_1c, esi)
    ebp_1 = var_1c
    eax_3 = *arg1

var_14 = eax_3
int32_t var_10_1 = 0
void var_c
int32_t* eax_4 = sub_6025a0(&var_14, &var_c, arg2)
sub_602710(arg1, &var_14, *eax_4, eax_4[1], ebp_1, var_18_2)
