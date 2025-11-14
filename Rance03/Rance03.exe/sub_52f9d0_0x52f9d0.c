// 函数: sub_52f9d0
// 地址: 0x52f9d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c3a4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_108
int32_t eax_2 = __security_cookie ^ &var_108
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* result

if (*(arg1 + 8) != 0)
    int32_t* ecx = *(arg1 + 4)
    int32_t __saved_edi
    
    if (ecx == 0)
        result.b = 1
    else if ((*(*ecx + 0x14))(__security_cookie ^ &__saved_edi).b == 0)
        result.b = 1
    else
        void var_100
        sub_535530(&var_100)
        int32_t var_c_1 = 0
        char var_b3_1 = 0
        (*(*arg3 + 0xc4))(1)
        (*(*arg3 + 0xc8))(1)
        int32_t* ecx_4 = *(arg1 + 4)
        int128_t var_fc_1 = *arg4
        int128_t var_ec_1 = arg4[1]
        int128_t var_dc_1 = arg4[2]
        int128_t var_cc_1 = arg4[3]
        int128_t var_b0
        __builtin_memcpy(&var_b0, 
            "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x"
        "80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x24)
        
        if (ecx_4 == 0)
            result.b = 0
        else if ((*(*ecx_4 + 0x24))().b == 0)
            result.b = 0
        else if (sub_58c7b0(arg2, &var_100).b == 0)
            result.b = 0
        else if ((*(**(arg1 + 4) + 0x34))().b != 0)
            result.b = 1
        else
            result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_108)
return result
