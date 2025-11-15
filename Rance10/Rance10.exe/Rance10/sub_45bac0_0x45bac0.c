// 函数: sub_45bac0
// 地址: 0x45bac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bc60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    int32_t* ebx_1 = arg3
    
    if (ebx_1 s> 0)
        struct common::SuicideRefCounter<class ICGSurface>::decodecg::CCGSurface::VTable** result =
            sub_6e810c(0x14)
        arg3 = result
        result[1] = 1
        *result =
            &decodecg::CCGSurface::`vftable'{for `common::SuicideRefCounter<class ICGSurface>'}
        result[2] = 0
        result[3] = 0
        result[4] = 0
        bool eax_6
        bool cond:2_1
        
        switch ((*(*arg1 + 0xc))(arg2, ebx_1) - 1)
            case 0
                int32_t var_8_1 = 0
                struct decodecg::CDecodeBMP::VTable* var_34
                eax_6 = sub_45b6d0(sub_45b650(&var_34), result, arg2, ebx_1, arg1[2])
            label_45bb69:
                int32_t var_8_2 = 0xffffffff
                cond:2_1 = eax_6 != 0
                goto label_45bb75
            case 1
                int32_t var_8_3 = 1
                struct decodecg::CDecodeQNT::VTable* var_48
                eax_6 = sub_45caf0(sub_45c8f0(&var_48), result, arg2, ebx_1, arg1[2])
                goto label_45bb69
            case 2
                if (sub_45b1d0(result, arg2, ebx_1, arg1[2]) != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
            case 3
                int32_t* var_5c_7 = arg1
                int32_t var_60_7 = arg1[2]
                
                if (sub_45acd0(result, arg2, ebx_1) != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
            case 4
                struct decodecg::CDecodePNG::VTable* var_18
                struct decodecg::CDecodePNG::VTable** eax_10 = sub_45c7e0(&var_18)
                int32_t var_8_4 = 2
                int32_t var_5c_4 = arg1[2]
                int32_t* var_60_4 = ebx_1
                int32_t var_8_5 = 0xffffffff
                ebx_1.b = sub_45c4b0(eax_10[1], result, arg2) == 0
                sub_45c860(&var_18)
                cond:2_1 = ebx_1.b == 0
            label_45bb75:
                
                if (cond:2_1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
            case 5
                int32_t var_8_6 = 3
                struct decodecg::CDecodeTGA::VTable* var_2c
                eax_6 =
                    sub_45d2c0(EnumC13Lines::EnumC13Lines(&var_2c), result, arg2, ebx_1, arg1[2])
                goto label_45bb69
        
        (*result)->vFunc_1(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
