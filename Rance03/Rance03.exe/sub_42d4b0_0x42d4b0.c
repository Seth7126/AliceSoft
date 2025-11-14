// 函数: sub_42d4b0
// 地址: 0x42d4b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b53d7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_204
int32_t eax_2 = __security_cookie ^ &var_204
int32_t __saved_edi
int32_t var_214 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

switch (arg2)
    case nullptr
        sub_402670(arg4, "void")
    case 0xa
        sub_402670(arg4, "int")
    case 0xb
        sub_402670(arg4, "float")
    case 0xc
        sub_402670(arg4, "string")
    case 0xd
        void var_198
        sub_408340(arg4, sub_42d330(arg1, &var_198, arg3))
        sub_401fb0(&var_198)
    case 0xe
        sub_402670(arg4, "array@int")
    case 0xf
        sub_402670(arg4, "array@float")
    case 0x10
        sub_402670(arg4, "array@string")
    case 0x11
        void var_1f8
        char* eax_7 = sub_42d3f0(arg1, &var_1f8, arg3)
        int32_t var_c_1 = 0
        void var_168
        void* eax_8 = sub_401f60(&var_168, "array@")
        var_c_1.b = 1
        void var_1c8
        sub_408340(arg4, sub_410a20(eax_8, eax_8, &var_1c8, eax_7))
        sub_401fb0(&var_1c8)
        sub_401fb0(&var_168)
        int32_t var_c_2 = 0xffffffff
        sub_401fb0(&var_1f8)
    case 0x12
        sub_402670(arg4, "ref int")
    case 0x13
        sub_402670(arg4, "ref float")
    case 0x14
        sub_402670(arg4, "ref string")
    case 0x15
        void var_1b0
        char* eax_10 = sub_42d330(arg1, &var_1b0, arg3)
        int32_t var_c_3 = 2
        void var_1e0
        void* eax_11 = sub_401f60(&var_1e0, "ref ")
        var_c_3.b = 3
        void var_138
        sub_408340(arg4, sub_410a20(eax_11, eax_11, &var_138, eax_10))
        sub_401fb0(&var_138)
        sub_401fb0(&var_1e0)
        int32_t var_c_4 = 0xffffffff
        sub_401fb0(&var_1b0)
    case 0x16
        sub_402670(arg4, "ref arra@int")
    case 0x17
        sub_402670(arg4, "ref array@float")
    case 0x18
        sub_402670(arg4, "ref array@string")
    case 0x19
        void var_150
        char* eax_13 = sub_42d330(arg1, &var_150, arg3)
        int32_t var_c_5 = 4
        void var_180
        sub_408340(arg4, sub_421670(eax_13.b, "ref array@", &var_180, eax_13))
        sub_401fb0(&var_180)
        int32_t var_c_6 = 0xffffffff
        sub_401fb0(&var_150)
    case 0x1b
        sub_402670(arg4, "functype")
    case 0x1e
        sub_402670(arg4, "array@functype")
    case 0x1f
        sub_402670(arg4, "ref functype")
    case 0x20
        sub_402670(arg4, "ref array@functype")
    case 0x2f
        sub_402670(arg4, "bool")
    case 0x32
        sub_402670(arg4, "array@bool")
    case 0x33
        sub_402670(arg4, "ref bool")
    case 0x34
        sub_402670(arg4, "ref array@bool")
    case 0x3f
        sub_402670(arg4, "delegate")
    case 0x43
        sub_402670(arg4, "ref delegate")
    default
        sub_402110(arg4, 0x6db000, 3)

int32_t* result

if (arg2 - 0xe u<= 0x26)
    switch (arg2 + &lookup_table_42d94c[0x3e])
        case &lookup_table_42d998, &lookup_table_42d998[1], &lookup_table_42d998[2], 
                &lookup_table_42d998[3], &lookup_table_42d998[8], &lookup_table_42d998[9], 
                &lookup_table_42d998[0xa], &lookup_table_42d998[0xb], &lookup_table_42d998[0x10], 
                &lookup_table_42d998[0x12], &lookup_table_42d998[0x24], &lookup_table_42d998[0x26]
            result = (*(**(arg1 + 8) + 0x24))(arg3)
            
            if (result != 0xffffffff)
                result += 1
            
            if (result s> 1)
                int32_t* result_1 = result
                char var_120
                __swprintf_c(&var_120, 0x100, 0x6db034)
                
                if (var_120 != 0)
                    char* ecx_49 = &var_120
                    char i
                    
                    do
                        i = *ecx_49
                        ecx_49 = &ecx_49[1]
                    while (i != 0)
                    void var_11f
                    sub_4057c0(arg4, &var_120, ecx_49 - &var_11f)
                else
                    sub_4057c0(arg4, &var_120, nullptr)
            else if (result == 0xffffffff)
                sub_405780(arg4, "@?")

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_204)
return result
