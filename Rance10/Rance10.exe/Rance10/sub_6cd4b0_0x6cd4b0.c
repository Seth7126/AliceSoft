// 函数: sub_6cd4b0
// 地址: 0x6cd4b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[4].b == 0)
    goto label_6cd538

int32_t* ecx = *arg1
int32_t eax_7

if (ecx != 0)
    eax_7 = (*(*ecx + 0x4c))(ecx)

char* result
void* var_30

if (ecx == 0 || eax_7 s>= 0)
    arg1[4].b = 0
label_6cd538:
    
    if (*arg1 == 0)
        result = sub_6cd2e0(arg1)
    
    if (*arg1 == 0 && result.b == 0)
        result.b = 0
    else
        HDC eax_9 = GetDC(GetDesktopWindow())
        int32_t eax_10 = GetDeviceCaps(eax_9, 0xc)
        ReleaseDC(GetDesktopWindow(), eax_9)
        int32_t arg_8
        int32_t eax_12 = sub_6cd220(arg1, arg_8, arg2, eax_10)
        int32_t edx_2
        
        if (eax_12 s>= 0)
            int32_t eax_13
            int32_t edx_1
            edx_1:eax_13 = muls.dp.d(0x2aaaaaab, arg1[2] - arg1[1])
            edx_2 = edx_1 s>> 1
        
        char var_48
        
        if (eax_12 s< 0 || eax_12 s>= (edx_2 u>> 0x1f) + edx_2)
            sub_403360(&var_30, 0x79a258)
            int32_t var_8_4 = 1
            var_8_4.b = 2
            sub_6c52e0(sub_422a40(&arg_8, &var_30, &var_48, &arg_8, arg2, eax_10))
            int32_t var_34
            
            if (var_34 u>= 0x10)
                sub_403160(var_48.d, var_34 + 1, 1)
            
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            char* var_1c
            
            if (var_1c u>= 0x10)
                sub_403160(var_30, &var_1c[1], 1)
            
            result.b = 0
        else
            int32_t* eax_17 = *arg1
            
            if ((*(*eax_17 + 0x50))(eax_17, 0, 8) s>= 0)
                int32_t* edx_4 = arg1[1]
                int32_t* eax_20 = *arg1
                int32_t esi_4 = eax_12 * 0xc
                
                if ((*(*eax_20 + 0x54))(eax_20, edx_4[eax_12 * 3], edx_4[eax_12 * 3 + 1], 
                        edx_4[eax_12 * 3 + 2], 0, 0) s>= 0)
                    *arg3 = *(esi_4 + arg1[1])
                    *arg4 = *(esi_4 + arg1[1] + 4)
                    result.b = 1
                    arg1[4].b = 1
                else
                    void var_60
                    sub_403360(&var_60, "DirectDraw")
                    int32_t var_8_3 = 5
                    void* eax_23 = arg1[1] + esi_4
                    var_8_3.b = 6
                    void var_78
                    sub_6c52e0(sub_422a40(eax_23, &var_60, &var_78, eax_23, *(eax_23 + 4), 
                        *(eax_23 + 8)))
                    sub_403320(&var_78)
                    sub_403320(&var_60)
                    result.b = 0
            else
                sub_403360(&var_30, "DirectDraw")
                int32_t var_8_2 = 3
                var_8_2.b = 4
                sub_6c52e0(sub_6ca360(&var_48, &var_30))
                sub_403320(&var_48)
                sub_403320(&var_30)
                result.b = 0
else
    sub_403360(&var_30, "DirectDraw")
    int32_t var_8_1 = 0
    sub_6c52e0(&var_30)
    sub_403320(&var_30)
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
