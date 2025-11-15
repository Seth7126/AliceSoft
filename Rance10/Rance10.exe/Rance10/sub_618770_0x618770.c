// 函数: sub_618770
// 地址: 0x618770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7441d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t ebx = *eax_3
arg1[0x74] = &eax_3[1]
int32_t esi = eax_3[1]
arg1[0x74] = &eax_3[2]
int32_t* ecx = eax_3[2]
arg1[0x74] = &eax_3[3]
void* eax_6
eax_6.b = arg1[0x4a4].b
void* var_68

if (eax_6.b != 0)
    int32_t eax_9 = *(arg1[0x499] + ebx * 0xc)
    int32_t ecx_3 = esi * 7
    *(eax_9 + (ecx_3 << 3) + 0x20) += 1
    void* esi_1 = eax_9 + (ecx_3 << 3)
    sub_5fb6e0(esi_1 + 0x24)
    void* esi_2 = *(esi_1 + 0x28)
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    *(esi_2 - 8) = performanceCount
    *(esi_2 - 4) = var_68

char* result

if (ebx != 0)
label_61884c:
    int32_t eax_12
    int32_t edx_1
    edx_1:eax_12 = muls.dp.d(0x66666667, arg1[0x2b] - arg1[0x2a])
    int32_t edx_2 = edx_1 s>> 4
    void* eax_17
    
    if (ebx u< (edx_2 u>> 0x1f) + edx_2)
        eax_17 = arg1[0x2a] + ebx * 0x28
        var_68 = eax_17
    
    void* var_2c
    
    if (ebx u>= (edx_2 u>> 0x1f) + edx_2 || eax_17 == 0)
        sub_403360(&var_2c, 0x76cef0)
        int32_t var_8_3 = 0
        sub_612230(arg1, "CALLHLL", &var_2c)
        char* result_1
        result = result_1
        
        if (result u>= 0x10)
            result = sub_403160(var_2c, &result[1], 1)
    else
        void* eax_18 = sub_60a1c0(&arg1[0x11], ebx, esi)
        
        if (eax_18 != 0)
            int32_t var_78 = 0
            int32_t var_74_1 = 0
            int32_t var_70_1 = 0
            int32_t var_8_2 = 2
            sub_618a70(arg1, &var_78, eax_18 + 0x20, ecx)
            void* ecx_14 = var_68
            void var_44
            
            if (*(ecx_14 + 0x24) == 0)
                if (*(eax_18 + 0x2c) != 0)
                    sub_405d30(&arg1[0x7d], sub_618c30(arg1, eax_18, &var_78))
                label_6189e2:
                    result = sub_61b330(&var_78)
                    goto label_6189e7
                
                sub_403360(&var_44, 0x76ce70)
                var_8_2.b = 6
                sub_612230(arg1, "CALLHLL", &var_44)
                sub_403320(&var_44)
                result = sub_61b330(&var_78)
            else
                void var_28
                sub_608f40(ecx_14, &var_28, esi, &var_78)
                var_8_2.b = 3
                
                if (sub_602010(&var_28, &arg1[0x7d]) != 0)
                    sub_601b50(&var_28)
                    goto label_6189e2
                
                void* eax_23 = eax_18 + 4
                
                if (*(eax_23 + 0x14) u>= 0x10)
                    eax_23 = *eax_23
                
                var_68 = eax_23
                sub_403360(&var_44, 0x76cec8)
                var_8_2.b = 4
                var_8_2.b = 5
                void var_5c
                sub_612230(arg1, "CALLHLL", sub_409240(&var_68, &var_44, &var_5c, &var_68))
                sub_403320(&var_5c)
                sub_403320(&var_44)
                sub_601b50(&var_28)
                result = sub_61b330(&var_78)
        else
            sub_403360(&var_2c, 0x76ce94)
            int32_t var_8_1 = 1
            sub_612320(arg1, &var_2c)
            result = sub_403320(&var_2c)
else
    if (esi != 0)
        if (esi != 1)
            goto label_61884c
        
        result = sub_617bb0(arg1)
        goto label_6189e7
    
    result = sub_617990(arg1)
label_6189e7:
    
    if (arg1[0x4a4].b != 0)
        result = sub_5fb5f0(*(arg1[0x499] + ebx * 0xc) + esi * 0x38)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
