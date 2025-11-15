// 函数: sub_5a1a80
// 地址: 0x5a1a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e9a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, 0x7698f4, 0xf)
int32_t var_8_1 = 0
char* esi = &var_2c
char* edx = &var_2c

if (var_18 u>= 0x10)
    esi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

void* esi_1 = arg1
int32_t var_80 = 0.d
sub_6ca200(arg1 + 4, *(esi_1 + 8), edx, var_1c + esi)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result

if ((*(arg2 + 0x29c) - *(arg2 + 0x298)) s/ 0x1c s> 0)
    int32_t ebx_1 = 0
    
    if ((*(arg2 + 0x29c) - *(arg2 + 0x298)) s/ 0x1c s<= 0)
    label_5a1cb4:
        int32_t var_30_1 = 0xf
        void* const var_34_1 = nullptr
        char var_44 = 0
        sub_403490(&var_44, "\r\n\r\n", 4)
        char* esi_3 = &var_44
        int32_t var_8_5 = 2
        char* edx_17 = &var_44
        
        if (var_30_1 u>= 0x10)
            esi_3 = var_44.d
        
        if (var_30_1 u>= 0x10)
            edx_17 = var_44.d
        
        int32_t var_80_2 = 0.d
        sub_6ca200(arg1 + 4, *(arg1 + 8), edx_17, var_34_1 + esi_3)
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        result.b = 1
    else
        int32_t eax_16 = 0
        char var_48
        var_48.d = 0
        
        while (sub_5a1d40(esi_1, *(arg2 + 0x298) + eax_16).b != 0)
            int32_t ecx_9 = *(arg2 + 0x29c) - *(arg2 + 0x298)
            int32_t eax_17
            int32_t edx_10
            edx_10:eax_17 = muls.dp.d(0x92492493, ecx_9)
            int32_t edx_12 = (edx_10 + ecx_9) s>> 4
            
            if (ebx_1 s< (edx_12 u>> 0x1f) - 1 + edx_12)
                int32_t var_18_1 = 0xf
                void* const var_1c_2 = nullptr
                var_2c = 0
                sub_403490(&var_2c, ",\r\n", 3)
                int32_t var_8_3 = 1
                char* esi_2 = &var_2c
                char* edx_13 = &var_2c
                
                if (var_18_1 u>= 0x10)
                    esi_2 = var_2c.d
                
                if (var_18_1 u>= 0x10)
                    edx_13 = var_2c.d
                
                esi_1 = arg1
                int32_t var_80_1 = 0.d
                sub_6ca200(esi_1 + 4, *(esi_1 + 8), edx_13, var_1c_2 + esi_2)
                int32_t var_8_4 = 0xffffffff
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            ebx_1 += 1
            var_48.d += 0x1c
            eax_16 = var_48.d
            
            if (ebx_1 s>= (*(arg2 + 0x29c) - *(arg2 + 0x298)) s/ 0x1c)
                goto label_5a1cb4
        
        result.b = 0
else
    int32_t var_20_1 = data_7fd4e0
    int32_t var_1c_1 = 0
    int128_t xmm0_2 = data_7fd4d8.q.o
    int32_t var_6c = 0
    int32_t var_68_1 = 1
    int128_t var_64_1 = xmm0_2
    int32_t var_54_1 = 0
    
    if (sub_5a1d40(esi_1, &var_6c).b != 0)
        goto label_5a1cb4
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
