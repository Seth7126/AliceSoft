// 函数: sub_47ef50
// 地址: 0x47ef50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_40
int32_t eax_1 = __security_cookie ^ &var_40
void* edi = data_7fcb68
var_40 = 0

if (*(edi + 4) == 0)
    int32_t* ecx_1 = data_7fcb88
    int32_t eax_3
    
    if (ecx_1 != 0)
        eax_3 = (**ecx_1)(0x75ff30)
        *(edi + 4) = eax_3
    
    if (ecx_1 == 0 || eax_3 == 0)
        *(arg1 + 0x14) = 0xf
        *(arg1 + 0x10) = 0
        *arg1 = 0
        @__security_check_cookie@4(eax_1 ^ &var_40)
        return arg1

void* var_3c
sub_403360(&var_3c, (*(**(edi + 4) + 0x24))())
int32_t var_2c

if (var_2c == 0)
    void* var_24
    sub_409670(&var_3c, sub_63cfe0(&var_24))
    int32_t var_10
    
    if (var_10 u>= 0x10)
        sub_403160(var_24, var_10 + 1, 1)

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_4056a0(arg1, &var_3c)
int32_t var_28

if (var_28 u>= 0x10)
    sub_403160(var_3c, var_28 + 1, 1)

@__security_check_cookie@4(eax_1 ^ &var_40)
return arg1
