// 函数: sub_422010
// 地址: 0x422010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7290ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = arg3
int32_t* result
void var_78
void var_60
char* eax_7

if (arg2 - 0xa u> 0x52)
label_422120:
    int32_t* result_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, "<%7d>", 5)
    int32_t var_8_3 = 2
    char var_48
    int32_t* eax_15 = sub_409350(&var_7c, &var_30, &var_48, &var_7c)
    
    if (arg4 != eax_15)
        int32_t eax_16 = arg4[5]
        
        if (eax_16 u>= 0x10)
            sub_403160(*arg4, eax_16 + 1, 1)
        
        arg4[5] = 0xf
        bool cond:1_1 = arg4[5] u< 0x10
        arg4[4] = 0
        int32_t* eax_18
        
        if (cond:1_1)
            eax_18 = arg4
        else
            eax_18 = *arg4
        
        *eax_18 = 0
        sub_4056a0(arg4, eax_15)
    
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48.d, var_34 + 1, 1)
    
    result = result_1
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (result u>= 0x10)
        result = sub_403160(var_30.d, result + 1, 1)
else
    switch (arg2 + &jump_table_4221f0[2]:2)
        case &lookup_table_422204, &lookup_table_422204[0x52]
            sub_403360(&var_60, "%d")
            int32_t var_8_1 = 0
            eax_7 = sub_409350(&var_7c, &var_60, &var_78, &var_7c)
        label_422089:
            sub_409670(arg4, eax_7)
            sub_403320(&var_78)
            result = sub_403320(&var_60)
        case &lookup_table_422204[1]
            sub_403360(&var_60, "%.5f")
            int32_t var_8_2 = 1
            eax_7 = sub_417920(&var_7c, &var_60, &var_78, &var_7c)
            goto label_422089
        case &lookup_table_422204[2]
            int32_t* eax_10 = (*(**(arg1 + 8) + 4))(arg3)
            
            if (eax_10 != 0)
                result = sub_4073f0((*(*eax_10 + 0x18))(eax_2))
            else
                result = sub_403450(0x75cd17)
        case &lookup_table_422204[3], &lookup_table_422204[4], &lookup_table_422204[5], 
                &lookup_table_422204[6], &lookup_table_422204[7], &lookup_table_422204[8], 
                &lookup_table_422204[9], &lookup_table_422204[0xa], &lookup_table_422204[0xb], 
                &lookup_table_422204[0xc], &lookup_table_422204[0xd], &lookup_table_422204[0xe], 
                &lookup_table_422204[0xf], &lookup_table_422204[0x10], &lookup_table_422204[0x11], 
                &lookup_table_422204[0x12], &lookup_table_422204[0x13], &lookup_table_422204[0x14], 
                &lookup_table_422204[0x15], &lookup_table_422204[0x16], &lookup_table_422204[0x17], 
                &lookup_table_422204[0x18], &lookup_table_422204[0x19], &lookup_table_422204[0x1a], 
                &lookup_table_422204[0x1b], &lookup_table_422204[0x1c], &lookup_table_422204[0x1d], 
                &lookup_table_422204[0x1e], &lookup_table_422204[0x1f], &lookup_table_422204[0x20], 
                &lookup_table_422204[0x21], &lookup_table_422204[0x22], &lookup_table_422204[0x23], 
                &lookup_table_422204[0x24], &lookup_table_422204[0x26], &lookup_table_422204[0x27], 
                &lookup_table_422204[0x28], &lookup_table_422204[0x29], &lookup_table_422204[0x2a], 
                &lookup_table_422204[0x2b], &lookup_table_422204[0x2c], &lookup_table_422204[0x2d], 
                &lookup_table_422204[0x2e], &lookup_table_422204[0x2f], &lookup_table_422204[0x30], 
                &lookup_table_422204[0x31], &lookup_table_422204[0x32], &lookup_table_422204[0x33], 
                &lookup_table_422204[0x34], &lookup_table_422204[0x35], &lookup_table_422204[0x36], 
                &lookup_table_422204[0x37], &lookup_table_422204[0x38], &lookup_table_422204[0x39], 
                &lookup_table_422204[0x3a], &lookup_table_422204[0x3b], &lookup_table_422204[0x3c], 
                &lookup_table_422204[0x3d], &lookup_table_422204[0x3e], &lookup_table_422204[0x3f], 
                &lookup_table_422204[0x40], &lookup_table_422204[0x41], &lookup_table_422204[0x42], 
                &lookup_table_422204[0x43], &lookup_table_422204[0x44], &lookup_table_422204[0x45], 
                &lookup_table_422204[0x46], &lookup_table_422204[0x47], &lookup_table_422204[0x48], 
                &lookup_table_422204[0x49], &lookup_table_422204[0x4a], &lookup_table_422204[0x4b], 
                &lookup_table_422204[0x4c], &lookup_table_422204[0x4d], &lookup_table_422204[0x4e], 
                &lookup_table_422204[0x4f], &lookup_table_422204[0x50], &lookup_table_422204[0x51]
            goto label_422120
        case &lookup_table_422204[0x25]
            char const* const eax_13 = "true"
            
            if (arg3 == 0)
                eax_13 = "false"
            
            result = sub_403450(eax_13)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
