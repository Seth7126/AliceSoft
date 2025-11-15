// 函数: sub_69d280
// 地址: 0x69d280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0xc)
HRESULT result = arg2
HRESULT result_1 = result

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    result = result_1
    *(arg1 + 0xc) = 0

if (result == 0)
    result.b = 0
else
    void var_40
    
    if (CoCreateInstance(&data_752b64, 0, CLSCTX_INPROC_SERVER, &data_752a84, arg1 + 0xc) s>= 0)
        int32_t* eax_5 = *(arg1 + 0xc)
        
        if ((*(*eax_5 + 0x28))(eax_5, 0) s< 0)
            if (*(arg1 + 8) != 0)
                goto label_69d31d
            
            sub_403360(&var_40, "DirectSound")
            int32_t var_8_3 = 1
            goto label_69d305
        
        int32_t* eax_6 = *(arg1 + 0xc)
        (*(*eax_6 + 0x18))(eax_6, result_1, 2)
        int32_t* eax_7 = *(arg1 + 0xc)
        int128_t var_7c
        __builtin_memset(&var_7c, 0, 0x24)
        var_7c.d = 0x24
        var_7c:4.d = 9
        var_7c:8.d = 0
        int128_t var_6c
        __builtin_memset(&var_6c, 0, 0x14)
        int32_t* var_80 = nullptr
        
        if ((*(*eax_7 + 0xc))(eax_7, &var_7c, &var_80, 0) s< 0)
            void var_58
            sub_403360(&var_58, "DirectSound")
            int32_t var_8_4 = 2
            sub_45aae0(&var_58)
            int32_t var_8_5 = 0xffffffff
            sub_403320(&var_58)
        
        int32_t* ecx_12 = var_80
        int128_t var_28 = zx.o(0)
        var_28:0xe.d = 0x10
        var_28.d = 0x20001
        var_28:4.d = 0xac44
        var_28:0xc.w = 4
        var_28:8.d = 0x2b110
        
        if (ecx_12 != 0)
            (*(*ecx_12 + 0x38))(ecx_12, &var_28)
            int32_t* eax_10 = var_80
            (*(*eax_10 + 8))(eax_10)
        
        result.b = 1
    else
        if (*(arg1 + 8) != 0)
            goto label_69d31d
        
        sub_403360(&var_40, "DirectSound")
        int32_t var_8_1 = 0
    label_69d305:
        sub_6c52e0(&var_40)
        int32_t var_8_2 = 0xffffffff
        sub_403320(&var_40)
        *(arg1 + 8) = 1
    label_69d31d:
        int32_t* ecx_4 = *(arg1 + 0xc)
        
        if (ecx_4 != 0)
            (*(*ecx_4 + 8))(ecx_4)
            *(arg1 + 0xc) = 0
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
