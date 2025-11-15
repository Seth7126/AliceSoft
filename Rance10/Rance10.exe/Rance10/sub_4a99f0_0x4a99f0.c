// 函数: sub_4a99f0
// 地址: 0x4a99f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4a9b40(arg1)
int32_t* ecx = *(arg1 + 0x14)
int32_t* eax_4

if (ecx != 0)
    eax_4 = (*(*ecx + 0xc))(1, 1, 0x20)

int32_t result
char var_2c

if (ecx == 0 || eax_4 == 0)
    int32_t var_18 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x7615e4, 0x34)
    int32_t var_8_3 = 0
label_4a9af7:
    sub_45aae0(&var_2c)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    result.b = 0
else
    if (*(arg1 + 0xc) == 0)
        sub_54d770(arg1 + 0xc)
    
    sub_450940(*(arg1 + 0xc), eax_4)
    *(arg1 + 0x22) = 0
    (*(*eax_4 + 4))(eax_2)
    int32_t eax_6 = sub_565e60(data_7fd4cc)
    
    if (eax_6 == 0xffffffff)
        sub_403360(&var_2c, 0x761658)
        int32_t var_8_1 = 1
        goto label_4a9af7
    
    if (sub_566160(data_7fd4cc, eax_6, *(arg1 + 8)).b != 0)
        *(arg1 + 0x7c) = eax_6
        result.b = 1
    else
        void var_44
        sub_403360(&var_44, 0x76161c)
        int32_t var_8_2 = 2
        sub_45aae0(&var_44)
        sub_403320(&var_44)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
