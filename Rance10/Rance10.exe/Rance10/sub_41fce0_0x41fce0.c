// 函数: sub_41fce0
// 地址: 0x41fce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728e89
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_98 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_8_1 = 0
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
var_8_1.b = 1

if (arg4 == 0)
    int32_t i_1 = (*(**(arg1 + 8) + 0x20))(arg3) + 1
    
    if (i_1 s> 0)
        int32_t i
        
        do
            sub_407430(&var_48, "array<", 6)
            sub_407430(&var_30, U">", 1)
            i = i_1
            i_1 -= 1
        while (i != 1)

int32_t eax_7 = (*(**(arg1 + 8) + 0x24))(arg3) - 0xa

if (eax_7 u> 0x53)
label_420055:
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_403490(arg2, 0x75cd0e, nullptr)
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    
    if (var_34 u>= 0x10)
        sub_403160(var_48.d, var_34 + 1, 1)
else
    uint32_t eax_8 = zx.d(lookup_table_420114[eax_7])
    void var_90
    void var_78
    void var_60
    int32_t* eax_9
    int32_t* eax_15
    void* ecx_19
    
    switch (eax_8)
        case 0
            eax_9 = sub_4175e0(eax_8, &var_48, &var_60, "int")
            var_8_1.b = 2
        label_41fddb:
            sub_417750(eax_9, eax_9, arg2, &var_30)
            ecx_19 = &var_60
            goto label_41fde6
        case 1
            eax_9 = sub_4175e0(eax_8, &var_48, &var_60, "float")
            var_8_1.b = 6
            goto label_41fddb
        case 2
            eax_9 = sub_4175e0(eax_8, &var_48, &var_60, "string")
            var_8_1.b = 8
            goto label_41fddb
        case 3
            char* eax_10 = sub_420280(arg1, &var_90, arg3)
            var_8_1.b = 0xa
            int32_t* eax_11 = sub_407820(eax_10, &var_48, &var_60, eax_10)
            var_8_1.b = 0xb
            sub_417750(eax_11, eax_11, arg2, &var_30)
            sub_403320(&var_60)
            ecx_19 = &var_90
        label_41fde6:
            sub_403320(ecx_19)
            sub_403320(&var_30)
            sub_403320(&var_48)
        case 4
            eax_9 = sub_4175e0(eax_8, &var_48, &var_60, "ref int")
            var_8_1.b = 3
            goto label_41fddb
        case 5
            eax_9 = sub_4175e0(eax_8, &var_48, &var_60, "ref float")
            var_8_1.b = 7
            goto label_41fddb
        case 6
            eax_9 = sub_4175e0(eax_8, &var_48, &var_60, "ref string")
            var_8_1.b = 9
            goto label_41fddb
        case 7
            int32_t* eax_12 = sub_420280(arg1, &var_78, arg3)
            var_8_1.b = 0xc
            int32_t* eax_13 = sub_4175e0(eax_12, &var_48, &var_60, "ref ")
            var_8_1.b = 0xd
            int32_t* eax_14 = sub_4177a0(eax_13, eax_13, &var_90, eax_12)
            var_8_1.b = 0xe
            sub_417750(eax_14, eax_14, arg2, &var_30)
            sub_403320(&var_90)
            sub_403320(&var_60)
            ecx_19 = &var_78
            goto label_41fde6
        case 8
            eax_9 = sub_4175e0(eax_8, &var_48, &var_60, "bool")
            var_8_1.b = 4
            goto label_41fddb
        case 9
            eax_9 = sub_4175e0(eax_8, &var_48, &var_60, "ref bool")
            var_8_1.b = 5
            goto label_41fddb
        case 0xa
            eax_15 = sub_4175e0(eax_8, &var_48, &var_78, "delegate")
            var_8_1.b = 0xf
        label_41ff8c:
            sub_417750(eax_15, eax_15, arg2, &var_30)
            ecx_19 = &var_78
            goto label_41fde6
        case 0xb
            eax_15 = sub_4175e0(eax_8, &var_48, &var_78, "ref delegate")
            var_8_1.b = 0x10
            goto label_41ff8c
        case 0xc
            char* eax_16 = sub_420280(arg1, &var_60, arg3)
            var_8_1.b = 0x11
            int32_t* eax_17 = sub_4175e0(eax_16, &var_48, &var_90, "ref ")
            var_8_1.b = 0x12
            char* eax_18 = sub_4177a0(eax_17, eax_17, &var_78, eax_16)
            var_8_1.b = 0x13
            sub_417750(eax_18, eax_18, arg2, &var_30)
            sub_403320(&var_78)
            sub_403320(&var_90)
            ecx_19 = &var_60
            goto label_41fde6
        case 0xd
            eax_15 = sub_4175e0(eax_8, &var_48, &var_78, "enum")
            var_8_1.b = 0x14
            goto label_41ff8c
        case 0xe
            eax_15 = sub_4175e0(eax_8, &var_48, &var_78, "ref enum")
            var_8_1.b = 0x15
            goto label_41ff8c
        case 0xf
            goto label_420055

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
