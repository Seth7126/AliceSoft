// 函数: sub_635940
// 地址: 0x635940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ce57b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0 && arg3 s> 0)
    struct decodecg::CDecodePNG::VTable* eax_3 = sub_69adc6(0x20)
    struct decodecg::CDecodePNG::VTable* var_4c = eax_3
    int32_t var_c_1 = 0
    struct decodecg::CDecodePNG::VTable* result
    
    if (eax_3 == 0)
        result = nullptr
    else
        eax_3->vFunc_0 = &decodecg::CCGSurface::`vftable'{for `ICGSurface'}
        sub_5f4370(&eax_3[1])
        result = 0
    
    int32_t var_c_2 = 0xffffffff
    int32_t eax_6 = (*(*arg1 + 0xc))(arg2, arg3) - 1
    struct decodecg::CDecodeQNT::VTable* var_44
    char eax_7
    
    if (eax_6 u> 5)
        (*(result->vFunc_0 + 4))(eax_2)
    else
        switch (eax_6)
            case 0
                var_44 = &decodecg::CDecodeBMP::`vftable'
                int128_t var_40_1
                __builtin_memset(&var_40_1, 0, 0x18)
                int32_t var_c_3 = 1
                eax_7 = sub_635470(&var_44, result, arg2, arg3)
            label_635a1e:
                
                if (eax_7 != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
                
                (*(result->vFunc_0 + 4))(eax_2)
            case 1
                struct decodecg::CDecodeQNT::VTable** ecx_6 = &var_44
                sub_636400(ecx_6)
                int32_t var_c_4 = 2
                eax_7 = sub_636610(ecx_6, result, arg2, arg3)
                goto label_635a1e
            case 2, 3
                (*(result->vFunc_0 + 4))(eax_2)
            case 4
                sub_636380(&var_4c)
                int32_t var_68_4 = arg3
                int32_t var_c_5 = 3
                uint32_t var_6c_4 = arg2
                uint32_t* var_48
                
                if (sub_635df0(var_48, result) != 0)
                    j__free(var_48)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
                
                (*(result->vFunc_0 + 4))(eax_2)
                j__free(var_48)
            case 5
                var_44 = &decodecg::CDecodeTGA::`vftable'
                int128_t var_40_2 = zx.o(0)
                int32_t var_c_6 = 4
                
                if (sub_636d80(&var_44, result, arg2, arg3) != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
                
                (*(result->vFunc_0 + 4))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
